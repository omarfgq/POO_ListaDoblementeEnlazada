# ifndef CALUMNO_H
# define CALUMNO_H
# include "CPersona.h"
# include "CLista.h"
# include "CObjeto.h"
# include "CMotor.h"



class CAlumno : public CPersona,CLista{
    protected:
        int codigo;
    public:
        CAlumno(){}
        ~CAlumno(){}
        void setCodigo(int);
        void aDatos();
        virtual void imprimir(){
            std::cout<<"Soy un alumno mi nombre es: "<<nombre<<" y mi codigo es: "<<codigo<<std::endl;
        }
};

# endif