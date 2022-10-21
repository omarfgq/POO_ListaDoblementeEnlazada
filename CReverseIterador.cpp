# include "CReverseIterador.h"
# include <iostream>
# include "CNodo.h"
# include "CLista.h"



void CReverseIterador::operator=(CReverseIterador &otro){
    pActual = otro.pActual;
}

bool CReverseIterador::operator==(CReverseIterador &otro){
    return pActual == otro.pActual ? true : false;
}

bool CReverseIterador::operator!=(CReverseIterador &otro){
    return pActual != otro.pActual ? true : false;

}

void CReverseIterador::operator++(){
    pActual = pActual->pAnt;
}

void CReverseIterador::operator--(){
    pActual = pActual->pSig;
}

CObjeto *&CReverseIterador::operator*(){
    return pActual->oDato;
}

void CReverseIterador::RInsertarAdelante(CObjeto *cont){
    pActual->insertarAdelante(cont);
}

CObjeto *CReverseIterador::REliminarSiguiente(){
    return pActual->pAnt->eliminarAdelante();
}

void CReverseIterador::setNodo(CNodo *pNodo){
    pActual = pNodo;
}