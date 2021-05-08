#pragma once
#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include "clasa_Orfani.h"
#include "clasa_Jucarii.h"
using namespace std;

class Orfelinat {
protected:
    vector<Jucarie> jucarii;
    vector<Orfan> orfani;
    int nr_camere;
    int angajati;
    float venit_alocat;


public:
    void setAngajati(int angajati) {this->angajati=angajati;}
    int getAngajati(){return angajati;}
    void setJucarii(vector<Jucarie> jucarii) { this->jucarii = move(jucarii); }
    vector<Jucarie> getJucarii() { return jucarii; }
    void setOrfani(vector<Orfan> orfani) { this->orfani = move(orfani); }
    vector<Orfan> getOrfani() { return orfani; }
    void setnrcamere(int nr_camere){this->nr_camere=nr_camere;}
    int getnrcamere(){return nr_camere;}
    void setVenit(float venit_alocat){this->venit_alocat=venit_alocat;}
    float getVenit(){return venit_alocat;}


    Orfelinat();
   ~Orfelinat();
    Orfelinat(vector<Orfan> orfani, int nr_camere, int angajati, float venit_alocat);
    Orfelinat(int nr_camere, int angajati, float venit_alocat);
    Orfelinat(const Orfelinat& cc);
    Orfelinat& operator=(const Orfelinat& orfelinat);
    Orfelinat operator*(int x);
    friend bool operator<=(const Orfelinat& orf1,const Orfelinat& orf2);
    friend istream& operator>>(istream& in, Orfelinat& O);
    friend ostream& operator<<(ostream& out, const Orfelinat& O);
    virtual istream& CitireV(istream& in);
    virtual ostream& AfisareV(ostream& out)const;

    void premiazaOrfan(int medieMinima, Jucarie jucarii) {
        ofstream fout("file1.txt");
        //ofstream file("file2.txt");
        for (auto orfan=orfani.begin(); orfan!=orfani.end();orfan++) {
            if ((*orfan).calculeazaMediePuncte() >= medieMinima) {
                (*orfan).adaugaJucarie(jucarii);
                fout<<(*orfan).getnume()<<" "<<(*orfan).getPrenume()<<": primeste jucaria: "<<jucarii.getNumeJ()<<endl;
            }
            else
                fout<<(*orfan).getnume()<<" "<<(*orfan).getPrenume()<<": punctaj prea mic pentru a primi o jucarie  \n";
        }

    }

};


