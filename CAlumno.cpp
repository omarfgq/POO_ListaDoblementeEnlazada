# include "CAlumno.h"



void CAlumno::setCodigo(int codigoA){
    codigo = codigoA;
}


void CAlumno::aDatos(){

    CLista asigna;
    
    CPersona *perso2 = new CPersona;
    perso2->setNombre("Jesus");
    asigna.insertarInicio(perso2);

    CAlumno *alumno1 = new CAlumno;   
    alumno1->setNombre("Jesus");
    alumno1->setCodigo(4525);
    asigna.insertarFinal(alumno1);
   
    CPersona *perso1 = new CPersona;
    perso1->setNombre("Juan");
    asigna.insertarFinal(perso1);

    CAlumno *alumno2 = new CAlumno;
    alumno2->setNombre("Juan");
    alumno2->setCodigo(5555);
    asigna.insertarFinal(alumno2);
    
    asigna.imprimir();

}
