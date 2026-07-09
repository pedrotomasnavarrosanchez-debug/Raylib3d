#include "Jugador.hpp"

 
  Jugador::Jugador(float velocidadInicial,
           Color colorInicial,
           float fuerzaSaltoInicial,
           Vector3 posicionInicial)
           
 {
   velocidad = velocidadInicial;
   color = colorInicial;
   fuerzaSalto = fuerzaSaltoInicial;  
   posicion = posicionInicial;
 }

  void Jugador::saltar()
  {
  }