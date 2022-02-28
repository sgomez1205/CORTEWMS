#ifndef PROPIETARIO_H
#define PROPIETARIO_H 

#include <iostream>
using std::cout;
#include <vector>

using std::string;
using std::vector;

class Propietario{
    private:
        double idProp;
        string nombreProp;
        string email;
        double telefono;
        vector<double> mascota;
    public:
        double getIdProp();
        string getNombreProp();
        string getEmail();
        double getTelefono();
        Propietario(double idProp, string nombreProp, string email,double telefono);
        void mostarDatosPropietario();
};

#endif