
#include "clasa_orfelinat.h"
using namespace std;

Orfelinat::~Orfelinat(){};
Orfelinat::Orfelinat(){
    this->nr_camere=0;
    this->angajati=0;
    this->venit_alocat=0;
    this->orfani={};
}
Orfelinat::Orfelinat(vector<Orfan> orfani, int nr_camere, int angajati, float venit_alocat){
    this->nr_camere=nr_camere;
    this->angajati=angajati;
    this->venit_alocat=venit_alocat;
    this-> orfani=orfani;
}


Orfelinat::Orfelinat(int nr_camere, int angajati, float venit_alocat){
    this->nr_camere=nr_camere;
    this->angajati=angajati;
    this->venit_alocat=venit_alocat;
}

istream& Orfelinat::CitireV(istream& in){
   cout<<"\n Nr Camere: ";
    in>>this->nr_camere;
     cout<<"\n Numarul angajatilor: ";
    in>>this->angajati;
     cout<<"\n Venitul alocat orfelinatului: ";
    in>>this->venit_alocat;
    cout<<"\n Adaugati un numar de orfani \n";
     int nrOrfani;
    in>>nrOrfani;
    cout<<"\n Lista orfaniilor: ";
    Orfan orfan;
    for (int i=0;i<nrOrfani;i++){
        in>>orfan;
        this->orfani.push_back(orfan);}
    return in;
}

ostream& Orfelinat::AfisareV(ostream& out)const{
    out<<"\n Nr camere: "<<nr_camere;
    out<<"\n Nr angajati: "<<angajati;
    out<<"\n Venit alocat: "<<venit_alocat;
    out<<"\n Lista orfanilor: ";
    for(auto i=orfani.begin();i<orfani.end();i++){
        out<<*i<<", ";
    }
    return out;

}



istream& operator>>(istream& in, Orfelinat& O){
  return O.CitireV(in);
}
ostream& operator<<(ostream& out, const Orfelinat& O){
    return O.AfisareV(out);
}
Orfelinat& Orfelinat::operator=(const Orfelinat& orfelinat){
    if (this!= &orfelinat){
    this->nr_camere=orfelinat.nr_camere;
    this->angajati=orfelinat.angajati;
    this->venit_alocat=orfelinat.venit_alocat;
    this-> orfani=orfelinat.orfani;
    }
    return *this;
}
bool operator<=(const Orfelinat& orf1,const Orfelinat& orf2){
    if(orf1.venit_alocat<=orf2.venit_alocat)
        return true;
    return false;
}
Orfelinat Orfelinat::operator*(int x){
    Orfelinat aux(*this);
    aux.angajati=this->angajati*x;
    return aux;
}

Orfelinat::Orfelinat(const Orfelinat& cc){
    this->nr_camere=cc.nr_camere;
    this->angajati=cc.angajati;
    this->venit_alocat=cc.venit_alocat;
    this-> orfani=cc.orfani;

}
