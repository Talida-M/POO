#include "clasa_Jucarii.h"
using namespace std;
Jucarie ::~Jucarie(){}; //deconstructor

Jucarie:: Jucarie(const Jucarie& cc){ //constructor de copiere
    this->nume=cc.nume;
    this->pret=cc.pret;
    this->culoare=cc.culoare;
    this->stoc=cc.stoc;
    this->cantitateJ=cc.cantitateJ;
}



Jucarie::Jucarie(string nume, float pret, string culoare){
    this->nume=nume;
    this->pret=pret;
    this->culoare=culoare;
}
Jucarie::Jucarie(string nume, string culoare, float pret, bool stoc, int cantitateJ){
    this->nume=nume;
    this->culoare=culoare;
    this->pret=pret;
    this->stoc=stoc;
    this->cantitateJ=cantitateJ;
}
Jucarie::Jucarie() {
    this->nume="?";
    this->pret=0;
    this->culoare="?";
    this->stoc=false;
    this->cantitateJ=0;
}

Jucarie& Jucarie:: operator++(){
    this->cantitateJ++;
    return *this;
}
Jucarie Jucarie:: operator++(int){
    Jucarie cant(*this);
    this->cantitateJ++;
    return cant;
}

Jucarie Jucarie:: operator-(int x){
    Jucarie aux(*this);
    if(aux.pret>=100)
        aux.pret=aux.pret-x;
    return aux;
}
Jucarie Jucarie:: operator +=(int x){
    Jucarie aux(*this);
    if (stoc==0)
        aux.cantitateJ+=x;
    return aux;
}


istream& operator>>(istream& in, Jucarie& jc){
    cout<<"\n nume Jucarie: ";
    in>>jc.nume;
    cout<<"\n Pretul Jucariei: ";
    in>>jc.pret;
     cout<<"\n Culoarea jucariei: ";
    in>>jc.culoare;
     cout<<"\n Se afla sau nu pe stoc: ";
    in>>jc.stoc;
     cout<<"\n Cantitate jucarii: ";
    in>>jc.cantitateJ;
    return in;
}

ostream& operator<<(ostream& out, const  Jucarie& jc){ ///op <<
    out<<"\n Nume: "<<jc.nume;
    out<<"\n Pret: "<<jc.pret;
    out<<"\n Culoare: "<<jc.culoare;
    out<<"\n Stoc: ";
    out<<jc.stoc;
    out<<"\n Cantitate: "<<jc.cantitateJ;
    return out;
}

bool operator>(const Jucarie& juc1,const Jucarie& juc2){

    if(juc1.cantitateJ>juc2.cantitateJ)
        return true;
    return false;
}
bool operator==(const Jucarie& juc1,const Jucarie& juc2){

    if(juc1.cantitateJ==juc2.cantitateJ)
        return true;
    return false;
}

Jucarie& Jucarie:: operator=(const Jucarie& juc){
    if(this!=&juc){
        this->nume=juc.nume;
        this->pret=juc.pret;
        this->culoare=juc.culoare;
        this->stoc=juc.stoc;
        this->cantitateJ=juc.cantitateJ;
    }

}
