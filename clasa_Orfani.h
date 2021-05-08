#pragma once
#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include <list>
#include <iterator>
#include "clasa_Jucarii.h"
using namespace std;



class Orfan{
private:
    char* nume;
    string prenume;
    string cod_personal;
    int varsta;
    string birth_date;
    string* activitati_zilnice;
    string data_sosire;
    char gen;
    bool relatives;
    const int ID;
    float* punctaj_activitati;
    list<Jucarie> jucarii;

public:

    void adaugaJucarie(Jucarie jucarie) {
        jucarii.push_back(jucarie);
    }

    void stergeJucarie() {
        ifstream fin("file1.txt");
        ofstream file("file2.txt");
        string nume_juc;
        //list<Jucarie> ::iterator it;
        cout<<"\n Din lista urmatoare ce jucarie doriti sa reciclati: ";
        for (auto it=jucarii.begin();it!=jucarii.end();it++)
            cout<<((*it).getNumeJ())<<" ";
        cout<<"\n Precizati jucaria din lista: \n";
        cin>>nume_juc;
        for (auto it=jucarii.begin();it!=jucarii.end();it++) {
            if ((*it).getNumeJ() == nume_juc) {
               it= jucarii.erase(it);
            }

        }
    }

    int calculeazaMediePuncte() {
        float suma = 0;
        for (int i = 0; i < 3; i++) {
            suma += punctaj_activitati[i];
        }

        return suma / 3;
    }

    static int Nr_Orfan;
    ///Setters & Getters:
    char* getnume(){return this->nume;}
    void setnume(char* nume){
         if(this->nume!=nullptr)
            delete[] this->nume;
        this->nume=new char[strlen(nume)+1];
        strcpy(this->nume,nume);
    }

    void setPrenume(string prenume){this->prenume=prenume;}
    string getPrenume(){return this->prenume;}

   /// void setCod(string cod_personal ){this->cod_personal=cod_personal;}
    string getCod(){this->cod_personal;}

    void setvarsta(int varsta){ this-> varsta= varsta;}
    int getvarsta(){return this->varsta;}

    void setBDate(string birth_date){this->birth_date=birth_date;}
    string getBDate(){return this->birth_date;}

    string getSDate(){return this->data_sosire;}

    void setgen(char gen){this->gen= gen;}
    char getgen(){return this->gen;}

    void setRude(bool relatives){this->relatives=relatives;}
    bool getRude(){return this->relatives;}

    void setPunctajeActivitatiZ(float* punctaj_activitati, string* activitati_zilnice );
    float* getPunctajeActivitatiZ(){return this->punctaj_activitati;}

    void setActivitatiZ( string* activitati_zilnice ){this->activitati_zilnice=activitati_zilnice;}
    string* getActivitatiZ(){return this->activitati_zilnice;}

    int getId(){return this->ID;}
    void setJucarii(list<Jucarie> jucarii) { this->jucarii = move(jucarii); }
    list<Jucarie> getJucarii() { return jucarii; }


    ///Restul metodelor:
    Orfan();
    ~Orfan(){};
    Orfan( string prenume ,string cod_personal, int varsta, string birth_date,
                string* activitati_zilnice, string data_sosire, char gen, bool relatives); ///c1

    Orfan( char* nume, string prenume ,string cod_personal, int varsta, string birth_date,
                string* activitati_zilnice, float* punctaj_activitati, string data_sosire, char gen, bool relatives,list< Jucarie> jucarii);///c2

    Orfan& operator=(const Orfan& orf);///operatorul =
    friend ostream& operator<<(ostream& out, const Orfan& o); // operator afisare
    friend istream& operator>>(istream& in, Orfan& o); //operator citire
    Orfan(const Orfan& cc);
    string& operator[](int index);
    Orfan& operator++(int);
    Orfan operator++();


};
