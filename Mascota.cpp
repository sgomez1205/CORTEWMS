#include <iostream>
#include "Mascota.h"

Mascota::Mascota(){
    this -> nombreMasc = "";
    this -> idMasc = 0;
    this -> raza = "";
    this -> edad = 0;
    this -> tipo = 0;
    this -> peso = 0;
    this -> tipoSangre = "";
    this -> estatus = 1;
    this -> fechaM = "Vivo Actualmente";
}

Mascota::Mascota(string nombreMasc, string raza, int edad, int tipo, double peso,string tipoSangre, double idMasc, int estatus, string fechaM){
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
    cout << "-Info:\n";
    cout << "-Nombre: " << nombreMasc << "\n";
    cout << "-IdMascota: " << idMasc << "\n";
    cout << "-Edad(Anos): " << edad << "\n";
    if( tipo == 1 ){
        cout << "-Tipo: Perro" << "\n";
    }
    if( tipo == 2 ){
        cout << "-Tipo: Gato" << "\n";
    }
    else if( tipo == 3 ){
        cout << "-Tipo: Otro" << "\n";
    }
    cout << "-Peso(KG): " << peso << "\n";
    cout << "-Tipo De Sangre: " << tipoSangre << "\n";
    if( estatus == 1 ){
        cout << "-Estatus: Vivo\n";
    }
    if( estatus == 0 ){
        cout << "-Estatus: Muerto\n";
    }
    cout << "-Fecha De Muerte: " << fechaM << "\n";
    return;
}

string Mascota::getNombreMasc(){
    return this -> nombreMasc;
}

double Mascota::getIdMasc(){
    return this -> idMasc;
}

int Mascota::getEstatus(){
    return this -> estatus;
}

void Mascota::setEstatus(int estatus){
    this -> estatus = estatus;
}

string Mascota::getFecha(){
    return this -> fechaM;
}

void Mascota::setFecha( string fechaM ){
    this -> fechaM = fechaM;
}

