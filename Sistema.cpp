#include <iostream>
#include "Sistema.h"



Sistema::Sistema(){
}

void Sistema::agregarDatosPropietario(){
    string nombreProp, email;
    double idProp, telefono;
    cout << "Ingrese su nombre: ";
    cin >> nombreProp;
    cout << "\nIngrese su Identificacion: ";
    cin >> idProp;
    cout << "\nIngrese su email: ";
    cin >> email;
    cout << "\nIngrese su telefono: ";
    cin >> telefono;
    cout << "\n";
    Propietario prop(idProp, nombreProp, email, telefono);
    propietarios.push_back(prop);
}

void Sistema::agregarDatosMascota(){
    string nombreMasc, raza, tipoSangre, fechaM;
    double peso, idMasc;
    int edad, tipo;
    bool estatus;
    cout << "Ingrese el nombre de la mascota: ";
    cin >> nombreMasc;
    cout << "\nIngrese la identificacion de la mascota: ";
    cin >> idMasc;
    cout << "\nIngrese el tipo: ";
    cin >> tipo;
    cout << "\nIngrese la raza: ";
    cin >> raza;
    cout << "\nIngrese el peso: ";
    cin >> peso;
    cout << "\nIngrese la edad: ";
    cin >> edad;
    cout << "\nIngrese el tipo de sangre: ";
    cin >> tipoSangre;
    cout << "\nIngrese el estatus: ";
    cin >> estatus;
    cout << "\nIngrese la fecha de muerte: ";
    cin >> fechaM;
    Mascota masc(nombreMasc, raza, edad,tipo, peso, tipoSangre, idMasc, estatus, fechaM);
    mascotas.push_back(masc);
    
}

void Sistema::mostrarPropietarios(){
    for( int i = 0; i < propietarios.size(); i++ ){
        propietarios[i].mostarDatosPropietario();
    }
}

