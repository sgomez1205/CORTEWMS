#include <iostream>
#include "Propietario.h"

double Propietario::getIdProp(){
    return this -> idProp;
}

string Propietario::getNombreProp(){
    return this -> nombreProp;
}
string Propietario::getEmail(){
    return this -> email;
}

double Propietario::getTelefono(){
    return this -> telefono;
}

Propietario::Propietario(double idProp, string nombreProp, string email,double telefono){
    cout << "Entre al constructor con todos los parametros Prop";
    this -> idProp = idProp;
    this -> nombreProp = nombreProp;
    this -> email = email;
    this -> telefono = telefono;
}

void Propietario::mostarDatosPropietario(){
    cout << "**Informacion Mascota**\n";
    cout << "-Nombre: " << nombreProp << "\n";
    cout << "-IdPropietario: " << idProp << "\n";
    cout << "-Email: " << email << "\n";
    cout << "-Telefono: " << telefono << "\n";
    cout << "\n";
}
