# ifndef CNODO_H
# define CNODO_H
# include "CObjeto.h"


class CNodo{

    private:
        CObjeto *oDato;
        CNodo *pSig;
        CNodo *pAnt;
    public:
        CNodo(){}
        ~CNodo(){}
        void insertarAdelante(CObjeto *);
        CObjeto *eliminarAdelante();

        friend class CLista;
        friend class CIterador;
        friend class CReverseIterador;
        friend class CPersona;
        
};


# endif