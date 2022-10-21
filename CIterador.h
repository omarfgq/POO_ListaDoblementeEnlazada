# ifndef CITERADOR_H
# define CITERADOR_H
# include "CNodo.h"



class CIterador{

    private:
        CNodo *pActual;
    public:
        CIterador(){}
        ~CIterador(){}
        void operator=(CIterador &otro);
        bool operator==(CIterador &otro);
        bool operator!=(CIterador &otro);
        void operator++();
        void operator--();
        CObjeto *&operator*();
        void InsertarAdelante(CObjeto *cont);
        CObjeto *EliminarSiguiente();
    private: void setNodo(CNodo *pNodo);
        
        
        friend class CLista;
};

#endif