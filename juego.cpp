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

void juego::setturno(int t) {
    turno = t;
};

int juego::getturno(){
    return turno;
};

void juego::setfin(int f) {
    fin = f;
};

int juego::getfin(){
    return fin;
};

void juego::GenerarTableros(){
    Tab1.GenerarTablero();
    Tab2.GenerarTablero();
};

void juego::MostrarTablero1(){
  Tab1.MostrarTablero();
};

void juego::MostrarTablero2(){
  Tab2.MostrarTablero();
};

void juego::Atacar(){
    int x, y, a, b;
    char result[40];
    if (turno==0) {

        std::cout<<"Ataque de "<<Tab1.getjugador()<<":"<<std::endl;

        do {
            do {
                std::cout<<"Ingrese fila (0-5):";
                std::cin>>x;
            } while (x<0 || x>5);
            do {
                std::cout<<"Ingrese columna (0-5):";
                std::cin>>y;
            } while (y<0 || y>5);
            if (Tab2.gettabJuego()!='-') {
                Tab2.MostrarTablero();
                std::cout<<"Casilla ya atacada"<<std::endl;
            }
            else {
                switch(Tab2.gettab()) {
                    case '0':
                        Tab2.gettabJuego()='0';
                        Tab2.MostrarTablero();
                        strcpy(result,"AGUA");
                        std::cout<<result<<" - Cambio de turno"<<std::endl;
                        turno=!turno;
                        break;
                    case 'A':
                        Tab2.gettabJuego()='X';
                        Tab2.MostrarTablero();
                        if (contA1==3) {
                            strcpy(result,"HUNDIDO");
                            std::cout<<result<<" - Sigue atacando"<<std::endl;
                        }
                        else {
                            strcpy(result,"TOCADO");
                            std::cout<<result<<" - Sigue atacando"<<std::endl;
                        }
                        contA1++;
                        break;
                    case 'B':
                        Tab2.gettabJuego()='X';
                        Tab2.MostrarTablero();
                        if (contB1==2){
                            strcpy(result,"HUNDIDO");
                            std::cout<<result<<" - Sigue atacando"<<std::endl;
                        }
                        else {
                            strcpy(result,"TOCADO");
                            std::cout<<result<<" - Sigue atacando"<<std::endl;
                        }
                        contB1++;
                        break;
                    case 'C':
                        Tab2.gettabJuego()='X';
                        Tab2.MostrarTablero();
                        if (contC1==2)
                        {
                            strcpy(result,"HUNDIDO");
                            std::cout<<result<<" - Sigue atacando"<<std::endl;
                        }
                        else {
                            strcpy(result,"TOCADO");
                            std::cout<<result<<" - Sigue atacando"<<std::endl;
                        }
                        contC1++;
                        break;
                    case 'D':
                        Tab2.gettabJuego()='X';
                        Tab2.MostrarTablero();
                        if (contD1==1)
                        {
                            strcpy(result,"HUNDIDO");
                            std::cout<<result<<" - Sigue atacando"<<std::endl;
                        }
                        else {
                            strcpy(result,"TOCADO");
                            std::cout<<result<<" - Sigue atacando"<<std::endl;
                        }
                        contD1++;
                        break;
                    case 'E':
                        Tab2.gettabJuego()='X';
                        Tab2.MostrarTablero();
                        if (contE1==1)
                        {
                            strcpy(result,"HUNDIDO");
                            std::cout<<result<<" - Sigue atacando"<<std::endl;
                        }
                        else {
                            strcpy(result,"TOCADO");
                            std::cout<<result<<" - Sigue atacando"<<std::endl;
                        }
                        contE1++;
                        break;
                }
            }

        } while (Tab2.gettabJuego()=='-');

        if (contA1==4 && contB1==3 && contC1==3 && contD1==2 && contE1==2)
            fin=1;

    }
    else {
        std::cout<<"Ataque de "<<Tab2.getjugador()<<":"<<std::endl;

        do {
            do {
                std::cout<<"Ingrese fila (0-5):";
                std::cin>>x;
            } while (x<0 || x>5);
            do {
                std::cout<<"Ingrese columna (0-5):";
                std::cin>>y;
            } while (y<0 || y>5);
            if (Tab1.gettabJuego()!='-') {
                Tab1.MostrarTablero();
                std::cout<<"Casilla ya atacada"<<std::endl;
            }
            else {
                switch(Tab1.gettab()) {
                    case '0':
                        Tab1.gettabJuego()='0';
                        Tab1.MostrarTablero();
                        strcpy(result,"AGUA");
                        std::cout<<result<<" - Cambio de turno"<<std::endl;
                        turno=!turno;
                        break;
                    case 'A':
                        Tab1.gettabJuego()='X';
                        Tab1.MostrarTablero();
                        if (contA2==3) {
                            strcpy(result,"HUNDIDO");
                            std::cout<<result<<" - Sigue atacando"<<std::endl;
                        }
                        else {
                            strcpy(result,"TOCADO");
                            std::cout<<result<<" - Sigue atacando"<<std::endl;
                        }
                        contA2++;
                        break;
                    case 'B':
                        Tab1.gettabJuego()='X';
                        Tab1.MostrarTablero();
                        if (contB2==2){
                            strcpy(result,"HUNDIDO");
                            std::cout<<result<<" - Sigue atacando"<<std::endl;
                        }
                        else {
                            strcpy(result,"TOCADO");
                            std::cout<<result<<" - Sigue atacando"<<std::endl;
                        }
                        contB2++;
                        break;
                    case 'C':
                        Tab1.gettabJuego()='X';
                        Tab1.MostrarTablero();
                        if (contC2==2)
                        {
                            strcpy(result,"HUNDIDO");
                            std::cout<<result<<" - Sigue atacando"<<std::endl;
                        }
                        else {
                            strcpy(result,"TOCADO");
                            std::cout<<result<<" - Sigue atacando"<<std::endl;
                        }
                        contC2++;
                        break;
                    case 'D':
                        Tab1.gettabJuego()='X';
                        Tab1.MostrarTablero();
                        if (contD2==1)
                        {
                            strcpy(result,"HUNDIDO");
                            std::cout<<result<<" - Sigue atacando"<<std::endl;
                        }
                        else {
                            strcpy(result,"TOCADO");
                            std::cout<<result<<" - Sigue atacando"<<std::endl;
                        }
                        contD2++;
                        break;
                    case 'E':
                        Tab1.gettabJuego()='X';
                        Tab1.MostrarTablero();
                        if (contE2==1)
                        {
                            strcpy(result,"HUNDIDO");
                            std::cout<<result<<" - Sigue atacando"<<std::endl;
                        }
                        else {
                            strcpy(result,"TOCADO");
                            std::cout<<result<<" - Sigue atacando"<<std::endl;
                        }
                        contE2++;
                        break;
                }
            }

        } while (Tab1.gettabJuego()=='-');

        if (contA2==4 && contB2==3 && contC2==3 && contD2==2 && contE2==2)
            fin=1;

    }

};



