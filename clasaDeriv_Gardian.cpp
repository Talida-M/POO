#include <iostream>
#include <string.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <ctime>
#include "clasa_Parinti_EligibiliB.h"
#include "clasa_Orfani.h"
#include "clasa_Jucarii.h"
#include <vector>


class Gardian:public Parinti_Eligibili{
private:
    string an_ocuparePost;
    int nr_orfani_in_grija;
    vector<Orfan> listaOrfani;
public:
    void setdata(string an_ocuparePost){this->an_ocuparePost=an_ocuparePost;}
    string getdata(){return this->an_ocuparePost;}
    void setnumar(int nr_orfani_in_grija){this->nr_orfani_in_grija=nr_orfani_in_grija;}
    int getnumar(){return this->nr_orfani_in_grija;}
    void setlistaOrfani(vector<Orfan> listaOrfani) { this->listaOrfani = move(listaOrfani); }
    vector<Orfan> getlistaOrfani() { return listaOrfani; }
    Gardian( string nume, bool exista_job,string ocupatie_parinte1, string ocupatie_parinte2, string an_ocuparePost,int nr_orfani_in_grija,vector<Orfan> listaOrfani):Parinti_Eligibili(nume, exista_job,ocupatie_parinte1,ocupatie_parinte2){
    this->an_ocuparePost=an_ocuparePost;
    this->nr_orfani_in_grija=nr_orfani_in_grija;
    this-> listaOrfani=listaOrfani;
}
    ///FUNCTIONALITATE:
    void adoptie(string an_ocuparePost,int nr_orfani_in_grija, vector<Orfan> listaOrfani){
        //ifstream fin("file1.txt");
        ofstream file("file2.txt");
        time_t now=time(0);
        tm* ltm=localtime(&now);
        int an_curent=1900+ltm->tm_year;
        int data=stoi(an_ocuparePost);
        if(an_curent-data>=10){
            cout<<"\n Au trecut mai mult de 10 ani de cand sunteti gardieni pentru copii din orfelinatul nostru, asadar sunteti eligibili \n pentru o adoptie \n";
            cout<<"Ati dori sa faceti o adoptie? da/nu :  \n";
            string raspuns;
            cin>>raspuns;
            if (raspuns=="da"){
                //int nr=nr_orfani_in_grija/2;
                cout<<"\n Aveti grija de "<<nr_orfani_in_grija<<" copii. Selectati din lista  pe cine ati dori sa adoptati \n. Nu puteti adopta mai mult de 3 copii, doar in cazul in care se intampla la o distanta de minim un an. \n";
                cout<<"\n Alegeti un numar intre 0 si "<< (nr_orfani_in_grija-1)<<" \n";
                int numar;
                cin>>numar;
                file<<"\n Ati ales "<<numar<<" reprezentandu-l pe "<<listaOrfani[numar]<<" ";
                file<<"\n------------------------------------------------------------------------------------------------------------\n";
                bool alegere;
                cout<<"\nAti dori sa faceti o a doua adoptie? 0/1\n";
                cin>>alegere;
                if(alegere==1){
                    cout<<"\n Inca o alegere: ";
                    cin>>numar;
                file<<"\n Ati ales "<<numar<<" reprezentandu-l pe "<<listaOrfani[numar]<<" \n\n\n";
                }
                file<<"\n------------------------------------------------------------------------------------------------------------\n";
                cout<<"\nAti dori sa faceti o ultima  adoptie? 0/1\n";
                cin>>alegere;
                if(alegere==1){
                cout<<"\n Inca o alegere: ";
                cin>>numar;
                file<<"\n Ati ales "<<numar<<" reprezentandu-l pe "<<listaOrfani[numar]<<"\n \n\n";
                }

            }
            else
                file<<"Va multumim pentru raspuns!";

        }
    }

    Gardian();
    Gardian (const Gardian& gard); //cc
    Gardian &operator =(const Gardian& gd);
    virtual istream& CitireV(istream& in);
    virtual ostream& AfisareV(ostream& out)const;
    ~Gardian(){this->listaOrfani.clear();}
};


