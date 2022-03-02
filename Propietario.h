#ifndef PROPIETARIO_H
#define PROPIETARIO_H 

#include <iostream>

using std::cout;
using std::string;

class Propietario{
    private:
        double idProp;
        string nombreProp;
        string email;
        double telefono;
    public:
        double getIdProp();
        string getNombreProp();
        string getEmail();
        double getTelefono();
        Propietario();
        Propietario(double idProp, string nombreProp, string email,double telefono);
        void mostrarDatosPropietario();
};

#endif