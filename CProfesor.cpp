# include "CProfesor.h"



void CProfesor::pDatos(){
    CLista asigna;

    CPersona *persona1 = new CPersona;
    persona1->setNombre("Lucia");
    asigna.insertarInicio(persona1);

    CProfesor *profesor1 = new CProfesor;
    profesor1->setNombre("Lucia");
    profesor1->setProfC(34455);
    asigna.insertarFinal(profesor1);

    CProfesor *profesor2 = new CProfesor;
    profesor2->setNombre("Ramon");
    profesor2->setProfC(34499);
    asigna.insertarInicio(profesor2);

    CPersona *persona2 = new CPersona;
    persona2->setNombre("Ramon");
    asigna.insertarInicio(persona2);

    asigna.imprimir();
}