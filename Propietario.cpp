#include <iostream>
#include "Propietario.h"

Propietario::Propietario(){
    this -> idProp = 0;
    this -> nombreProp = "";
    this -> email = "";
    this -> telefono = 0;
}

Propietario::Propietario(double idProp, string nombreProp, string email,double telefono){
    this -> idProp = idProp;
    this -> nombreProp = nombreProp;
    this -> email = email;
    this -> telefono = telefono;
}

void Propietario::mostrarDatosPropietario(){
    cout << "-Info:\n";
    cout << "-Nombre: " << nombreProp << "\n";
    cout << "-IdPropietario: " << idProp << "\n";
    cout << "-Email: " << email << "\n";
    cout << "-Telefono: " << telefono << "\n";
    return;
}

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

void Propietario::setEmail(string email){
    this -> email = email;
}

void Propietario::setTelefono(double telefono){
    this -> telefono = telefono;
}