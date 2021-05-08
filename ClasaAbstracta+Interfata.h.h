#pragma once
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <ctime>

class Renovari_Anuale{
protected:
    int buget;
public:
    virtual void setbuget(int buget){this->buget=buget;}
    virtual int getbuget(){return this-> buget;}
     Renovari_Anuale(){
        this->buget=-1;
     }
    Renovari_Anuale(int buget){
        this->buget=buget;
    }
    ~Renovari_Anuale(){}
    Renovari_Anuale& operator=(const Renovari_Anuale& ren){
        if(this!=&ren)
            this->buget=ren.buget;
        return *this;
    }
    Renovari_Anuale(const Renovari_Anuale& renv){
        this->buget=renv.buget;
    }

    virtual ostream& AfisareV(ostream& out)const;
    virtual istream& CitireV (istream& in);

    friend istream& operator>>(istream & in,Renovari_Anuale& r);
    friend ostream& operator<<(ostream & out,const Renovari_Anuale& r);

    virtual int seteaza_buget(int buget)=0;
    virtual void renoveaza(){cout<<"\n Se fac anual diferite renovari \n";}

};
ostream& Renovari_Anuale:: AfisareV(ostream& out)const{
        out<<"\n Bugetul alocat renovarilor este: "<<buget;
        return out;
    }

istream& Renovari_Anuale:: CitireV (istream& in){
        cout<<"\n Bugetul alocat renovarilor: \n";
        in>>buget;
        return in;
    }
istream& operator>>(istream & in,Renovari_Anuale& r){
    return r.CitireV(in);
}
ostream& operator<<(ostream & out,const Renovari_Anuale& r){
    return r.AfisareV(out);
}



class Renovari_Interior:public Renovari_Anuale {
private:
    int cost=8000;
public:
    Renovari_Interior():Renovari_Anuale(){
        this->cost=8000;
    }
    Renovari_Interior(int cost, int buget):Renovari_Anuale(buget){
        this->cost=cost;
        this->buget=buget;
    }

    Renovari_Interior& operator=(const Renovari_Interior& renI){
        if(this!=&renI){
            Renovari_Anuale::operator=(renI);
            this->cost=renI.cost;
        }
        return *this;}
    Renovari_Interior(const Renovari_Interior& renvI):Renovari_Anuale(renvI){
        this->buget=renvI.buget;
    }

    virtual ostream& AfisareV(ostream& out)const;
    virtual istream& CitireV (istream& in);


       int seteaza_buget(int buget){
        return buget+15/100*buget;
    }

    void renoveaza(){
        ifstream fin("file1.txt");
        ofstream file("file2.txt");
      cout<<"\n Seteaza bugetul renovarilor interioare din anul acesta: \n";
      cin>>buget;
      int a=seteaza_buget(buget);

        if
            (cost <a){
            cout<<"\n Renovarile interioare vor incepe in maxim 2 zile lucratoare! \n";
            a=a-cost;
        }
        else
            cout<<"\n Anul acesta fondurile sunt insuficiente pentru o renovare interioara completa \n";
    }

};

ostream& Renovari_Interior:: AfisareV(ostream& out)const{
        Renovari_Anuale::AfisareV(out);
        out<<"\n  Costul total al renovarii interioare: "<<cost<<"\n";
        return out;
    }
istream& Renovari_Interior:: CitireV (istream& in){
        Renovari_Anuale::CitireV(in);
        cout<<"\n Costul total al renovarii interioare: \n";
        in>>cost;
        return in;
    }

class Renovare_Exterior: public Renovari_Anuale{
 private:
    int cost=5000;
public:

    Renovare_Exterior():Renovari_Anuale(){
        this->cost=5000;
    }
    Renovare_Exterior(int cost, int buget):Renovari_Anuale(buget){
        this->cost=cost;
        this->buget=buget;
    }
       Renovare_Exterior& operator=(const Renovare_Exterior& renE){
        if(this!=&renE){
            Renovari_Anuale::operator=(renE);
            this->cost=renE.cost;
        }
        return *this;}
    Renovare_Exterior(const Renovare_Exterior& renvE):Renovari_Anuale(renvE){
        this->buget=renvE.buget;
    }

      virtual ostream& AfisareV(ostream& out)const;
    virtual istream& CitireV (istream& in);


    virtual int seteaza_buget(int buget){
        return this->buget+5/100*this->buget;
    }

    void renoveaza(){
       // ifstream fin("file1.txt");
        //ofstream file("file2.txt");
        cout<<"\n Alege  bugetul pus la dispozitie pentru renovarea exterioara : \n";
        cin>>this->buget;
        int a=seteaza_buget(buget);
        a-=a*10/100;
        if(cost <a){
            cout<<"\n Renovarile exterioare vor incepe in maxim 3 zile lucratoare! \n";
        }
        else
            cout<<"\n Anul acesta fondurile sunt insuficiente pentru o renovare exterioara completa \n";
    }
};

ostream& Renovare_Exterior:: AfisareV(ostream& out)const{
        Renovari_Anuale::AfisareV(out);
        out<<"\n  Costul total al renovarii exterioare: "<<cost<<"\n";
        return out;
    }
istream& Renovare_Exterior:: CitireV (istream& in){
        Renovari_Anuale::CitireV(in);
        cout<<"\n Costul total al renovarii exterioare: \n";
        in>>cost;
        return in;
    }




class Date{
public:
    virtual void adaugaBonus(int bonus)=0;

};
class Date_Angajati:Date{
private:
    int bonus;
    string an_angajare;
    float salariu;
public:
    void setan(string an_angajare){this->an_angajare=an_angajare;}
    string getan(){return this->an_angajare;}
    void setsalariu(float salariu){this->salariu=salariu;}
    float getsalariu(){return this-> salariu;}
    Date_Angajati(){
        this->an_angajare="2000";
        this->salariu=400;
        }
    Date_Angajati(string an_angajare, float salariu){
         this->an_angajare=an_angajare;
        this->salariu=salariu;
    }
    Date_Angajati& operator=(const Date_Angajati& date){
        if(this!=&date){
            this->an_angajare=date.an_angajare;
            this->salariu=date.salariu;
        }
        return *this;
    }
    Date_Angajati (const Date_Angajati& d){
        this->an_angajare=d.an_angajare;
        this->salariu=d.salariu;
    }



    friend istream& operator>>(istream & in,Date_Angajati& dt);
    friend ostream& operator<<(ostream & out,const Date_Angajati& dt);


    void adaugaBonus(int bonus=10){
       // ifstream fin("file1.txt");
       // ofstream file("file2.txt");
        cout<<"\n Specificati anul angajarii si salariul curent: ";
       string an;
        cout<<"\n Anul :"; cin>>an;
        an_angajare=an;
        float sal;
        cout<<"\n Salariul actual: ";
        cin>>sal;
        this->salariu=sal;
      time_t now=time(0);
        tm* ltm=localtime(&now);
        int an_curent=1900+ltm->tm_year;
        //file<<an_curent;
        int data=stoi(an_angajare);
        //file<<" "<<an_curent-data;
        if((an_curent-data)>15){
            cout<<"\n Deoarece ati fost alaturi de noi de mai bine de 15 ani la salariul actual se va adauga un bonus de 20%.\n  Noul salariu este:  ";
           bonus+=bonus;
           float salariu_nou=this->salariu+this->salariu*bonus/100;
            cout<<salariu_nou;
    }
    if(an_curent-data>5 && an_curent-data<=15){
        cout<<"\n Deoarece ati fost alaturi de noi de mai bine de 5 ani la salariul actual se va adauga un bonus de 10%.\n  Noul salariu este:  ";
            float salariu_nou=this->salariu+this->salariu*bonus/100;
            cout<<salariu_nou;
    }
    }

};

istream& operator>>(istream & in,Date_Angajati& dt){
    cout<<"\n Introduceti salariul actual: \n";
    in>>dt.salariu;
    cout<<"\nAnul angajarii: \n";
    in>>dt.an_angajare;

}

ostream& operator<<(ostream &out,const Date_Angajati& dt){
    out<<"\n Salariul actual: \n"<<dt.salariu;
    out<<"\nAnul angajarii: \n"<<dt.an_angajare;
}




class Bonus_Sarbatori:Date{
private:
    string sarbatoare;
public:
    void setsarbatoare(string sarbatoare){this->sarbatoare=sarbatoare;}
    string getsarbatoare(){return this-> sarbatoare;}
    Bonus_Sarbatori(){
        this->sarbatoare="";
        }
    Bonus_Sarbatori(string sarbatoare){
         this->sarbatoare=sarbatoare;
    }
    Bonus_Sarbatori& operator=(const Bonus_Sarbatori& s){
        if(this!=&s){
            this->sarbatoare=s.sarbatoare;
        }
        return *this;
    }
    Bonus_Sarbatori (const Bonus_Sarbatori& sb){
        this->sarbatoare=sb.sarbatoare;
    }

    friend ostream& operator<<(ostream& out,const Bonus_Sarbatori& bo);
    friend istream& operator>>(istream& in,Bonus_Sarbatori& bo );


    void adaugaBonus(int bonus){
        //ifstream fin("file1.txt");
        //ofstream file("file2.txt");
        cout<<"\n Introduceti sarbatoarea: \n";
        cin>>sarbatoare;
        setsarbatoare(sarbatoare);
        int sal;
        cout<<"\n Salariul actual pe care il castigati este: \n";
        cin>>sal;
         bonus =sal*10/100;
        cout<<"\n In perioada in care veti sarbatori  "<<sarbatoare<< " bonusul adaugat in contul dvs este: "<< bonus<<endl;


    }


};

ostream&  operator<<(ostream& out,const Bonus_Sarbatori& bo){
        out<<"\n Numele sarbatorii pe care o sarbatoriti "<<bo.sarbatoare<<"\n";
        return out;
    }
istream& operator>>(istream& in,Bonus_Sarbatori& bo ){
        cout<<"\n Sarbatoarea  pe care o sarbatoriti este: \n";
        in>>bo.sarbatoare;
        return in;
    }









