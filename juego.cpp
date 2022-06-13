//
// Created by FRANCO on 07/06/2022.
//
#include <iostream>
#include <string.h>
#include "juego.h"

juego::juego(){
    strcpy(Tab1, " ");
    strcpy(Tab2, " ");
    turno=0;
    fin=0;
    contA1=0;
    contB1=0;
    contC1=0;
    contD1=0;
    contE1=0;
    contA2=0;
    contB2=0;
    contC2=0;
    contD2=0;
    contE2=0;
};

juego::juego(char* T1, char* T2, int t,int f, int a1, int b1, int c1, int d1, int e1, int a2, int b2, int c2, int d2, int e2){
    strcpy(Tab1, T1);
    strcpy(Tab2, T2);
    turno=t;
    fin=f;
    contA1=a1;
    contB1=b1;
    contC1=c1;
    contD1=d1;
    contE1=e1;
    contA2=a2;
    contB2=b2;
    contC2=c2;
    contD2=d2;
    contE2=e2;
};

void juego::Atacar(char t[6][6], char tj[6][6], int &turno, int &fin, char jugador[40], int &contA, int &contB, int &contC, int &contD, int &contE){
    int x, y, a, b;
    char result[40];
    std::cout<<"Ataque de "<<jugador<<":"<<std::endl;

    do {
        do {
            std::cout<<"Ingrese fila (0-5):";
            std::cin>>x;
        } while (x<0 || x>5);
        do {
            std::cout<<"Ingrese columna (0-5):";
            std::cin>>y;
        } while (y<0 || y>5);
        if (tj[x][y]!='-') {
            MostrarTablero(tj);
            std::cout<<"Casilla ya atacada"<<std::endl;
        }
        else {
            switch(t[x][y]) {
                case '0':
                    tj[x][y]='0';
                    MostrarTablero(tj);
                    strcpy(result,"AGUA");
                    std::cout<<result<<" - Cambio de turno"<<std::endl;
                    turno=!turno;
                    break;
                case 'A':
                    tj[x][y]='X';
                    MostrarTablero(tj);
                    if (contA==3) {
                        strcpy(result,"HUNDIDO");
                        std::cout<<result<<" - Sigue atacando"<<std::endl;
                    }
                    else {
                        strcpy(result,"TOCADO");
                        std::cout<<result<<" - Sigue atacando"<<std::endl;
                    }
                    contA++;
                    break;
                case 'B':
                    tj[x][y]='X';
                    MostrarTablero(tj);
                    if (contB==2){
                        strcpy(result,"HUNDIDO");
                        std::cout<<result<<" - Sigue atacando"<<std::endl;
                    }
                    else {
                        strcpy(result,"TOCADO");
                        std::cout<<result<<" - Sigue atacando"<<std::endl;
                    }
                    contB++;
                    break;
                case 'C':
                    tj[x][y]='X';
                    MostrarTablero(tj);
                    if (contC==2)
                    {
                        strcpy(result,"HUNDIDO");
                        std::cout<<result<<" - Sigue atacando"<<std::endl;
                    }
                    else {
                        strcpy(result,"TOCADO");
                        std::cout<<result<<" - Sigue atacando"<<std::endl;
                    }
                    contC++;
                    break;
                case 'D':
                    tj[x][y]='X';
                    MostrarTablero(tj);
                    if (contD==1)
                    {
                        strcpy(result,"HUNDIDO");
                        std::cout<<result<<" - Sigue atacando"<<std::endl;
                    }
                    else {
                        strcpy(result,"TOCADO");
                        std::cout<<result<<" - Sigue atacando"<<std::endl;
                    }
                    contD++;
                    break;
                case 'E':
                    tj[x][y]='X';
                    MostrarTablero(tj);
                    if (contE==1)
                    {
                        strcpy(result,"HUNDIDO");
                        std::cout<<result<<" - Sigue atacando"<<std::endl;
                    }
                    else {
                        strcpy(result,"TOCADO");
                        std::cout<<result<<" - Sigue atacando"<<std::endl;
                    }
                    contE++;
                    break;
            }
        }

    } while (tj[x][y]=='-');

    if (contA==4 && contB==3 && contC==3 && contD==2 && contE==2)
        fin=1;
};



