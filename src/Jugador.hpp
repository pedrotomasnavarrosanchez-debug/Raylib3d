#pragma once

#include "raylib.h"

class Jugador 
{
private:
     float velocidad;
     Color color;
     float fuerzaSalto;
     Vector3 posicion;
     float size;
     float velocidadY;

public:     
   Jugador(float velocidadInicial,
           Color colorInicial,
           float fuerzaSaltoInical,
           Vector3 posicionInicial,
           float sizeInicial);


float getVelocidad()
 { 
    return velocidad;
 }
    Color getColor() { return color; }
    float getFuerzaSalto() { return fuerzaSalto; }
    Vector3 getPosicion() { return posicion; }
   float getSize() { return size; }
   float getVelocidadY() { return velocidadY; }

    void setPosicion(Vector3 nuevaPosicion) { posicion = nuevaPosicion; };
    void setVelocidadY(float velocidadNueva)  { velocidadY = velocidadNueva; };

    void saltar();
};