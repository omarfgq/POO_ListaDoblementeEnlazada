# ifndef CBLINDADO_H
# define CBLINDADO_H
# include "CLista.h"
# include "CObjeto.h"
# include "CPatrulla.h"
# include "CAuto.h"
# include <iostream>
# include "CMotor.h"
# include "CIterador.h"


using namespace std;

class CBlindado : public CPatrulla,CLista{
    protected:
        int cBlindaje;
    public:
        CBlindado(){}
        ~CBlindado(){}
        void setBlindaje(int nBlindaje){cBlindaje = nBlindaje;}
        void bDatos();

        virtual void imprimir(){
            std::cout<<"\nSoy un blindado color: "<<color<<" ,numero "<<nPatrulla<<" y mi blindaje es de "<<cBlindaje;
        }

};


# endif