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
#include <time.h>
#include <string.h>
#include "tablero.h"
#include "juego.h"

using namespace std;

int main(){




    char opc;
    char j1[40]="Jugador 1";
    char j2[40]="Jugador 2";
    juego juego1;

    juego1.Tab1.GenerarTablero();
    juego1.Tab2.GenerarTablero();



    do {
        cout<<"Desea poner los nombres de los jugadores (s/n)? ";
        cin>>opc;
        if(opc=='s') {
            cout<<"Ingrese el nombre del jugador 1: ";
            cin>>j1;
            cout<<"Ingrese el nombre del jugador 2: ";
            cin>>j2;
        }
    } while(opc!='s' && opc!='n');

    juego1.Tab1.setjugador(j1);
    juego1.Tab2.setjugador(j2);


    do {
            juego1.Atacar();
    } while (!juego1.getfin());



}



