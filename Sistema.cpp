#include <iostream>
#include "Sistema.h"

map<double, Propietario>::iterator itrProp;
map<double, Mascota>::iterator itrMasc;

Sistema::Sistema(){
    
}

void Sistema::agregarDatosPropietario(){
    string nombreProp, email;
    double idProp, telefono;
    cout << "\nIngrese Su Identificacion: ";
    cin >> idProp;
    if(mapPropietarios.find(idProp) != mapPropietarios.end()) {
        cout << "Error De ID -> Propietario Ya Registrado"; 
    }
    else{
        cout << "Ingrese Su Nombre Completo(Separado con '-'): ";
        cin >> nombreProp;
        cout << "Ingrese Su Email: ";
        cin >> email;
        cout << "Ingrese Su Telefono: ";
        cin >> telefono;
        Propietario prop(idProp, nombreProp, email, telefono);
        mapPropietarios.insert(pair<double, Propietario>(idProp, prop));
        cout << "\nPropietario Agregado\n";  
    }
    return;
}

void Sistema::agregarDatosMascota(){
    string nombreMasc, raza, tipoSangre, fechaM;
    double peso, idMasc;
    int edad, tipo;
    bool estatus;
    cout << "\nIngrese La Identificacion De La mascota: ";
    cin >> idMasc;
    if(mapMascotas.find(idMasc) != mapMascotas.end()) {
        cout << "Error De ID -> Mascota Ya Registrada"; 
    }
    else{
        cout << "Ingrese El Nombre De La mascota: ";
        cin >> nombreMasc;
        cout << "Ingrese El Tipo\n(1) Perro\n(2) Gato\n(3) Otro\n: ";
        cin >> tipo;
        cout << "Ingrese La Raza: ";
        cin >> raza;
        cout << "Ingrese El Peso(KG): ";
        cin >> peso;
        cout << "Ingrese La Edad(Años): ";
        cin >> edad;
        cout << "Ingrese El Tipo De Sangre: ";
        cin >> tipoSangre;
        estatus = 1;
        fechaM = "Vivo Actualmente";
        Mascota masc(nombreMasc, raza, edad,tipo, peso, tipoSangre, idMasc, estatus, fechaM);
        mapMascotas.insert(pair<double, Mascota>(idMasc, masc));
        cout << "\nMascota Agregada\n"; 
    }
    return;
}

void Sistema::modificarPropietario(double idProp, int num){
    if(mapPropietarios.find(idProp) != mapPropietarios.end()){
        cout << "Se Modificara El Usuario Con ID: " << idProp << "\n";
        if(num == 1){ //Email
            string email;
            cout << "Su Email Es:" << mapPropietarios[idProp].getEmail();
            cout << "Ingrese Su Nuevo Email: ";
            cin >> email;
            mapPropietarios[idProp].setEmail(email);
            cout << "\nSu Email Se Ha cambiado\n";
            return;
        }
        else if(num == 2){ //Telefono
            double telefono;
            cout << "Su Telefono Es: " << mapPropietarios[idProp].getTelefono();
            cout << "Ingrese Su Nuevo Telefono: ";
            cin >> telefono;
            mapPropietarios[idProp].setTelefono(telefono);
            cout << "\nSu Telefono Se Ha Cambiado\n";
            return;
        }
    }
    else{
        cout << "No Existe El Usuario" << "\n";
    }
    cout << "\n";
    return;
}

void Sistema::eliminarPropietario(double idProp){
    if(mapPropietarios.find(idProp) != mapPropietarios.end()){
        cout << "Se Eliminara El Usuario Con ID: " << idProp << "\n";
        mapPropietarios.erase(idProp);
        cout << "Usuario Eliminado\n";
    }
    else{
        cout << "No Existe El Usuario\n";
    }
    return;
}

void Sistema::listarPropietarios(){
    cout << "****PROPIETARIOS****";
    for(itrProp = mapPropietarios.begin(); itrProp != mapPropietarios.end(); ++itrProp){
        itrProp->second.mostrarDatosPropietario();
    }
    cout << "\n";
    return;
}

void Sistema::listarMascotas(){
    cout << "****MASCOTAS****\n";
    for(itrMasc = mapMascotas.begin(); itrMasc != mapMascotas.end(); ++itrMasc){
        itrMasc->second.mostrarDatosMascota();
    }
    cout << "\n";
    return;
}

int Sistema::contarProp(){
    int cont = 0;
    for(itrProp = mapPropietarios.begin(); itrProp != mapPropietarios.end(); ++itrProp){
        cont++;
    }
    return cont;
}

void Sistema::consultarPropietariosDeMascota(double idMasc){
    int ban = 0;
    for( int i = 0; i < propietarioxMascota.size(); i++ ){
        if( propietarioxMascota[i].getMascota().getIdMasc() == idMasc ){
            ban = 1;
            cout << "Propietarios de " << propietarioxMascota[i].getMascota().getNombreMasc() << " son:\n";
            propietarioxMascota[i].getPropietario().mostrarDatosPropietario();
            
        }
    }
    if( ban == 0 ){
        cout << "La Mascota No Tiene Propietario O No Existe\n";
    }
    return;
}

void Sistema::consultarMascotasDepropietario(double idProp){
    int ban = 0;
    for(int i = 0; i < propietarioxMascota.size(); i++){
        if( propietarioxMascota[i].getPropietario().getIdProp() == idProp ){
            ban = 1;
            cout << "Mascotas de " << propietarioxMascota[i].getPropietario().getNombreProp() << " son:\n";
            propietarioxMascota[i].getMascota().mostrarDatosMascota();
        }
    }
    if( ban == 0 ){
        cout << "El Propietario No Tiene Mascotas O No Existe\n";
    }
    return;
}

void Sistema::asociarPropietarioxMascota(double idProp, double idMasc){
    Propietario tempP;
    Mascota tempM;
    if(mapPropietarios.find(idProp) != mapPropietarios.end() && mapMascotas.find(idMasc) != mapMascotas.end()){
        cout << "Se Relaciono La Mascota Y El Usuario\n";
        tempP = this -> mapPropietarios[idProp];
        tempM = this -> mapMascotas[idMasc];
        PropietarioxMascota objet1(tempP, tempM);
        propietarioxMascota.push_back(objet1);
    }
    else{
        cout << "No Existe El Propietario o La Mascota";
    }
    cout << "\n";
    return;
}

void Sistema::cambiarEstatus(double idMasc, string fechaM){
    if(mapMascotas.find(idMasc) != mapMascotas.end()){
        if(mapMascotas[idMasc].getEstatus() == 1){
            mapMascotas[idMasc].setEstatus(0);
            mapMascotas[idMasc].setFecha(fechaM);
        }
    }
    else{
        cout << "ID Invalido -> La Mascota No Existe\n";
    }
    cout << "\n";
    return;
}

void Sistema::eliminarPropietarioDeMascota(double idProp){
    int ban = 0;
    for(int i = 0; i < propietarioxMascota.size(); i++){
        if(propietarioxMascota[i].getPropietario().getIdProp() == idProp){
            ban = 1;
            cout << "Se Elimino La Relacion\n";
            propietarioxMascota.erase(propietarioxMascota.begin() + i);
        }
    }
    if( ban == 0 ){
        cout << "ID Invalido -> No Existe El Propietario";
    }
    return;
}

