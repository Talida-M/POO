#pragma once
#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
using namespace std;

class Parinti_Eligibili{
protected:
    string nume;
    bool exista_job;
    string ocupatie_parinte1;
    string ocupatie_parinte2;
    float venit_anualp1;
    float venit_anualp2;
public:
    void setNumeP(string nume){this->nume=nume;}
    string getNumeP(){return this->nume;}
    void setExistaJob(bool exista_job){this->exista_job=exista_job;}
    bool getExistaJob(){return this->exista_job;}
    void setOcupatieP1(string ocupatie_parinte1){this->ocupatie_parinte1=ocupatie_parinte1;}
    string getOcupatieP1(){return this->ocupatie_parinte1;}
    void setOcupatieP2(string ocupatie_parinte2){this->ocupatie_parinte2=ocupatie_parinte2;}
    string getOcupatieP2(){return this->ocupatie_parinte2;}
    void setVenitParinte1(float venit_anualp1){this->venit_anualp1=venit_anualp1;}
    float getVenitParinte1(){return this->venit_anualp1;}
    void setVenitParinte2(float venit_anualp2){this->venit_anualp2=venit_anualp2;}
    float getVenitParinte2(){return this->venit_anualp2;}

    ~Parinti_Eligibili();//+
    Parinti_Eligibili();//+
    Parinti_Eligibili(const Parinti_Eligibili& cc);
    Parinti_Eligibili(string nume, bool exista_job, string ocupatie_parinte1,string ocupatie_parinte2);//+
    Parinti_Eligibili(string nume, bool exista_job, string ocupatie_parinte1,string ocupatie_parinte2, float venit_anualp1, float venit_anualp2);//+

    Parinti_Eligibili operator+(const Parinti_Eligibili& parinti){
        Parinti_Eligibili aux(*this);
        aux.venit_anualp1= this->venit_anualp1+ parinti.venit_anualp2;
        return aux;
    }

     Parinti_Eligibili operator/(int x){
        Parinti_Eligibili aux(*this);
        aux.venit_anualp1=(this->venit_anualp1+this->venit_anualp2)/x;
        return aux;
    }
    Parinti_Eligibili& operator=(const Parinti_Eligibili& pe);//+
    friend ostream& operator <<(ostream& out,const Parinti_Eligibili& p);//+
    friend istream& operator >>(istream& in, Parinti_Eligibili& p);//+
    friend bool operator <(const Parinti_Eligibili& p1,const Parinti_Eligibili& p2);//+
    friend bool operator ==(const Parinti_Eligibili& p1,const Parinti_Eligibili& p2);//+

    virtual istream& CitireV(istream& in);
    virtual ostream& AfisareV(ostream& out)const;

    void medie_venit(bool exista_job, float venit_anualp1, float venit_anualp2 ){
        //ifstream in("file1.txt");
        //ofstream file("file2.txt");
       if (exista_job==0)
        cout<<"\n Ne pare rau,nu sunteti eligibili pentru o adoptie.";
    else{
         float medie=(venit_anualp1+venit_anualp2)/2 -10*venit_anualp1/100-10*venit_anualp2/100;
        if (medie>5000)
            cout<<"\n Felicitari, sunteti pe lista de potentiali parinti pentru unul din copiii nostri!";
        else
            cout<<"\n Venituri prea mici, nu puteti momentan face adoptii!";
    }
}


};

