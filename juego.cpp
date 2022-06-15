//
// Created by FRANCO on 07/06/2022.
//
#include <iostream>
#include <string.h>
#include "juego.h"

juego::juego(){
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

void juego::setjugador1(char* j1){
    Tab1.setjugador(j1);
};

void juego::setjugador2(char* j2){
    Tab2.setjugador(j2);
};

void juego::Atacar(){
    int x, y, a, b;
    char result[40];

    Tab1.MostrarT();
    Tab2.MostrarT();

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
            if (Tab2.getcasillaTJ(x, y) != '-') {
                Tab2.MostrarT();
                std::cout<<"Casilla ya atacada"<<std::endl;
            }
            else {
                switch(Tab2.getcasillaT(x, y)) {
                    case '0':
                        Tab2.setcasillaTJ(x,y, '0');
                        Tab2.MostrarTJ();
                        strcpy(result,"AGUA");
                        std::cout<<result<<" - Cambio de turno"<<std::endl;
                        turno=!turno;
                        break;
                    case 'A':
                        Tab2.setcasillaTJ(x,y, 'X');
                        Tab2.MostrarTJ();
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
                        Tab2.setcasillaTJ(x,y, 'X');
                        Tab2.MostrarTJ();
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
                        Tab2.setcasillaTJ(x,y, 'X');
                        Tab2.MostrarTJ();
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
                        Tab2.setcasillaTJ(x,y, 'X');
                        Tab2.MostrarTJ();
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
                        Tab2.setcasillaTJ(x,y, 'X');
                        Tab2.MostrarTJ();
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

        } while (Tab2.getcasillaTJ(x,y) == '-');

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
            if (Tab1.getcasillaTJ(x,y) != '-') {
                Tab1.MostrarT();
                std::cout<<"Casilla ya atacada"<<std::endl;
            }
            else {
                switch(Tab1.getcasillaT(x,y)) {
                    case '0':
                        Tab1.setcasillaTJ(x,y, '0');
                        Tab1.MostrarTJ();
                        strcpy(result,"AGUA");
                        std::cout<<result<<" - Cambio de turno"<<std::endl;
                        turno=!turno;
                        break;
                    case 'A':
                        Tab1.setcasillaTJ(x,y, 'X');
                        Tab1.MostrarTJ();
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
                        Tab1.setcasillaTJ(x,y, 'X');
                        Tab1.MostrarTJ();
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
                        Tab1.setcasillaTJ(x,y, 'X');
                        Tab1.MostrarTJ();
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
                        Tab1.setcasillaTJ(x,y, 'X');
                        Tab1.MostrarTJ();
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
                        Tab1.setcasillaTJ(x,y, 'X');
                        Tab1.MostrarTJ();
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

        } while (Tab1.getcasillaTJ(x,y) == '-');

        if (contA2==4 && contB2==3 && contC2==3 && contD2==2 && contE2==2)
            fin=1;

    }

};


