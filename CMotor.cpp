# include "CMotor.h"


int CMotor::setCilindrada(int cCilindrada ){
    cilindrada = cCilindrada;
    return cilindrada;
}



void CMotor::mDatos(int numP,int cantC){
    CLista asigna;

    CMotor *motor1 = new CMotor;
    motor1->setNumeroP(numP);
    motor1->setCilindrada(cantC);
    asigna.insertarInicio(motor1);

    
    asigna.imprimir();

}