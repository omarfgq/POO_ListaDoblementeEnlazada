# ifndef CLLANTA_H
# define CLLANTA_H
# include "CLista.h"
# include "CObjeto.h"
# include <iostream>
# include "CAutoparte.h"

class CLlanta : public CAutoparte,CLista{
    public:
        int nLlantas;
    public:
        CLlanta(){}
        ~CLlanta(){}
        void setLlantas(int);
        void lDatos();

        virtual void imprimir(){
            std::cout<<"Numero de llantas "<<nLlantas<<" numero de parte "<<nParte<<std::endl;
        }
};

# endif