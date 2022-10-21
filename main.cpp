# include <iostream>
# include "CNodo.h"
# include "CLista.h"
# include "CIterador.h"
# include "CReverseIterador.h"
# include "CObjeto.h"
# include "CPersona.h"
# include "CAlumno.h"
# include "CProfesor.h"
# include "CBlindado.h"
# include "CTaxi.h"
# include "CLlanta.h"


int main(){

    // Objetos
    CAlumno *aLista;
    CProfesor *pLista1;
    CBlindado *bLista2;
    CTaxi *tLista3;
    CLlanta *lLista4;
     
    aLista->aDatos();
    pLista1->pDatos();
    bLista2->bDatos();
    tLista3->tDatos();
    lLista4->lDatos();
      
    system("pause");
    return 0;
}