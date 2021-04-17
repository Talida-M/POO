#include "clasa_Parinti_EligibiliB.h"
using namespace std;


istream& Parinti_Eligibili::CitireV(istream& in){
    cout<<"\n Nume Parinti: ";
    in>>this->nume;
    cout<<"\n Exista Job: ";
    in>>this->exista_job;
    if(this->exista_job==1){
         cout<<"\n Ocupatii parinte 1 si parinte 2: ";
        in>>this->ocupatie_parinte1;
         in>>this->ocupatie_parinte2;
         cout<<"\n Venit anual parinte 1: ";
        in>>this->venit_anualp1;
         cout<<"\n Venit anual parinte 2: ";
        in>>this->venit_anualp2;
    }

    return in;
}

ostream& Parinti_Eligibili::AfisareV(ostream& out)const{
    out<<"\n Nume: "<<nume;
    out<<"\n Exista job: ";
    out<<exista_job;
    if(exista_job==0)
        out<<"\n Nu sunteti eligibili pentru o adoptie";
    else{
        out<<"\n Ocupatii: "<<ocupatie_parinte1<<", "<<ocupatie_parinte2;
        out<<"\n  Venit anual parinte 1 : "<<venit_anualp1;
        out<<"\n  Venit anual parinte 2 : "<<venit_anualp2;
    }
    return out;
}

 Parinti_Eligibili::Parinti_Eligibili(){
    this->nume="?";
    this->exista_job=0;
    this-> ocupatie_parinte1="?";
    this-> ocupatie_parinte2="?";
    this->venit_anualp1=0;
    this->venit_anualp2=0;


 }

  Parinti_Eligibili::Parinti_Eligibili(const Parinti_Eligibili& cc){
    this->nume=cc.nume;
    this->exista_job=cc.exista_job;
    this-> ocupatie_parinte1=cc.ocupatie_parinte1;
    this-> ocupatie_parinte2=cc.ocupatie_parinte2;
    this->venit_anualp1=cc.venit_anualp1;
    this->venit_anualp2=cc.venit_anualp2;
 }
 Parinti_Eligibili::~Parinti_Eligibili(){};

Parinti_Eligibili::Parinti_Eligibili(string nume, bool exista_job, string ocupatie_parinte1,string ocupatie_parinte2){
    this-> nume=nume;
    this-> exista_job=exista_job;
    this-> ocupatie_parinte1=ocupatie_parinte1;
    this-> ocupatie_parinte2=ocupatie_parinte2;
}


Parinti_Eligibili:: Parinti_Eligibili(string nume, bool exista_job,string ocupatie_parinte1,string ocupatie_parinte2, float venit_anualp1, float venit_anualp2){
    this-> nume=nume;
    this->exista_job=exista_job;
   this-> ocupatie_parinte1=ocupatie_parinte1;
    this-> ocupatie_parinte2=ocupatie_parinte2;
    this-> venit_anualp1=venit_anualp1;
    this-> venit_anualp2=venit_anualp2;

}

istream& operator >>(istream& in, Parinti_Eligibili& p){
    return p.CitireV(in);

}

ostream& operator <<(ostream& out,const Parinti_Eligibili& p){
    return p.AfisareV(out);

}


Parinti_Eligibili& Parinti_Eligibili::operator=(const Parinti_Eligibili& pe){
    if (this!=&pe){
        this-> nume=pe.nume;
        this-> exista_job=pe.exista_job;
        this-> ocupatie_parinte1=pe.ocupatie_parinte1;
        this-> ocupatie_parinte2=pe.ocupatie_parinte2;
        this-> venit_anualp1=pe.venit_anualp1;
        this-> venit_anualp2= pe.venit_anualp2;}

    return *this;
}

bool operator<(const Parinti_Eligibili& p1, const Parinti_Eligibili& p2){
    if (p1.venit_anualp1<p2.venit_anualp2 && p1.venit_anualp2<p2.venit_anualp2)
        return true;
    return false;

}
bool operator ==(const Parinti_Eligibili& p1, const Parinti_Eligibili& p2){
    if(p1.venit_anualp1==p2.venit_anualp1)
        return true;
    return false;
 }

