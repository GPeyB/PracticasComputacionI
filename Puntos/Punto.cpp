//
// Created by gapeb on 10/14/2021. a ver si compila
//



#include <iostream>
#include <array>
#include "Punto.h"
#include <math.h>

Punto2D::Punto2D() {

}

void Punto2D::SetPosicion(float x_, float y_){
    x = x_;
    y = y_;
}

void Punto2D:: Trasladar(float trax, float tray){
    x += trax;
    y += tray;
}

void Punto2D:: RotarRespectoAlOrigen(float a){
    a *= 3.141592/ 180.0;
    float kp;
    kp = x * cos (a) -  y * sin(a);
    y = x * sin(a) + y * cos(a);
    x = kp;
}
void Punto2D:: Escalar(float esx, float esy){
    x *= esx;
    y *= esy;
}

float Punto2D::GetX() {
    return x;
}

float Punto2D::GetY() {
    return y;
}
