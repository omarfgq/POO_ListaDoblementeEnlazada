# include "CNodo.h"
# include <iostream>



CObjeto *CNodo::eliminarAdelante(){

    CNodo *temp;
 
    temp = this->pSig;
    this->pSig->pSig->pAnt = this;
    delete &this->pSig;
    this->pSig = this->pSig->pSig;
    return temp->oDato;
    
}




void CNodo::insertarAdelante(CObjeto *nDato){

    CNodo *pNuevo = new CNodo;
    pNuevo->oDato = nDato;

    pNuevo->pSig = this->pSig;
    this->pSig = pNuevo;
    pNuevo->pAnt = this;
    this->pSig->pSig->pAnt = pNuevo;

}
