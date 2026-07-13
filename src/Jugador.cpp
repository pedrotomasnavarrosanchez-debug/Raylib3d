#include "Jugador.hpp"

 
  Jugador::Jugador(float velocidadInicial,
           Color colorInicial,
           float fuerzaSaltoInicial,
           Vector3 posicionInicial,
           float sizeInicial)
           
 {
   velocidad = velocidadInicial;
   color = colorInicial;
   fuerzaSalto = fuerzaSaltoInicial;  
   posicion = posicionInicial;
   size = sizeInicial;
   velocidadY = 0;
 }

  void Jugador::saltar()
  {
  }