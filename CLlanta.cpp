# include "CLlanta.h"

void CLlanta::setLlantas(int num){
    nLlantas = num;
}


void CLlanta::lDatos(){
    CLista asigna;

    CLlanta *llantas1 = new CLlanta;
    llantas1->setNumeroP(200);
    llantas1->setLlantas(4);
    asigna.insertarInicio(llantas1);

    CAutoparte *aParte1 = new CAutoparte;
    aParte1->setNumeroP(200);
    asigna.insertarInicio(aParte1);

    CLlanta *llantas2 = new CLlanta;
    llantas2->setNumeroP(400);
    llantas2->setLlantas(4);
    asigna.insertarInicio(llantas2);

    CAutoparte *aParte2 = new CAutoparte;
    aParte2->setNumeroP(400);
    asigna.insertarInicio(aParte2);

    asigna.imprimir();


}