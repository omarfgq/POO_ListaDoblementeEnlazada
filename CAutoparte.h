# ifndef CAUTOPARTE_H
# define CAUTOPARTE_H
# include "CObjeto.h"
# include "CLista.h"
# include <iostream>

using namespace std;

class CAutoparte : public CObjeto{
    protected:
        int nParte;
    public:
        CAutoparte(){}
        ~CAutoparte(){}
        void setNumeroP(int);

        virtual void imprimir(){
            std::cout<<"Soy una autoparte y mi numero es "<<nParte<<std::endl;
        }


};

# endif