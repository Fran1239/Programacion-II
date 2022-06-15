//
// Created by FRANCO on 13/06/2022.
//

/*
 * Tema 2: Batalla Naval
Se pide desarrollar una aplicación en C++ que permita implementar el juego de la Batalla Naval.
Consignas:
• Crear un tablero dividido en cuadros los cuales se identifican con coordenadas (Ej: A1).
• Distribuir en el tablero, un total de 10 barcos por cada jugador. Por ejemplo se puede
considerar flotas constituidas por varios barcos. Por ejemplo:
◦ 1 barco 4 casillas,
◦ 2 barcos de 3 casillas,
◦ 3 barcos de 2 casillas
◦ 4 barcos de 1 casilla
• La ubicación de los mismos puede ser horizontal o vertical.
• Cada jugador debe ingresar coordenadas para intentar hundir la flota contraria.
• Si la coordenada impacta en un casillero libre, se responde AGUA
• Si acierta sobre un barco, se identificará el tipo de barco y se determinará si el mismo está
hundido o no.
• Gana el jugador que mantiene su flota.
 */


#include <iostream>
#include "juego.h"

using namespace std;

int main(){

    juego juego1;

    juego1.CargarNombres();
    juego1.GenerarTableros();

    do {
        juego1.Atacar();
    } while (juego1.getfin() != 1);

    juego1.FinJuego();

    return 0;
}



