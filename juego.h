//
// Created by FRANCO on 07/06/2022.
//

#ifndef BATALLANAVAL1_JUEGO_H
#define BATALLANAVAL1_JUEGO_H
#include "tablero.h"

class juego {
private:
    tablero Tab1;
    tablero Tab2;
    char j1[40];
    char j2[40];
    int turno=0, fin=0;
    int contA1=0, contB1=0, contC1=0, contD1=0, contE1=0;
    int contA2=0, contB2=0, contC2=0, contD2=0, contE2=0;
public:
    juego();
    void setturno(int);
    int getturno();
    void setfin(int);
    int getfin();
    void GenerarTableros();
    void CargarNombres();
    void Atacar();
    void FinJuego();
};


#endif //BATALLANAVAL1_JUEGO_H
