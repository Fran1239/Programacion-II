//
// Created by FRANCO on 06/06/2022.
//

#ifndef BATALLANAVAL1_TABLERO_H
#define BATALLANAVAL1_TABLERO_H


class tablero {
private:
    char tab[6][6]={{'0','0','0','0','0','0'},
                         {'0','0','0','0','0','0'},
                         {'0','0','0','0','0','0'},
                         {'0','0','0','0','0','0'},
                         {'0','0','0','0','0','0'},
                         {'0','0','0','0','0','0'}};
    char tabJuego[6][6]= { {'-','-','-','-','-','-'},
                            {'-','-','-','-','-','-'},
                            {'-','-','-','-','-','-'},
                            {'-','-','-','-','-','-'},
                            {'-','-','-','-','-','-'},
                            {'-','-','-','-','-','-'}};
    char jugador[40];
public:
    void settab(char*);
    char* gettab();
    void settabJuego(char*);
    char* gettabJuego();
    void setjugador(char*);
    char* getjugador();
    void GenerarTablero(char*);
    void MostrarTablero(char*);
};


#endif //BATALLANAVAL1_TABLERO_H
