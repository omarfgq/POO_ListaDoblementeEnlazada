# ifndef CAUTO_H
# define CAUTO_H
# include "CObjeto.h"
# include "CLista.h"
# include <iostream>
# include "CMotor.h"


using namespace std;

class CAuto : public CObjeto {
    public:
        string color;
    public:
        CAuto(){}
        ~CAuto(){}
        void setColor(string nColor){color = nColor;}
        CMotor motor;

        virtual void imprimir(){
            std::cout<<"\nSoy un auto color "<<color;
        }
};


# endif