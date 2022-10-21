# include "CIterador.h"
# include <iostream>
# include "CNodo.h"
# include "CLista.h"



void CIterador::operator=(CIterador &otro){
    pActual = otro.pActual;
}

bool CIterador::operator==(CIterador &otro){
    return pActual == otro.pActual ? true : false;
}

bool CIterador::operator!=(CIterador &otro){
    return pActual != otro.pActual ? true : false;

}

void CIterador::operator++(){
    pActual = pActual->pSig;
}

void CIterador::operator--(){
    pActual = pActual->pAnt;
}

CObjeto *&CIterador::operator*(){
    return pActual->oDato;
}

void CIterador::InsertarAdelante(CObjeto *cont){
    pActual->pAnt->insertarAdelante(cont);
}

CObjeto *CIterador::EliminarSiguiente(){
    return pActual->pAnt->eliminarAdelante();
}

void CIterador::setNodo(CNodo *pNodo){
    pActual = pNodo;
}