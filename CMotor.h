# ifndef CMOTOR_H
# define CMOTOR_H
# include "CLista.h"
# include "CObjeto.h"
# include <iostream>
# include "CAutoparte.h"

class CMotor : public CAutoparte,CLista{
    public:
        int cilindrada;
    public:
        CMotor(){}
        ~CMotor(){}
        int setCilindrada(int);
        void mDatos(int,int);

        virtual void imprimir(){
            std::cout<<"\nTienen un motor con cilindrada de "<<cilindrada<<" y el numero de autoparte es "<<nParte;
        }

        friend class CAuto;
};

# endif