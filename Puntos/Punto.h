//
// Created by gapeb on 10/14/2021.
//

#ifndef PUNTOS_PUNTO_H
#define PUNTOS_PUNTO_H

class Punto2D {
public:
    Punto2D();

    //Métodos
    void SetPosicion(float x_, float y_);
    void Trasladar(float trax, float tray);
    void RotarRespectoAlOrigen(float a);
    void Escalar(float esx, float esy);


    float GetX ();
    float GetY ();



private:
    float x,y; // Variables de clase

};

#endif //PUNTOS_PUNTO_H