# ifndef CPATRULLA_H
# define CPATRULLA_H
# include "CObjeto.h"
# include "CLista.h"
# include <iostream>
# include "CAuto.h"


class CPatrulla : public CAuto{
    protected:
        int nPatrulla;
    public:
        CPatrulla(){}
        ~CPatrulla(){}
        void setNP(int numeroP){nPatrulla = numeroP;}

        virtual void imprimir(){
            std::cout<<"\nSoy una patrulla color "<<color<<" mi numero de patrulla es "<<nPatrulla;
        }
};

# endif