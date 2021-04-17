#pragma once
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
using namespace std;

class Jucarie {
private:
    string nume;
    float pret;
    string culoare;
    bool stoc;
    int cantitateJ;

public:
    void setNumeJ(string nume){this->nume=nume;}
    string getNumeJ(){return this->nume;}
    void setPret(float pret){this->pret=pret;}
    float getPret(){return this->pret;}
    void setCuloare(string culoare){this->culoare=culoare;}
    string getCuloare(){return this->culoare;}
    void setStoc(bool stoc){this->stoc=stoc;}
    bool getStoc(){return this->stoc;}
    int getCantitateJ(){return this->cantitateJ;}
    void setCantitateJ(int  cantitateJ, bool stoc){
        if (this->stoc==1)
            this->cantitateJ=cantitateJ;
    }

    Jucarie();
    Jucarie (const Jucarie& cc);
    Jucarie(string nume, float pret, string culoare);
    Jucarie(string nume, string culoare, float pret, bool stoc, int cantitateJ);
    ~Jucarie();
    Jucarie& operator++();
    Jucarie operator++(int);
    Jucarie operator-(int x);
    Jucarie operator+=(int x);
    Jucarie& operator=(const Jucarie& juc);
    friend istream& operator>>(istream& in, Jucarie& jc);
    friend ostream& operator<<(ostream& out,const Jucarie& jc);
    friend bool operator >(const Jucarie& juc1,const Jucarie& juc2);
    friend bool operator ==(const Jucarie& juc1,const Jucarie& juc2);

    void castigajucarie(){
        int nrSecret, nrGuess;
        nrSecret=rand()%10+1;
        cout<<"\n Ghiceste numarul secret pentru a castiga jucaria pe care o doresti \n Dar nu inainte de a ne spune ce ai dori sa castigi: \n";
        cout<<"Introduceti nume jucarie:  "; cin>>nume;
        cout<<"Introduceti culoarea jucariei:  "; cin>>culoare;
        cout<<"\n Ai doua incercari de a ghici numarul de la 1 la 10: ";
        for (int i=0;i<=1;i++){
            cout<<"\n Adauga numarul: ";
            cin>>nrGuess;
            if (nrGuess==nrSecret){
                cout<<"\n Felicitari ai castigat un/o "<<nume<<", culoarea: "<<culoare;
                break;
            }
            else
                cout<<"\n Numar incorect, mai incearca odata!!";
            cout<<"\n Ne pare rau, azi nu a fost ziua dumneavoastra norocoasa!!";
        }
    }
};




