#pragma once

#include "raylib.h"

class Jugador 
{
private:
     float velocidad;
     Color color;
     float fuerzaSalto;

public:     
   Jugador(float velocidadInicial,
           Color colorInicial,
           float fuerzaSaltoInical);
    
float getVelocidad()
 { 
    return velocidad;
 }
    Color getColor() { return color; }
    float getFuerzaSalto() { return fuerzaSalto; }

    void saltar();
};