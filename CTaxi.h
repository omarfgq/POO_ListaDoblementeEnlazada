# ifndef CTAXI_H
# define CTAXI_H
# include "CLista.h"
# include "CObjeto.h"
# include <iostream>
# include "CAuto.h"
# include "CMotor.h"
using namespace std;

class CTaxi : public CAuto,CLista{
    private:
        int nTaxi;
    public:
        CTaxi(){}
        ~CTaxi(){}
        void setNumeroT(int);
        void tDatos();
        
        virtual void imprimir(){
            std::cout<<"\nSoy un taxi color "<<color<<" y mi numero de taxi es "<<nTaxi;
        }

};


# endif