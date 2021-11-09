//
// Created by gapeb on 11/6/2021.
//
#include "Grupo.h"

// Definición del constructor
Grupo::Grupo(string nombreGrupo, float pKGrupo, int cargaGrupo) {

    nombreGrupo = nombreGrupo;
    pKGrupo = pKGrupo;
    cargaGrupo = cargaGrupo;
}

// Definición de los getters
float Grupo::getpk() const {
    return pKGrupo;
}
int Grupo::getcarga() const {
    return cargaGrupo;
}