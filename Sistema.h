/*
Objetivo de la Clase:Presentar el medio por el cual se procedera a realizar las operaciones relacionadas al directorio de Propietarios y Mascotas
                     
Proposito Comun Metodos: Es la clase que facilita las acciones y metodos para desarrollar los metodos solicitados para completar
                         lo dispuesto en peticiones de acciones y metodos a realizar.
*/
#ifndef SISTEMA_H
#define SISTEMA_H

//Inclusion librerias a utilizar y archivos .h a utilizar
#include <iostream>
#include <vector> //Usado por vector
#include <iterator> //Usado por mapas
#include <map>//Usados por mapas
#include "PropietarioxMascota.h"

using namespace std;
using std::cout;
using std::cin;
using std::string;
using std::map;

class Sistema {
    private:
        map<double, Propietario> mapPropietarios; // Mapa que recibe y vincula el id de propietario con la clase de Propietarios.
        map<double, Mascota> mapMascotas; // Mapa que recibe y vincula el id de Mascota con la clase Mascota
        vector<PropietarioxMascota> propietarioxMascota; // Vector utilizado 
    public:
    //Constructores
        Sistema();//Constructor por default
    //Metodos Programa
        void agregarDatosPropietario();
        void agregarDatosMascota();
        void modificarPropietario(double idProp, int x); //X-> Para cambiar o telefono o email
        void eliminarPropietario(double idProp);
        void listarPropietarios();
        void listarMascotas();
        int contarProp();
        void consultarPropietariosDeMascota(double idMasc);
        void consultarMascotasDepropietario(double idProp);
        void asociarPropietarioxMascota(double idProp, double idMasc);
        void cambiarEstatus(double idMasc, string fechaM);//Fecha paara establecer fecha de defunción
        void eliminarPropietarioDeMascota(double idProp);
};

#endif