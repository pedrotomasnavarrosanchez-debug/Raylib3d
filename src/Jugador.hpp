#pragma once

#include "raylib.h"

class Jugador 
{
private:
     float velocidad;
     Color color;
     float fuerzaSalto;
     Vector3 posicion;

public:     
   Jugador(float velocidadInicial,
           Color colorInicial,
           float fuerzaSaltoInical,
           Vector3 posicionInicial);


float getVelocidad()
 { 
    return velocidad;
 }
    Color getColor() { return color; }
    float getFuerzaSalto() { return fuerzaSalto; }
    Vector3 getPosicion() { return posicion; }
    
    void setPosicion(Vector3 nuevaPosicion)
    {
      posicion = nuevaPosicion;
    }

    void saltar();
};