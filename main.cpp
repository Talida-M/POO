#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include "clasaDeriv_Gardian.h"
#include "clasa_Parinti_EligibiliB.h"
#include "clasa_Orfani.h"
#include "clasa_Jucarii.h"
#include "clasa_orfelinat.h"
#include "clasaDeriv_IstoricOrfelinat.h"
#include "Renovari_Anuale.h"
using namespace std;


int main(){
    int a;
    cout<<"Bine ati venit la Orfelinatul X! \n";
    cout<<"Tastati 1 pentru a continua \n";
    cin>>a;
    if (a==1){
        cout<<"Alegere corecta *(^o^)* \n";
         cout<<"\n ----------------- CLASA DERIVATA ISTORIC ORFELINAT------------------ \n";
     ///Prima clasa derivata din Orfelinat, restul claselor derivate si intefata sunt la final
        IstoricOrfelinat a, IST, Y;
        cout<<"\n Funtionalitatea: \n";
        a.Istoric(a.getnume_actual(),a.getlistaSponsori(),a.getlista_denumiriVechi());///am folosit valorile pe care le-am initializat in clasa
        cout<<"\n Constructorul fara parametrii: \n"<<IST;
        vector <string> sponsori={"John","Donovan"};
        sponsori.push_back("Clarins");
        cout<<"\n ----------------- Constructori, Operatorii =, <<,>>, copy const------------------ \n";
        vector <string> den={"Sparkles","Sunny"};
        IstoricOrfelinat X(120,60,12345.34,"Margot", sponsori, den);
        Y=X;
        IstoricOrfelinat Z(Y);

        cout<<Z<<"\n";
        cout<<Y<<"\n";
        cout<<"\n Constructorul cu parametrii: \n"<<X;
      //  cin >>IST;
        //cout<<IST;




cout<<"\n PENTRU CLASA Parinti_Eligibili: \n";
        Parinti_Eligibili p, p1 ;
        cout<<"\n Aflati daca sunteti eligibili pentru o adoptie: \n";
        p.medie_venit(true,111223.2,12231.23);//functionalitatea
        cout<<"\n----------------------------------------------";
        p1.medie_venit(0,0,0);
        cout<<"\n----------------------------------------------";
        ///Parinti_Eligibili date_parinti;
        ///cout<<"\n Introduceti date: \n";
        ///cin>>date_parinti;///operatorul >>
        ///cout<<"\n ------------------------------------------------------------------------------------";
        ///cout<<date_parinti<<"\n"; ///operatorul <<
        cout<<"\n ----------------------------------------------------------------------------------";
        ///Operatorii == & <
        Parinti_Eligibili parinti1("Wang",1,"arhitect","arheolog",23222.22,12333.34);
        Parinti_Eligibili parinti2("Han",1,"doctor"," profesor",22222.22,17586.94);
        Parinti_Eligibili parinti3(parinti2);///copy constructor
        Parinti_Eligibili parinti4;
        parinti4=parinti2;///operatorul =
       // cout<<"\n Copy Constructor si Operatorul =: \n";
        //cout<<"\n"<<parinti2<<" \n"<<parinti3<<"\n"<<parinti4<<"\n";
        //cout<<"\n \n Operatorii == & < \n";
        //cout<<"\n parinte2==parinte1?: "<<(parinti2==parinti1);
        //cout<<"\n parinte2<parinte1?: "<<(parinti2<parinti1);

        ///Setters & Getters:
        ///cout<<endl<<"Nume parinti 1: "<<parinti1.getNumeP()<<"\n";
        parinti1.setOcupatieP1("chirurg");
        ///cout<<endl<<"Parinte 1 lucreaza ca: "<<parinti1.getOcupatieP1();
        ///cout<<endl<<"Parinte 1 castiga: "<<parinti2.getVenitParinte1();
        parinti2.setOcupatieP2("CEO");
        parinti2.setVenitParinte2(100000);
        cout<<endl<<"Parinte 2 lucreaza ca: "<<parinti2.getOcupatieP2()<<" si castiga: "<<parinti2.getVenitParinte2();
        cout<<"\n ------------------------------------------------------------------------------------\n";

        cout<<"\n -------------PENTRU CLASA Jucarie: -----------------\n";
        Jucarie jucarie;
        cout <<"\n Incearca-ti norocul si castiga o jucarie! \n";
        jucarie.castigajucarie();///Functionalitate
        cout<<"\n ----------------------------------------------------------------------------------";
        Jucarie date_jucarie;
        //cout<<"\n Introduceti date despre jucarie: \n";
        //cin>>date_jucarie;///operatorul >>
        //cout<<"Datele jucariei: \n"<<date_jucarie<<endl; ///operatorul <<
        //cout<<"\n ---------------------------------------------------------------------------------- \n";
        Jucarie jucarie1("trenulet","alb",20.5,1,50);///constructor cu toti parametri
        Jucarie jucarie2("minge","verde",10.5,1,100);
        Jucarie jucarie3(jucarie1);///copy constructor
        jucarie=jucarie2; ///operator =
       // cout<<"\n Copy Constructor si Operatorul =: \n";
        //cout<<jucarie1<<endl<<jucarie2<<endl<<jucarie3<<endl<<jucarie;
        ///Operatorii ++, -, +=, >, ==
      //   cout<<"\n ---------------------------------------------------------------------------------- \n";
       /// cout<<" \n Operatorii ++, -, +=, >, ==: \n";
        ///cout<<endl<<"jucarie1==jucarie3?: "<<(jucarie1==jucarie3);
        ///cout<<endl<<"jucarie1>jucarie2?: "<<(jucarie1>jucarie2);
        Jucarie jucarie4("trenulet","alb",200,0,0);
        //cout<<"operator '-': "<<(jucarie4=jucarie4-60);
        //cout<<"\n ---------------------------------------------------------------------------------- \n";
        //cout<<"Operator ++ pre-incrementare:   "<<(jucarie2++)<<endl;
        //cout<<"Operator ++ post-incrementare:   "<<(++jucarie2)<<endl;
        //cout<<"\n ---------------------------------------------------------------------------------- \n";
        //cout<<"operator += : "<<(jucarie4+=56);
         //cout<<"\n ---------------------------------------------------------------------------------- \n";
         ///Setters si Getters:
         cout<<"NUME JUCARIE: "<<jucarie.getNumeJ()<<endl;
         jucarie1.setNumeJ("Monopoly");
         jucarie1.setPret(120);
         jucarie1.setCantitateJ(60,1);
        // cout<<"Jucaria 1 este: "<<jucarie1.getNumeJ()<<" in cantitate de: "<<jucarie1.getCantitateJ()<<" are pretul: "<<jucarie1.getPret();


    cout<<"\n ---------------------------------------------------------------------------------- \n";
    cout<<"\n PENTRU CLASA Orfan: \n";
        Jucarie jucarie7("trenulet","alb",20.5,1,50);
        vector<Jucarie> jucarii;
        Orfan orf;
       // cin>>orf;///operator >>
       // cout<<orf<<endl; /// op <<
       //cout<<"Medie totala activitati realizate zilnic: "<<orf.calculeazaMediePuncte();///functionalitate 1
        // cout<<"\n ---------------------------------------------------------------------------------- \n";
        //cout<<" \n Adauga o noua jucarie : \n";
        //orf.adaugaJucarie(jucarie7);///functionalitate 2
       // cout<<"Informatiile orfanului cu noua jucarie adaugata: "<<jucarie1.getNumeJ();
       // cout<<endl<<orf;///functionalitate adauga o jucarie noua orfanului orf
         cout<<"\n ---------------------------------------------------------------------------------- \n";
       // cout<<endl<<"\n Sterge o jucarie: ";
        string nume_sterge_jucarie;
      //  cout<<"\n Ce jucarie doresti sa fie stearsa? \n";
       // cin>>nume_sterge_jucarie;
       // orf.stergeJucarie(nume_sterge_jucarie);///functionalitate 3
       // cout<<"\n Datele despre orfan fara jucaria stearsa: \n";
       // cout<<endl<<orf;
        ///Operatorii ==,++,[], = si copy constructor
        cout<<"\n ---------------------------------------------------------------------------------- \n";
        string actv[]={"sah","echitatie","baschet"};
        float punctaj[]={8.8,9.0,7.5};
        char nume[]={"Wang"};
        Jucarie jucarie8("frisbee","verde",20,1,60);
        Jucarie jucarie9("robotel","alb",60,0,0);
        jucarii.push_back(jucarie7);
        jucarii.push_back(jucarie8);
        jucarii.push_back(jucarie9);
        Orfan orf1(nume, "Lola","107091123004", 10, "07/09/2011", actv, punctaj,"07/09/2012" ,'F', 0, jucarii);
        string actv1[]={"pictura","sculptura","fotografie"};
        float punctaj1[]={10,8.8,9};
        vector<Jucarie> jucarii1;
        jucarii1.push_back(jucarie7);
        jucarii1.push_back(jucarie9);
        Jucarie jucarie10("set ceainic","roz",90,1,20);
        Orfan orf2({"Han"},"De","1101114091234", 7, "10/11/2014", actv1,punctaj1,"02/03/2015",'F',1,jucarii1 );
       // cout<<orf1;
        Orfan orf3(orf2);///copy constructor
        Orfan orf4;
        orf4=orf2;///operator =
       // cout<<orf2<<endl<<orf3<<endl<<orf3<<endl<<orf4<<endl;
       // cout<<"------------------------------------------------- \n";
        //cout<<"Operatori++ "<<++orf1<<" "<<orf1++<<" \n";
        //cout<<"------------------------------------------------- \n";
       // orf1[5];///[]
        //orf1[1];///operatorul de indexare []
        ///Setters si Getters
       // cout<<"\n COPILUL "<<orf4.getnume()<<" A PARTICIPAT LA URMATOARELE ACTIVITATI: ";
        for (int i=0;i<3;i++)
            cout<<orf4.getActivitatiZ()[i]<<"  " ;
       orf1.setnume("Davis");
        orf1.setActivitatiZ(actv1);
        orf1.setJucarii(jucarii1);
       // cout<<"\n Noile date despre "<<orf1.getnume()<<": "<<orf1;
         cout<<"Medie totala activitati realizate zilnic: "<<orf2.calculeazaMediePuncte();///functionalitate 1




        cout<<"\n DATE DESPRE CLASA Orfelinat \n";
        vector<Orfan> orfan,orfan2,orfan3;
        orfan.push_back(orf3);
        orfan2.push_back(orf1);
        orfan2.push_back(orf2);
        Orfelinat lista1(orfan,100,50,12220.877);
        Orfelinat lista2;
        Orfelinat lista5;
        lista1.premiazaOrfan(7,jucarie2);///functionalitate, dupa media la activitati se decide daca copilul primeste sau nu o jucarie noua, si se afiseaza jucaria si numele orfanului
        //cin>>lista2; ///Operatorul >>
        ///cout<<lista2;///Operatorul <<
        cout<<"\n ---------------------------------------------- \n";
        Orfelinat lista3(orfan2,60,50,20000);
        Orfelinat lista4(lista3);///copy constructor
        lista5=lista1;///operatorul =
        ///cout<<lista4<<"\n \n"<<lista5<<endl;
        ///Operatorii <=, *:
        ///cout<<"\n Operatorul <= : "<<(lista3<=lista1)<<"  , "<<(lista1<=lista4);
        ///cout<<"\n Operatorul * : "<<" \n Numarul vechi al angajatilor: "<<lista3.getAngajati();
        lista3=lista3*2;
        ///cout<<"\n Noul numar dupa aplicarea operatorului *: "<<lista3.getAngajati();


        cout<<"\n -----Pentru Gardian, derivata din Parinti_Eligibili-------\n";
        Gardian g1, g3, g4;
        vector<Orfan> orfn;
        orfn.push_back(orf1);
        orfn.push_back(orf2);
        orfn.push_back(orf4);
        cout<<"\n Functionalitate: \n";
        g1.adoptie("2009",3,orfn);
        ///AM COMENTAT CONSTRUCTORII SI OP DE <<,>> SI = PENTRU A FI MAI USOR DE CITIT CODUL SI PENTRU A NU ADAUGA DE LA TASTATURA TOATE ACELE DATE
       // cout<<"\n ----------------- Constructori, Operatorii =, <<,>>, copy const------------------ \n";
        Gardian g2("Wang",1,"arhitect","arheolog", "2009",2,orfn);
       // cout<<g2;
      // cin>>g3;
      // cout<<g3;
      // g4=g3;
      // Gardian g5(g4);
     //  cout<<g5;




        cout<<"\n------------------- Pentru clasa abstracta Renovari_Anuale si clasele ei derivate------------------------------";

       Renovari_Interior I;
       I.renoveaza();
       Renovare_Exterior E;
       E.renoveaza();

        cout<<"\n------------------- Pentru clasa Date_Angajati si Bonus_Sarbatori, Inrefata este clasa Date------------------------------";
        Date_Angajati date;
        date.setan("2005");
        cout<<"\n Anul angajarii: "<<date.getan();
        date.setsalariu(4000);
        cout<<"\n Salariul Actual: "<<date.getsalariu();
        date.adaugaBonus(10);
        Bonus_Sarbatori bonus1;
        bonus1.setsarbatoare("Hanuka");
        cout<<"\n Ce sarbatoriti? \n"<<bonus1.getsarbatoare()<<"\n";
        bonus1.adaugaBonus(10);

    }

    else
       cout<<"Tasta incorecta (>o<)";
return 0;
}
