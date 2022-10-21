# ifndef CLISTA_H
# define CLISTA_H
# include "CNodo.h"
# include "CIterador.h"
# include "CReverseIterador.h"

class CLista : public CNodo{
    
    private:
        CNodo pInicio;
        CNodo pFinal;
        CIterador m_itBegin;
        CIterador m_itEnd;
        CReverseIterador it_revBegin;
        CReverseIterador it_revEnd;
    public: 
        CLista();
        ~CLista(){}
        void insertarInicio(CObjeto*);
        void insertarFinal(CObjeto*);
        CObjeto *eliminarInicio();
        CObjeto *eliminarFinal();
        void imprimir();
        bool isEmpty();
        bool isFull();
        int size();
        CIterador &Begin();
        CIterador &End();
        CReverseIterador &rBegin();
        CReverseIterador &rEnd();
        
};


# endif