#include "clasa_Orfani.h"
using namespace std;


int Orfan::Nr_Orfan=2012;


void Orfan::setPunctajeActivitatiZ(float* punctaj_activitati, string* activitati_zilnice ){
    for(int i=0;i<3;i++)
        this-> activitati_zilnice[i]=activitati_zilnice[i];
    if (activitati_zilnice!=NULL)
        for(int i=0;i<3;i++)
            this->punctaj_activitati[i]=punctaj_activitati[i];
    else
        this->punctaj_activitati=NULL;
}

///Const fara param :
Orfan::Orfan():ID(Nr_Orfan++){
    nume=new char[strlen("Anonim")+1];
    strcpy(this->nume, "Anonim");
    this->prenume="?";
    this->cod_personal="?";
    this->varsta=0;
    this->birth_date="?";
    this-> activitati_zilnice=new string[3];
    for (int i=0; i<3;i++)
        this->activitati_zilnice[i]="?";
    this-> punctaj_activitati=new float[3];
     for (int i=0; i<3;i++)
        this->punctaj_activitati[i]=0;
    this->data_sosire="?";
    this->gen='?';
    this->relatives=false;
    this->jucarii={};
}

///Const cu param:
Orfan::Orfan( string prenume, string cod_personal, int varsta, string birth_date,
                string* activitati_zilnice, string data_sosire, char gen, bool relatives):ID(Nr_Orfan++){

    this-> prenume=prenume;
    this-> cod_personal=cod_personal;
    this-> varsta=varsta;
    this-> birth_date=birth_date;
    this-> data_sosire=data_sosire;
    this-> gen=gen;
    this-> relatives=relatives;
    this-> activitati_zilnice= new string[3];
    for(int i=0;i<3;i++)
        this-> activitati_zilnice[i]=activitati_zilnice[i];
    this-> punctaj_activitati= new float[3];
    for(int i=0;i<3;i++)
        this-> punctaj_activitati[i]=punctaj_activitati[i];
}

Orfan::Orfan( char* nume, string prenume ,string cod_personal, int varsta, string birth_date,
                string* activitati_zilnice, float* punctaj_activitati, string data_sosire, char gen, bool relatives,vector< Jucarie> jucarii):ID(Nr_Orfan++){

    this->nume=new char[strlen(nume)+1];
    strcpy( this->nume,nume);
    //this->nume=nume;
    this-> prenume=prenume;
    this-> cod_personal=cod_personal;
    this-> varsta=varsta;
    this-> birth_date=birth_date;
    this-> data_sosire=data_sosire;
    this-> gen=gen;
    this-> relatives=relatives;
    this-> activitati_zilnice= new string[3];
    for(int i=0;i<3;i++)
        this-> activitati_zilnice[i]=activitati_zilnice[i];
    this-> punctaj_activitati= new float[3];
    for(int i=0;i<3;i++)
        this-> punctaj_activitati[i]=punctaj_activitati[i];
    this->jucarii=jucarii;

}


Orfan::Orfan(const Orfan& cc):ID(Nr_Orfan++){ ///cc
    this->nume=new char[strlen(cc.nume)+1];
    strcpy( this->nume, cc.nume);
    this-> prenume=cc.prenume;
    this-> cod_personal=cc.cod_personal;
    this-> varsta=cc.varsta;
    this-> birth_date=cc.birth_date;
    this-> data_sosire=cc.data_sosire;
    this-> gen=cc.gen;
    this-> relatives=cc.relatives;
    this-> activitati_zilnice= new string[3];
    this-> punctaj_activitati= new float[3];
    for(int i=0;i<3;i++)
        this-> activitati_zilnice[i]=cc.activitati_zilnice[i];
    for(int i=0;i<3;i++)
        this-> punctaj_activitati[i]=cc.punctaj_activitati[i];
    this->jucarii=cc.jucarii;
}


istream& operator >>(istream& in, Orfan& o){ ///op >>
    cout<<"\n nume: ";
    char aux[100];
    in>>aux;

    if(o.nume!="?")
        delete[] o.nume;
    o.nume=new char[strlen(aux)+1];
    strcpy(o.nume,aux);
    cout<<"\n prenume: ";
    in>>o.prenume;
    cout<<"\n Cod Personal: ";
    in>>o.cod_personal;
     cout<<"\n varsta: ";
    in>>o.varsta;
     cout<<"\n Data Nasterii: ";
    in>>o.birth_date;
     cout<<"\n Data Sosirii la Orfelinat: ";
    in>>o.data_sosire;
     cout<<"\n gen M/F: ";
    in>>o.gen;
     cout<<"\n Are Alte Rude 0/1: ";
    in>>o.relatives;
    cout<<"\n Activitatii zilnice la care participa (adaugati 3): ";
    for(int i=0;i<3;i++)
        in>>o.activitati_zilnice[i];
    cout<<"\n Punctajul obtiunt la activitatiile zilnice la care participa(intre 1 si 10): ";
    for(int i=0;i<3;i++)
        in>>o.punctaj_activitati[i];
    cout<<"\n Jucarii: ";
    Jucarie jucarie;
    for(int i=0;i<3;i++){
        in >> jucarie;
        o.jucarii.push_back(jucarie);
    }
    return in;
}


ostream& operator<<(ostream& out, const Orfan& o){ ///op <<
    //out<<"\n Id Orfan: "<<o.ID;
    out<<"\n nume: "<<o.nume;
    out<<"\n Prenume: "<<o.prenume;
    out<<"\n Cod Personal: "<<o.cod_personal;
    out<<"\n varsta: "<<o.varsta;
    out<<"\n Data Nasterii: "<<o.birth_date;
    out<<"\n Data Sosirii la Orfelinat: "<<o.data_sosire;
    out<<"\n genul : "<<o.gen;
    if(o.relatives==1)
        out<<"\n Exista rude";
    else
        out<<"\n Nu exista rude cunoscute deocamdata";
    for(int i=0;i<3;i++)
        out<<"\n Activitatile la care participa zilnic: "<<o.activitati_zilnice[i];
    for(int i=0;i<3;i++)
        out<<"\n Punctajul obtiunt la activitatiile zilnice : "<<o.punctaj_activitati[i];
    out<<"\n Jucarii: ";
    for (auto i=o.jucarii.begin();i<o.jucarii.end();i++)
        out<<*i<<", ";

    return out;

    }




Orfan& Orfan:: operator=(const Orfan& orf){ /// op =
    if(this!=&orf)
    {

        delete[] this-> nume;
        delete[] this-> activitati_zilnice;
         this->nume=new char[strlen(orf.nume)+1];
        strcpy( this->nume, orf.nume);
        this-> prenume=orf.prenume;
        this-> cod_personal=orf.cod_personal;
        this-> varsta=orf.varsta;
        this-> birth_date=orf.birth_date;
        this-> data_sosire=orf.data_sosire;
        this-> gen=orf.gen;
        this-> relatives=orf.relatives;
        this-> activitati_zilnice= new string[3];
        for(int i=0;i<3;i++)
            this-> activitati_zilnice[i]=orf.activitati_zilnice[i];
        for(int i=0;i<3;i++)
            this-> punctaj_activitati[i]=orf.punctaj_activitati[i];
        this->jucarii=orf.jucarii;
    }
    return *this;
}

string& Orfan::operator[](int index){
    if (index<2)
        cout<<"\ Activitati insuficiente";
    if (index>3)
        cout<<"\n A participat la activitai in afara orarului: \n";
    return activitati_zilnice[index];

}

Orfan& Orfan::operator++(int){
    for (int i=0; i<3;i++)
        this->punctaj_activitati[i]++;
    return *this;
}
Orfan Orfan::operator++(){
    Orfan aux(*this);
    for (int i=0; i<3;i++)
        this->punctaj_activitati[i]++;
    return aux;

}

