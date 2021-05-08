#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include <vector>
#include <iterator>
#include <map>
#include <list>
#include <set>
#include "clasaDeriv_Gardian.h"
#include "clasa_Parinti_EligibiliB.h"
#include "clasa_Orfani.h"
#include "clasa_Jucarii.h"
#include "clasa_orfelinat.h"
#include "clasaDeriv_IstoricOrfelinat.h"
#include "Renovari_Anuale.h"
using namespace std;

class MeniuInteractiv{
private:
    static MeniuInteractiv *meniu;
public:
    static MeniuInteractiv* getMeniu(){
        if(!meniu)
            meniu=new MeniuInteractiv();


        return meniu;
    }

    void Meniu(){
        ofstream fout("file1.txt");
        ofstream file("file2.txt");
        ofstream fout3("file3.txt");
        int k=1;
        int i=0;
        while (k==1){
          cout<<"\n1. Descriere si istoric Orfelinat (Sponsori si denumiri)<<file3>> \n";
          cout<<"2. Date despre Orfelinat <<file1>>\n";
          cout<<"3. Aflati daca puteti face o adoptie";
          cout<<"\n4. Informatii necesare daca sunteti Gardian <<file2>>";
          cout<<"\n5. Renovari ";
          cout<<"\n6. Am terminat ";
          cout<<"\n7. Bonus pentru angajati \n";
          cout<<"8. Un  mic joculet\n";
          int comanda;

         cin>>comanda;
          switch(comanda){
            case 1:{
                cout<<"\n DUPA CE ATI COMPLETAT DATELE CERUTE IN CONSOLA IN file3 VETI GASI ANUMITE DATE (DESCRIEREA, ISTORICUL, ETC..) \n";
                IstoricOrfelinat istoric;
                istoric.Istoric(istoric.getnume_actual(),istoric.getlistaSponsori(),istoric.getlista_denumiriVechi());
                i++;
                break;
            }
           case 2:{
            cout<<"\n DUPA CE ATI COMPLETAT DATELE CERUTE IN CONSOLA IN file1 VETI GASI ANUMITE DATE (INFORMATII DESPRE COPII,ORFELINAT, ETC..) \n";

                int t=1;
                int j=0;
                while(t==1){
                    cout<<"\n100 Numar Camere/Numar Angajati/Venit Alocat ";
                    cout<<"\n 101. Date Complete despre fiecare copil";
                    cout<<"\n103 Am terminat \n";
                    int comanda2;
                    cin>>comanda2;


                    switch(comanda2){
                        case 100:{
                            Orfelinat X;
                            X.setAngajati(110);
                            X.setnrcamere(200);
                            X.setVenit(10000);
                            fout<<"In centrul nostru de plasament avem: \n Numar camere: "<<X.getnrcamere()<<"\n Numar persoanl angajat: "<<X.getAngajati()<<"\n Venit anual alocat: "<<X.getVenit()<<endl;
                            j++;
                            break;
                        }
                        case 101:{
                            list<Jucarie> jucarii;
                             string actv[]={"sah","echitatie","baschet"};
                            float punctaj[]={8.8,9.0,7.5};
                            char nume[]={"Wang"};
                            Jucarie jucarie7("Monopoly", "verde",60,1,23);
                            Jucarie jucarie8("frisbee","verde",29,0,0);
                            Jucarie jucarie9("robotel","alb",100,1,40);
                            jucarii.push_back(jucarie7);
                            jucarii.push_back(jucarie8);
                            jucarii.push_back(jucarie9);
                            Orfan orf1(nume, "Lola","107091123004", 10, "07/09/2011", actv, punctaj,"07/09/2012" ,'F', 0, jucarii);
                            string actv1[]={"pictura","sculptura","fotografie"};
                            float punctaj1[]={10,8.8,9};
                            list<Jucarie> jucarii1;
                            jucarii1.push_back(jucarie7);
                            jucarii1.push_back(jucarie9);
                            Jucarie jucarie10("set ceainic","roz",90,1,20);
                            Orfan orf2({"Han"},"De","1101114091234", 7, "10/11/2014", actv1,punctaj1,"02/03/2015",'F',1,jucarii1 );
                            string actv2[]={"sah","inot","fotbal"};
                            float punctaj2[]={8,9.0,6.5};
                            char nume2[]={"Zana"};
                            list<Jucarie> jucarii3;
                            Jucarie jucarie12("lego","verde",20,1,60);
                            Jucarie jucarie13("puzzle","alb",60,0,0);
                            jucarii3.push_back(jucarie7);
                            jucarii3.push_back(jucarie12);
                            jucarii3.push_back(jucarie13);
                            Orfan orf3(nume2, "Gisele","101020629004", 14, "01/02/2006", actv2, punctaj2,"07/06/2012" ,'F', 1, jucarii3);
                            string actv3[]={"programare","lectura","fotografie"};
                            float punctaj3[]={10,7.2,9.1};
                            list<Jucarie> jucarii5;
                            jucarii5.push_back(jucarie7);
                            jucarii5.push_back(jucarie9);

                            Orfan orf4({"Manole"},"Cezar","1101110091234", 11, "10/11/2010", actv3,punctaj3,"21/07/2012",'M',0,jucarii5 );

                           string actv5[]={"sah","patinaj","baschet"};
                            float punctaj5[]={8,7.0,6.5};
                            char nume5[]={"Baron"};
                            list<Jucarie> jucarii6;
                            jucarii6.push_back(jucarie7);
                            jucarii6.push_back(jucarie9);
                            jucarii6.push_back(jucarie10);
                            Orfan orf5(nume5, "Maya","127021529494", 6, "27/02/2015", actv5, punctaj5,"07/06/2016" ,'F', 1, jucarii6);
                            string actv7[]={"echitatie","lectura","patinaj"};
                            float punctaj7[]={10,7.2,9.1};
                            list<Jucarie> jucarii7;
                            jucarii5.push_back(jucarie7);
                            jucarii5.push_back(jucarie9);

                            Orfan orf6({"Katanabe"},"Ricky","1100809068204", 11, "10/08/2009", actv7,punctaj7,"21/07/2012",'M',0,jucarii7 );



                            list<Jucarie> jucarii8;
                            jucarii8.push_back(jucarie7);
                            jucarii8.push_back(jucarie9);
                            Orfan orf7(nume5, "Luca","12702151209", 6, "27/02/2015", actv5, punctaj5,"07/06/2016" ,'F', 1, jucarii8);

                            Orfan orf8({"Juna"},"Radu","1100308068204", 12, "10/03/2008", actv3,punctaj7,"21/07/2009",'M',0,jucarii3 );

                             char nume9[]={"Dima"};
                            list<Jucarie> jucarii10;
                            jucarii10.push_back(jucarie13);
                            jucarii10.push_back(jucarie9);
                            Orfan orf9(nume5, "Luca","127101120098", 10, "27/10/2011", actv7, punctaj3,"07/06/2013" ,'M', 1, jucarii);
                            Orfan orf10({"Luna"},"Hope","1130305068204", 12, "13/03/2005", actv5,punctaj7,"21/07/2007",'F',0,jucarii8 );
                          fout<<"\n Datele complete despre copiii nostri: \n";
                          fout<<orf10<< "\n \n"<<orf1<<"\n \n"<<orf2<<"\n \n"<<orf3<<"\n \n"<<orf4<<"\n \n"<<orf5<<"\n \n"<<orf6<<"\n \n"<<orf7<<"\n \n"<<orf8<<"\n \n"<<orf9<<"\n \n";
                         j++;
                         int x=1;
                         int y=0;
                         while(x==1){
                            cout<<"\n11. Ofera o Jucarie";
                            cout<<"\n12. Premii in urma punctajelor obtinute la activitati";
                            cout<<"\n13. Exit \n";
                            int comanda3;
                            cin>>comanda3;
                            switch(comanda3){
                                case 11:{
                                    cout<<"Ce jucarie doriti sa oferiti? Alegeti dintre: "<<jucarie7.getNumeJ()<<" sau "<< jucarie12.getNumeJ()<< " sau "<< jucarie9.getNumeJ();
                                    string nume_jucarie;
                                    cout<<"\n Introduceti numele jucariei :\n";
                                    cin>>nume_jucarie;
                                    bool ofera=1;
                                    if (nume_jucarie==jucarie7.getNumeJ())
                                        orf2.adaugaJucarie(jucarie7);
                                    else{
                                         if (nume_jucarie==jucarie12.getNumeJ())
                                            orf2.adaugaJucarie(jucarie12);
                                         else
                                            orf2.adaugaJucarie(jucarie9);
                                    }
                                    fout<<"\n Jucaria a fost primita de: "<<orf2.getnume()<<" "<<orf2.getPrenume()<<endl;
                                    cout<<"Doriti sa oferiti jucarie si celorlati copii? 0/1: "<<endl;
                                    cin>>ofera;
                                    if (ofera==1){
                                        if (nume_jucarie==jucarie7.getNumeJ()){
                                            orf5.adaugaJucarie(jucarie7);
                                            orf4.adaugaJucarie(jucarie7);
                                            orf6.adaugaJucarie(jucarie7);
                                            orf7.adaugaJucarie(jucarie7);
                                            orf8.adaugaJucarie(jucarie7);
                                            orf9.adaugaJucarie(jucarie7);}
                                        if (nume_jucarie==jucarie12.getNumeJ()){
                                            orf5.adaugaJucarie(jucarie12);
                                            orf4.adaugaJucarie(jucarie12);
                                            orf6.adaugaJucarie(jucarie12);
                                            orf7.adaugaJucarie(jucarie12);
                                            orf8.adaugaJucarie(jucarie12);
                                            orf9.adaugaJucarie(jucarie12); }
                                        else
                                            {
                                            orf5.adaugaJucarie(jucarie9);
                                            orf4.adaugaJucarie(jucarie9);
                                            orf6.adaugaJucarie(jucarie9);
                                            orf7.adaugaJucarie(jucarie9);
                                            orf8.adaugaJucarie(jucarie9);
                                            orf9.adaugaJucarie(jucarie9);
                                            }

                                    fout<<"\n Pentru jucariile oferite va multumesc: "<<orf4.getnume()<<" "<<orf4.getPrenume()<<", "<<orf5.getnume()<<" "<<orf5.getPrenume()<<", "<<orf6.getnume()<<" "<<orf6.getPrenume()<<", "<<orf7.getnume()<<" "<<orf7.getPrenume()<<", "<<orf8.getnume()<<" "<<orf8.getPrenume()<<", "<<orf9.getnume()<<" "<<orf9.getPrenume()<<endl;
                                    }
                                    else {
                                        cout<<"\n Va multumim pentru generozitate \n";
                                    }
                                    y++;
                                    break;

                                }

                                case 12:{

                                vector<Orfan> lista;
                                //vector<Jucarie> premiu;
                                Jucarie juc("consola portabila",125,"alb");
                               // premiu.push_back(juc);
                                lista.push_back(orf1);
                                lista.push_back(orf2);
                                lista.push_back(orf3);
                                lista.push_back(orf4);
                                lista.push_back(orf5);
                                lista.push_back(orf6);
                                lista.push_back(orf7);
                                lista.push_back(orf8);
                                lista.push_back(orf9);
                                lista.push_back(orf10);
                               Orfelinat l(lista,110,200,10000.23);
                                l.premiazaOrfan(6,juc);
                                y++;
                                break;
                                }
                                 case 13:{
                                    x=0;
                                    break;
                                }
                            }
                         }
                         j++;
                         break;
                        }
                        case 103:{
                            t=0;
                            break;

                        }

                    }
                }
                i++;
                break;
           }
            case 3:{
                 bool exista;
                 float venit1, venit2;
                 cout<<"Buna ziua, daca doriti sa stiti rapid daca ati putea intra pe lista unor potentiali parinti, trebuie sa introduceti doar cateva date. P.S. Asta nu inseamna ca va califica la o adoptie imediata, dar veti putea face parte din lista de asteptare! \n";
                 cout<<"Exista cel putin un job in familie? 1(da)/0(nu) \n";
                 cin>>exista;
                  if (exista==0){
                    file<<"\n Ne pare rau,nu sunteti eligibili pentru o adoptie.";
                 }
                 else{
                     cout<<"introduceti veniturile familiei: \n";
                     cout<<"Venit 1: \n";
                     cin>>venit1;
                     cout<<"\n Venit 2(daca nu exista completati cu 0): \n";
                     cin>>venit2;
                     Parinti_Eligibili adoptie;
                     adoptie.medie_venit(exista,venit1,venit2);
                 }
                i++;
                break;
           }
               case 4:{
                 Gardian gardian;
                   list<Jucarie> jucarii;
                    string actv[]={"sah","echitatie","baschet"};
                    float punctaj[]={8.8,9.0,7.5};
                    char nume[]={"Wang"};
                    Jucarie jucarie7("Monopoly", "verde",60,1,23);
                    Jucarie jucarie8("frisbee","verde",29,0,0);
                    Jucarie jucarie9("robotel","alb",100,1,40);
                    jucarii.push_back(jucarie7);
                    jucarii.push_back(jucarie8);
                    jucarii.push_back(jucarie9);
                    Orfan orf1(nume, "Lola","107091123004", 10, "07/09/2011", actv, punctaj,"07/09/2012" ,'F', 0, jucarii);
                    string actv1[]={"pictura","sculptura","fotografie"};
                    float punctaj1[]={10,8.8,9};
                    list<Jucarie> jucarii1;
                    jucarii1.push_back(jucarie7);
                    jucarii1.push_back(jucarie9);
                    Jucarie jucarie10("set ceainic","roz",90,1,20);
                    Orfan orf2({"Han"},"De","1101114091234", 7, "10/11/2014", actv1,punctaj1,"02/03/2015",'F',1,jucarii1 );
                    string actv2[]={"sah","inot","fotbal"};
                    float punctaj2[]={8,9.0,6.5};
                    char nume2[]={"Zana"};
                    list<Jucarie> jucarii3;
                    Jucarie jucarie12("lego","verde",20,1,60);
                    Jucarie jucarie13("puzzle","alb",60,0,0);
                    jucarii3.push_back(jucarie7);
                    jucarii3.push_back(jucarie12);
                    jucarii3.push_back(jucarie13);
                    Orfan orf3(nume2, "Gisele","101020629004", 14, "01/02/2006", actv2, punctaj2,"07/06/2012" ,'F', 1, jucarii3);
                    string actv3[]={"programare","lectura","fotografie"};
                    float punctaj3[]={10,7.2,9.1};
                    list<Jucarie> jucarii5;
                    jucarii5.push_back(jucarie7);
                    jucarii5.push_back(jucarie9);

                    Orfan orf4({"Manole"},"Cezar","1101110091234", 11, "10/11/2010", actv3,punctaj3,"21/07/2012",'M',0,jucarii5 );

                    string actv5[]={"sah","patinaj","baschet"};
                    float punctaj5[]={8,7.0,6.5};
                    char nume5[]={"Baron"};
                    list<Jucarie> jucarii6;
                    jucarii6.push_back(jucarie7);
                    jucarii6.push_back(jucarie9);
                    jucarii6.push_back(jucarie10);
                    Orfan orf5(nume5, "Maya","127021529494", 6, "27/02/2015", actv5, punctaj5,"07/06/2016" ,'F', 1, jucarii6);
                    string actv7[]={"echitatie","lectura","patinaj"};
                    float punctaj7[]={10,7.2,9.1};
                    list<Jucarie> jucarii7;
                    jucarii5.push_back(jucarie7);
                    jucarii5.push_back(jucarie9);

                    Orfan orf6({"Katanabe"},"Ricky","1100809068204", 11, "10/08/2009", actv7,punctaj7,"21/07/2012",'M',0,jucarii7 );
                vector<Orfan> orfn;
                orfn.push_back(orf1);
                orfn.push_back(orf2);
                orfn.push_back(orf3);
                orfn.push_back(orf4);
                orfn.push_back(orf5);
                orfn.push_back(orf6);
                int nr_orfani=6;
                cout<<"\n DUPA CE ATI COMPLETAT DATELE CERUTE IN CONSOLA IN file1 VETI GASI ANUMITE DATE  \n";
                cout<<"\n Introduceti anul in care ati ocupat postul: \n";
                string an;
                cin>>an;
                gardian.adoptie(an,nr_orfani,orfn);
                i++;
                break;
           }
               case 5:{
                 Renovari_Interior I;
                file<<"Pentru renovari interioare: ";
                I.renoveaza();
                Renovare_Exterior E;
                file<<"Pentru renovari exterioare: ";
                E.renoveaza();
                i++;
                break;
           }
               case 6:{
                k=0;
                file<<"\n Va multumim ca ati ales sa vizitati centrul nostru de plasament! \n";
                break;
           }
             case 7:{
                Date_Angajati date;
                date.adaugaBonus(10);
                Bonus_Sarbatori bonus1;
                bonus1.adaugaBonus(10);
                i++;
                break;
           }
             case 8:{
                cout<<"\n Deoarece sponsorul nostru de jucarii ne-a oferit un numar mai mare, iar copiii nostri au venit cu ideea acestui joc,\n ne-am gandit sa il punem in aplicare.  Astfel, dorim sa oferim si vizitatorilor sansa de a se juca si astfel am creat\n jocul: \n \t\t\t GHICESTE NUMARUL SI PRIMESTE JUCARIA \n";
                Jucarie J;
                J.castigajucarie();
                i++;
                break;
           }
          }
       file.close();
        }



    }

}; MeniuInteractiv* MeniuInteractiv::meniu=0;

int main(){
    MeniuInteractiv *meniulMeu=meniulMeu->getMeniu();
    meniulMeu->Meniu();


    /**
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
        map <int, string> sponsori={{1,"John"},{2,"Donovan"}};
        sponsori.insert({3,"Clarins"});
        cout<<"\n ----------------- Constructori, Operatorii =, <<,>>, copy const------------------ \n";
        set <string> den={"Sparkles","Sunny"};
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
        list<Jucarie> jucarii;
        Orfan orf;
        //cin>>orf;///operator >>
       // cout<<orf<<endl; /// op <<
       cout<<"Medie totala activitati realizate zilnic: "<<orf.calculeazaMediePuncte();///functionalitate 1
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
        list<Jucarie> jucarii1;
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
           cout<<"\n ---------------------------------------------------------------------------------- \n";
        cout<<endl<<"\n Sterge o jucarie: ";
        orf2.stergeJucarie();///functionalitate 3
        cout<<" \n aici \n";
        cout<<"\n Datele despre orfan fara jucaria stearsa: \n";
         cout<<" \n aici \n";
        cout<<endl<<orf2;
         cout<<"\n ---------------------------------------------------------------------------------- \n";
        cout<<" \n Adauga o noua jucarie : \n";
        orf2.adaugaJucarie(jucarie1);///functionalitate 2
        cout<<"Informatiile orfanului cu noua jucarie adaugata: "<<jucarie1.getNumeJ();
        cout<<endl<<orf2;///functionalitate adauga o jucarie noua orfanului orf




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
       cout<<"\n -----Constructori, operatorii =, <<,>> copy const------- \n";
       cin>>I;
       cout<<I<<"\n";
       cin>>E;
       cout<<E<<"\n";
       Renovare_Exterior E1(2000, 5000);
       E=E1;
       cout<<E1<<"\n";
       Renovare_Exterior E2(E1);

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

*/
  return 0;  }
