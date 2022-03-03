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
        Propietario();
        Propietario(double idProp, string nombreProp, string email, double telefono);
        
        void setEmail(string email);
        void setTelefono(double telefono);
        double getIdProp();
        string getNombreProp();
        string getEmail();
        double getTelefono();
        void mostrarDatosPropietario();
};

#endif