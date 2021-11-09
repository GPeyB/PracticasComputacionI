//
// Created by gapeb on 11/6/2021.
//
#include "Grupo.h"

// Definición del constructor
Grupo::Grupo(string nomGr,float pKGr,int cargaGr) {

    nombreGrupo = nomGr;
    pKGrupo = pKGr;
    cargaGrupo = cargaGr;
}

// Definición de los getters
float Grupo::getpk() const {
    return pKGrupo;
}
int Grupo::getcarga() const {
    return cargaGrupo;
}