#include <string.h>
#include <iostream>
#include <stdlib.h>

#ifndef _Chaine_h
#define _Chaine_h
#include "Chaine.h"
#endif

using namespace std;

//Constructeur par defaut
Chaine::Chaine(){
    cout<<"Passage dans le constructeur par defaut"<<endl;
    string = (char*) malloc(sizeof(char));
    strcpy(string, "");
    size = strlen(string);
}

//Constructeur à un paramètre
Chaine::Chaine(char* str){
    cout<<"Passage dans le constructeur a un parametre"<<endl;
    size = strlen(str);
    string = (char*) malloc((size+1) * sizeof(char));
    strcpy(string, str);
}

//Constructeur de recopie
Chaine::Chaine(const Chaine& obj) : size(obj.size){
    cout<<"Passage dans le constructeur de recopie"<<endl;
    string = (char*) malloc(size * sizeof(char));
    strcpy(string, obj.string);
}

//Destructeur
Chaine::~Chaine(){
    cout<<"Passage dans le destructeur"<<endl;
    free(string);
}

unsigned int Chaine::getSize(){
    cout<<"Passage dans getSize()"<<endl;
    return size;
}

char* Chaine::getString(){
    cout<<"Passage dans getString()"<<endl;
    char* str = (char*) malloc(size * sizeof(char));
    strcpy(str, string);

    return str;
}

void Chaine::addString(char* str){
    cout<<"Passage dans addString(char* str)"<<endl;
    size += strlen(str);
    string = (char*) realloc(string, (size) + sizeof(char));
    strcat(string, str);
}

void Chaine::replaceString(char* str){
    cout<<"Passage dans replaceString(char* str)"<<endl;
    free(string);
    size = strlen(str);
    string = (char*) malloc(size * sizeof(char));
    strcpy(string, str);
}
