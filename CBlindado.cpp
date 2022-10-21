# include "CBlindado.h"


void CBlindado::bDatos(){
    CLista asigna;
    CBlindado *blindado1 = new CBlindado;
    blindado1->setBlindaje(555);
    blindado1->setColor("Negro");
    blindado1->setNP(225);
    asigna.insertarInicio(blindado1);
   
    CPatrulla *patrulla1 = new CPatrulla;
    patrulla1->setColor("negro");
    patrulla1->setNP(555);
    asigna.insertarInicio(patrulla1);
    
    CAuto *auto1 = new CAuto();
    auto1->setColor("Negro");
    auto1->motor.mDatos(1000,2000);
    asigna.insertarInicio(auto1);
    
    CBlindado *blindado2 = new CBlindado;
    blindado2->setBlindaje(555);
    blindado2->setColor("Negro");
    blindado2->setNP(225);
    asigna.insertarInicio(blindado2);
   
    CPatrulla *patrulla2 = new CPatrulla;
    patrulla2->setColor("negro");
    patrulla2->setNP(555);
    asigna.insertarInicio(patrulla2);
   
    CAuto *auto2 = new CAuto();
    auto2->setColor("Negro");
    asigna.insertarInicio(auto2);

    asigna.imprimir();    
}