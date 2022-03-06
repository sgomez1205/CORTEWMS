/*
Objetivo de la Clase: Clase intermedia para logar el vinculo o asociación de las clases Propietario y Mascota
Proposito Comun Metodos: Obtener la información de Propietario y Mascota para vincularlos en el vector <PropietarioxMascota> propietarioxmascota.
*/

#ifndef PROPIETARIOXMASCOTA_H
#define PROPIETARIOXMASCOTA_H

#include "Propietario.h"
#include "Mascota.h"

class PropietarioxMascota{
    private:
    //Usado para vincular o asociar Propietario con Mascota y viceversa
        Propietario propietario; // Atributo de tipo Propietario
        Mascota mascota; // Atributo de tipo Mascota
    public:
    //Constructores
        PropietarioxMascota(); // Constructor por default - necesario para uso de constructor por parametros
        PropietarioxMascota(Propietario propietario, Mascota mascota); // Constructor por parametros.
    //Metodos Programa
        Propietario * getPropietario(); //Usado para obtener propietario
        Mascota getMascota(); //Usado para obtener mascota
};

#endif