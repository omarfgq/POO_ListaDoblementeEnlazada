# ifndef CPROFESOR_H
# define CPROFESOR_H
# include "CPersona.h"
# include "CLista.h"
# include "CObjeto.h"

class CProfesor : public CPersona,CLista{
    private:
        int codigoP;
    public:
        CProfesor(){}
        ~CProfesor(){}
        void setProfC(int nCodigo){ codigoP = nCodigo;}
        void pDatos();

        virtual void imprimir(){
            std::cout<<"Soy un profesor me llamo "<<nombre<<" y mi codigo de profesor es "<<codigoP<<std::endl;
        }
};

# endif