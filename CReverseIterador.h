# ifndef CREVERSEITERADOR_H
# define CREVERSEITERADOR_H
# include "CNodo.h"

class CReverseIterador{

  private:
        CNodo *pActual;
    public:
        CReverseIterador(){}
        ~CReverseIterador(){}
        void operator=(CReverseIterador &otro);
        bool operator==(CReverseIterador &otro);
        bool operator!=(CReverseIterador &otro);
        void operator++();
        void operator--();
        CObjeto *&operator*();
        void RInsertarAdelante(CObjeto *cont);
        CObjeto *REliminarSiguiente();
    private: void setNodo(CNodo *pNodo);
        
        
        friend class CLista;

};



# endif