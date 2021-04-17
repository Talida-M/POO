#include "clasaDeriv_Gardian.h"
using namespace std;

istream& Gardian::CitireV(istream& in){
    Parinti_Eligibili::CitireV(in);
    cout<<"\n Data la care au devenit gardieni: ";
    in>>an_ocuparePost;
    cout<<"\nNumarul de listaOrfani pe care il au in grija: ";
    in>>nr_orfani_in_grija;
    cout<<"\n Lista de copii in grija: ";
    Orfan orfan;
    for (int i=0;i<nr_orfani_in_grija;i++){
        in>>orfan;
        listaOrfani.push_back(orfan);}
    return in;
}
ostream& Gardian::AfisareV(ostream& out)const{
    Parinti_Eligibili::AfisareV(out);
    out<<"\n Data la care au devenit gardieni: ";
    out<<an_ocuparePost;
    out<<"\nNumarul de listaOrfani pe care il au in grija: ";
    out<<nr_orfani_in_grija;
    out<<"\n Lista de copii in grija: ";
    for(auto i=listaOrfani.begin();i<listaOrfani.end();i++){
        out<<*i<<", ";}
    return out;
}


Gardian::Gardian():Parinti_Eligibili(){
    this->an_ocuparePost="DD/MM/YYYY";
    this->nr_orfani_in_grija=0;
    this-> listaOrfani={};
}

Gardian::Gardian(const Gardian& gard):Parinti_Eligibili(gard){
    this->an_ocuparePost=gard.an_ocuparePost;
    this->nr_orfani_in_grija=gard.nr_orfani_in_grija;
    this-> listaOrfani=gard.listaOrfani;
}
Gardian& Gardian:: operator=(const Gardian& gd){
    if(this!=&gd){
        Parinti_Eligibili::operator=(gd);
    this->an_ocuparePost=gd.an_ocuparePost;
    this->nr_orfani_in_grija=gd.nr_orfani_in_grija;
    this-> listaOrfani=gd.listaOrfani;
    }
    return *this;
}

