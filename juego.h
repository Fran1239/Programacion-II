//
// Created by FRANCO on 07/06/2022.
//

#ifndef BATALLANAVAL1_JUEGO_H
#define BATALLANAVAL1_JUEGO_H


class juego {
private:
    char Tab1;
    char Tab2;
    int turno=0, fin=0;
    int contA1=0, contB1=0, contC1=0, contD1=0, contE1=0;
    int contA2=0, contB2=0, contC2=0, contD2=0, contE2=0;
public:
    void Atacar();
};


#endif //BATALLANAVAL1_JUEGO_H
