#include <string.h>
#include <iostream>
#include <stdlib.h>

#ifndef _Chaine_h
#define _Chaine_h
#include "Chaine.h"
#endif

using namespace std;

Chaine::Chaine(){
    cout<<"Passage dans le constructeur"<<endl;
    string = (char*) malloc(sizeof(char));
    strcpy(string, "");
    size = strlen(string);
}

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
    string = (char*) realloc(string, size + sizeof(char));
    strcat(string, str);
}

void Chaine::replaceString(char* str){
    cout<<"Passage dans replaceString(char* str)"<<endl;
    free(string);
    size = strlen(str);
    string = (char*) malloc(size * sizeof(char));
    strcpy(string, str);
}
