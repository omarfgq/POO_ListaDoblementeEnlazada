
# ifndef CPERSONA_H
# define CPERSONA_H
# include "CObjeto.h"
# include <iostream>
# include "CLista.h"


using namespace std;


class CPersona : public CObjeto{
    protected:
        string nombre;
    public:
        CPersona(){}
        ~CPersona(){}
        void setNombre(string);
        virtual void imprimir(){
            std::cout<<"Soy una persona y me llamo: "<<nombre<<std::endl;
        }

};


# endif

