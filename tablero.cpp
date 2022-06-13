//
// Created by FRANCO on 06/06/2022.
//
#include <iostream>
#include <string.h>
#include "tablero.h"


tablero::tablero(){
    strcpy(tab, " ");
    strcpy(tabJuego, " ");
    strcpy(jugador, " ");
};

tablero::tablero(char* t, char* tj, char* j){
    strcpy(tab, t);
    strcpy(tabJuego, tj);
    strcpy(jugador, j);
};

void tablero::settab(char* t) {
    strcpy(tab,t);
};

char* tablero::gettab(){
    return tab;
};

void tablero::settabJuego(char* tj) {
    strcpy(tab, tj);
};

char* tablero::getjugador(){
    return jugador;
};

void tablero::settab(char* j) {
    strcpy(tab,j);
};

char* tablero::gettab(){
    return tab;
};

void tablero::GenerarTablero(char t[6][6]){
    int H_V;    //Orientacion del barco,
    int x,y;    //Variable para posicion

    //barcos de 4
    H_V=rand()%2;
    if (H_V) {  //si es vertical
        x=rand()%3;
        y=rand()%6;
        for (int i=0;i<4;i++)
            t[x+i][y]='A';
    } else {    //si es horizontal
        x=rand()%6;
        y=rand()%3;
        for (int i=0;i<4;i++)
            t[x][y+i]='A';
    }

    // barcos de 3
    for (int i=0;i<2;i++) {
        H_V=rand()%2;
        if (H_V) {  //si es vertical
            do {
                x=rand()%6;
                y=rand()%6;
            } while (x>3 || t[x][y]!='0' || t[x+1][y]!='0' || t[x+2][y]!='0');
            for (int j=0;j<3;j++){
                if(i==0)
                    t[x+j][y]='B';
                else
                    t[x+j][y]='C';
            }
        } else {    //si es horizontal
            do {
                x=rand()%6;
                y=rand()%6;
            } while (y>3 || t[x][y]!='0' || t[x][y+1]!='0' || t[x][y+2]!='0');
            for (int j=0;j<3;j++) {
                if(i==0)
                    t[x][y+j]='B';
                else
                    t[x][y+j]='C';
            }
        }
    }

    // barcos de 2
    for (int i=0;i<2;i++) {
        H_V=rand()%2;
        if (H_V) {  //si es vertical
            do {
                x=rand()%6;
                y=rand()%6;
            } while (x>4 || t[x][y]!='0' || t[x+1][y]!='0');
            for (int j=0;j<2;j++) {
                if(i==0)
                    t[x+j][y]='D';
                else
                    t[x+j][y]='E';
            }

        } else {    //si es horizontal
            do {
                x=rand()%6;
                y=rand()%6;
            } while (y>4 || t[x][y]!='0' || t[x][y+1]!='0');
            for (int j=0;j<2;j++){
                if(i==0)
                    t[x][y+j]='D';
                else
                    t[x][y+j]='E';
            }
        }
    }
}
};

void tablero::MostrarTablero(char t[6][6]){
        for (int i=0; i<6; i++) {
            for (int j=0; j<6; j++) {
                std::cout<<t[i][j]<<"   ";
            }
            std::cout<<std::endl;
        }
        std::cout<<std::endl;
};