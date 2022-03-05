/*
Objetivo de la Clase: Representar la entidad Propietario, proveer caracteristicas unicas y especificas, de cada propietario con el fin de ingresarlo en el 
                      directorio de información de la clinica veterinaria y asociarlo a Mascota.

Proposito Comun Metodos: Creación de entidades con caracteristicas dadas por medio de constructores, modificar y acceder a los datos de cada 
                         Propietario a la vez que presentar los datos. 
*/

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
    //Constructores
        Propietario();
        Propietario(double idProp, string nombreProp, string email, double telefono);
    //Metodos Programa    
        void setEmail(string email); //Usado para modificar el email propietario
        void setTelefono(double telefono); // Usado para modificar telefono propietario
        double getIdProp();
        string getNombreProp();
        string getEmail();
        double getTelefono();
        void mostrarDatosPropietario();
};

#endif