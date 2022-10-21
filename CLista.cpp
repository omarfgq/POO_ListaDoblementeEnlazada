# include "CLista.h"
# include "CNodo.h"
# include "CIterador.h"
# include <iostream>


CLista::CLista(){

    pInicio.pSig = &pFinal;
    pFinal.pAnt = &pInicio;
}


CIterador &CLista::Begin(){
    m_itBegin.setNodo(pInicio.pSig);
    return m_itBegin;
}

CIterador &CLista::End(){
    m_itEnd.setNodo(&pFinal);
    return m_itEnd;
}

CReverseIterador &CLista::rBegin(){
    it_revBegin.setNodo(pFinal.pAnt);
    return it_revBegin;
}

CReverseIterador &CLista::rEnd(){
    it_revEnd.setNodo(&pInicio);
    return it_revEnd;

}



void CLista::insertarInicio(CObjeto *nD){

    pInicio.insertarAdelante(nD);

}


void CLista::insertarFinal(CObjeto *nD){

    pFinal.pAnt->insertarAdelante(nD);

}


CObjeto *CLista::eliminarInicio(){
    
    return pInicio.eliminarAdelante();
   
}


CObjeto *CLista::eliminarFinal(){

    return pFinal.pAnt->pAnt->eliminarAdelante(); 

}


int CLista::size(){

    int iNodos = 0;
    CNodo *p = pInicio.pSig;

    while(p != &pFinal){
        iNodos++;
        p = p->pSig;
    }
    return iNodos;

}

bool CLista::isEmpty(){
    
    return pInicio.pSig == &pFinal ? true : false;

}

bool CLista::isFull(){

    return false;

}

void CLista::imprimir(){

    CNodo *p = pInicio.pSig;
    CObjeto *poo;
    
    while(p != &pFinal){
        p->oDato->imprimir();
        p = p->pSig;
       
    }
    
    std::cout<<"\n"<<std::endl;

}
