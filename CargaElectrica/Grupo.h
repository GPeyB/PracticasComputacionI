//
// Created by gapeb on 11/6/2021.
//
using namespace std;
#ifndef CARGAELECTRICA_GRUPO_H
#define CARGAELECTRICA_GRUPO_H
#include <string>

class Grupo{
public:
// Establecemos constructor
    Grupo(string nomGr,float pKGr,int cargaGr);
// Valores base
    Grupo() {
         nombreGrupo = "";
         pKGrupo = 0;
         cargaGrupo = 0;
    }
//Prototipo funciones getters
    float getpk() const;
    int getcarga() const;

private:
    string nombreGrupo;
    float pKGrupo;
    int cargaGrupo;

};


#endif //CARGAELECTRICA_GRUPO_H
