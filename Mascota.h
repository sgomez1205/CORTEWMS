/*
Objetivo de la Clase: Representar la entidad mascota, proveer caracteristicas unicas y especificas, de cada mascota con el fin de ingresarlo en el 
                      directorio de información de la clinica veterinaria y asociarlo a un Propietario.

Proposito Comun Metodos: Creación de entidades con caracteristicas dadas, modificar y acceder a los datos de cada mascota. 
*/
#ifndef MASCOTA_H
#define MASCOTA_H

#include <iostream>

using std::cout;
using std::string;

class Mascota{
    private:
        string nombreMasc;
        string raza;
        int tipo;        //(1) Perro, (2) Gato, (3)Otros
        double peso;
        int edad;
        string tipoSangre;
        double idMasc;
        int estatus;     //(1) Vivo, (2) Muerto
        string fechaM;
    public:
    //Constructores
        Mascota(); //Constructor por default
        Mascota(string nombreMasc, string raza, int edad, int tipo, double peso, string tipoSangre, double idMasc, int estatus, string fechaM);//Constructor por parametros
    //Metodos Programa
        string getNombreMasc();
        double getIdMasc();
        int getEstatus();
        void setEstatus(int estatus);
        string getFecha();
        void setFecha(string fechaM);
        void mostrarDatosMascota();
};

#endif