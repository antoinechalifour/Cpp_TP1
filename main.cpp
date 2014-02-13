#include <iostream>
#include <stdlib.h>

#include "Chaine.h"

using namespace std;

int main()
{
    cout << "TP C++ - Creation de chaine" << endl;
    cout<<"ALLOCATION STATIQUE"<<endl<<endl;

    Chaine str;
    cout<<"Valeur de ma chaine par defaut : \""<<str.getString()<<"\" de la taille : "<<str.getSize()<<endl<<endl;
    str.replaceString("Nouvelle chaine");
    cout<<"Valeur de ma nouvelle chaine : "<<str.getString()<<endl<<endl;
    str.addString(" encore plus longue !");
    cout<<"Valeur de ma nouvelle chaine : \""<<str.getString()<<"\""<<endl<<endl<<endl;

    Chaine str2("2e chaine");
    str2.addString(" qui marche");
    cout<<"Valeur de sr2 : \""<<str2.getString()<<"\""<<endl<<endl<<endl;

    Chaine str3(str2);
    str3.replaceString("3e chaine");
    cout<<"Valeur de str3 : \""<<str3.getString()<<"\" de la taille : "<<str3.getSize()<<endl<<endl<<endl;
    cout<<"Valeur de str2 : \""<<str2.getString()<<"\" de la taille : "<<str2.getSize()<<endl<<endl;

    system("PAUSE");
    system("CLS");

/////////////////////////////////////////////////////////////////////////////////////

    cout << "TP C++ - Creation de chaine" << endl;
    cout<<"ALLOCATION DYNAMIQUE"<<endl<<endl;

    Chaine *pstr = new Chaine();
    Chaine *pstr2 = new Chaine("Chaine2");
    Chaine *pstr3 = new Chaine(*pstr2);
    pstr3->replaceString("Chaine3");

    cout<<endl<<"Valeur de str : \""<<pstr->getString()<<"\" de la taille : "<<pstr->getSize()<<endl<<endl;
    cout<<"Valeur de str3 : \""<<pstr3->getString()<<"\" de la taille : "<<pstr3->getSize()<<endl<<endl;
    cout<<"Valeur de str2 : \""<<pstr2->getString()<<"\" de la taille : "<<pstr2->getSize()<<endl<<endl;

    delete pstr;
    delete pstr2;
    delete pstr3;

    system("PAUSE");
    system("CLS");

/////////////////////////////////////////////////////////////////////////////////////

    cout << "TP C++ - Creation de chaine" << endl;
    cout<<"TABLEAUX D'OBJETS"<<endl<<endl;

    Chaine* tab[10];

    for(int i=0 ; i<10 ; i++){
        tab[i] = new Chaine("vide");
        cout<<"Valeur de tab["<<i<<"] : \""<<tab[i]->getString()<<"\""<<endl;
    }

     for(int i=0 ; i<10 ; i++){
        delete tab[i];
    }
    return 0;
}
