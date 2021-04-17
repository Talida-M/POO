#pragma once
#include <iostream>
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
        for (auto orfan : orfani) {
            if (orfan.calculeazaMediePuncte() >= medieMinima) {
                orfan.adaugaJucarie(jucarii);
                cout<<"Primeste jucaria: "<<jucarii.getNumeJ()<<" orfanul: "<<orfan.getnume()<<endl;
            }
            else
                cout<<"Punctaj prea mic pentru a primi o jucarie! \n";
        }

    }

};


