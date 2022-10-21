# include "CTaxi.h"

void CTaxi::setNumeroT(int numT){
    nTaxi = numT;
}


void CTaxi::tDatos(){
    CLista asigna;

    CTaxi *taxi1 = new CTaxi;
    taxi1->setColor("Amarillo");
    taxi1->setNumeroT(251);
    asigna.insertarInicio(taxi1);

    CAuto *auto1 = new CAuto;
    auto1->setColor("Amarillo");
    auto1->motor.mDatos(700,800);
    asigna.insertarInicio(auto1);

    CTaxi *taxi2 = new CTaxi;
    taxi2->setColor("Amarillo");
    taxi2->setNumeroT(251);
    asigna.insertarInicio(taxi2);

    CAuto *auto2 = new CAuto;
    auto2->setColor("Amarillo");
    asigna.insertarInicio(auto2);

    asigna.imprimir();

    

}