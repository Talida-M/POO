#include "clasaDeriv_IstoricOrfelinat.h"
#include <iterator>
#include <map>
using namespace std;

IstoricOrfelinat::IstoricOrfelinat():Orfelinat(){
    this->nume_actual="X";
    this->listaSponsori={{1, "Pozzoli"}, {2,"Gabrielle"}, {3,"Han Suzy"},{4,"Gabani "},{5,"Stojovska "},{6, "Sincai Gheorghe"}, {7,"Modor Patrick"}};
    this->lista_denumiriVechi={"Miss Peregrine","Alice in Wonderland", "Wonderland"};
}

IstoricOrfelinat::IstoricOrfelinat(const IstoricOrfelinat& istoric):Orfelinat(istoric){
        this->nume_actual=istoric.nume_actual;
        this->listaSponsori=istoric.listaSponsori;
        this->lista_denumiriVechi=istoric.lista_denumiriVechi;

}
IstoricOrfelinat& IstoricOrfelinat::operator=(const IstoricOrfelinat& ist){
    if(this!=&ist){
        Orfelinat::operator=(ist);
        this->nume_actual=ist.nume_actual;
        this->listaSponsori=ist.listaSponsori;
        this->lista_denumiriVechi=ist.lista_denumiriVechi;
    }
    return *this;
}

istream& IstoricOrfelinat::CitireV(istream& in){
    Orfelinat::CitireV(in);
    cout<<"\n Numele actual al Orfelinatului: ";
    in>>nume_actual;
    cout<<"\n Numar de sponsori pe care doriti sa ii adaugati: ";
    int numar;
    in>>numar;
    string sponsori;
    cout<<"\n Lista de sponsori ai orfelinatului: ";
    for (int i=0;i<numar;i++){
        in>>sponsori;
        listaSponsori.insert({i,sponsori});}
    return in;
}

ostream& IstoricOrfelinat::AfisareV(ostream& out)const{
    Orfelinat::AfisareV(out);
    out<<"\n Numele actual al Orfelinatului: "<<nume_actual;
    out<<"\n Lista sponsori a orfelinatului: \n";
    //map<int, string>::iterator i;
    for(auto i=listaSponsori.begin();i!=listaSponsori.end();i++){
            out<<"\n "<<i->first<<" "<<i->second<<endl;}
    out<<"\n Lista denumiri vechi a orfelinatului: \n";
    for(auto j=lista_denumiriVechi.begin();j!=lista_denumiriVechi.end();j++){
        out<<*j<<", ";}
    return out;
}



