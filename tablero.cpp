//
// Created by FRANCO on 06/06/2022.
//

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "tablero.h"

tablero::tablero(){

    strcpy(jugador, " ");
};

char tablero::getcasillaT(int x, int y){
    return tab[x][y];
};

char tablero::getcasillaTJ(int x, int y){
    return tabJuego[x][y];
};

void tablero::setcasillaTJ(int x, int y, char c){
    tabJuego[x][y]=c;
};

void tablero::GenerarTablero(){
    int H_V;    //Orientacion del barco, si es horizontal o vertical,
    int x,y;    //Variables para la posicion

    //barcos de 4
    H_V=rand()%2;
    if (H_V) {  //si es vertical
        x=rand()%3;
        y=rand()%6;
        for (int i=0;i<4;i++)
            tab[x+i][y]='A';
    } else {    //si es horizontal
        x=rand()%6;
        y=rand()%3;
        for (int i=0;i<4;i++)
            tab[x][y+i]='A';
    }

    // barcos de 3
    for (int i=0;i<2;i++) {
        H_V=rand()%2;
        if (H_V) {  //si es vertical
            do {
                x=rand()%6;
                y=rand()%6;
            } while (x>3 || tab[x][y]!='0' || tab[x+1][y]!='0' || tab[x+2][y]!='0');
            for (int j=0;j<3;j++){
                if(i==0)
                    tab[x+j][y]='B';
                else
                    tab[x+j][y]='C';
            }
        } else {    //si es horizontal
            do {
                x=rand()%6;
                y=rand()%6;
            } while (y>3 || tab[x][y]!='0' || tab[x][y+1]!='0' || tab[x][y+2]!='0');
            for (int j=0;j<3;j++) {
                if(i==0)
                    tab[x][y+j]='B';
                else
                    tab[x][y+j]='C';
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
            } while (x>4 || tab[x][y]!='0' || tab[x+1][y]!='0');
            for (int j=0;j<2;j++) {
                if(i==0)
                    tab[x+j][y]='D';
                else
                    tab[x+j][y]='E';
            }

        } else {    //si es horizontal
            do {
                x=rand()%6;
                y=rand()%6;
            } while (y>4 || tab[x][y]!='0' || tab[x][y+1]!='0');
            for (int j=0;j<2;j++){
                if(i==0)
                    tab[x][y+j]='D';
                else
                    tab[x][y+j]='E';
            }
        }
    }
};

void tablero::MostrarT(){
    for (int i=0; i<6; i++) {
        for (int j=0; j<6; j++) {
            std::cout<<tab[i][j]<<"   ";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    };

void tablero::MostrarTJ() {
    for (int i=0; i<6; i++) {
        for (int j=0; j<6; j++) {
            std::cout<<tabJuego[i][j]<<"   ";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
};