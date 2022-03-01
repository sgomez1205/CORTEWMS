#include <iostream>
#include "Mascota.h"

Mascota::Mascota(){
    cout << "Entre al constructor con todos los parametros MASC";
    this -> nombreMasc = "";
    this -> idMasc = 0;
    this -> raza = "";
    this -> edad = 0;
    this -> tipo = 0;
    this -> peso = 0;
    this -> tipoSangre = "";
    this -> estatus = 0;
    this -> fechaM = "";
}

Mascota::Mascota(string nombreMasc, string raza, int edad, int tipo, double peso,string tipoSangre, double idMasc, bool status, string fechaM){
    cout << "Entre al constructor con todos los parametros MASC";
    this -> nombreMasc = nombreMasc;
    this -> idMasc = idMasc;
    this -> raza = raza;
    this -> edad = edad;
    this -> tipo = tipo;
    this -> peso = peso;
    this -> tipoSangre = tipoSangre;
    this -> estatus = estatus;
    this -> fechaM = fechaM;
}

void Mascota::mostrarDatosMascota(){
    cout << "**Informacion Mascota**\n";
    cout << "-Nombre: " << nombreMasc << "\n";
    cout << "-IdMascota: " << idMasc << "\n";
    cout << "-Edad: " << edad << "\n";
    cout << "-Tipo: " << tipo << "\n";
    cout << "-Peso: " << peso << "\n";
    cout << "-Tipo De Sangre: " << tipoSangre << "\n";
    cout << "-Estatu: " << estatus << "\n";
    cout << "-Fecha De Muerte: " << fechaM << "\n";
    cout << "\n";
}

string Mascota::getNombreMasc(){
    return this -> nombreMasc;
}

double Mascota::getIdMasc(){
    return this -> idMasc;
}

int Mascota::getTipo(){
    return this -> tipo;
}

double Mascota::getPeso(){
    return this -> peso;
}

string Mascota::getTipoSangre(){
    return this -> tipoSangre;
}

bool Mascota::getEstatus(){
    return this -> estatus;
}

string Mascota::getFecha(){
    return this -> fechaM;
}

int Mascota::getEdad(){
    return this -> edad;
}