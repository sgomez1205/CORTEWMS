#ifndef SISTEMA_H
#define SISTEMA_H

#include <iostream>
#include <vector>
#include <iterator>
#include <map>
#include "PropietarioxMascota.h"

using namespace std;
using std::cout;
using std::cin;
using std::string;
using std::map;

class Sistema {
    private:
        map<double, Propietario> mapPropietarios;
        map<double, Mascota> mapMascotas;
        vector<PropietarioxMascota> propietarioxMascota;
    public:
        Sistema();
        void inicializarDatos();
        void relacion();

        void agregarDatosPropietario();
        void agregarDatosMascota();
        void modificarPropietario(double idProp, int x);
        void eliminarPropietario(double idProp);
        void listarPropietarios();
        void listarMascotas();
        int contarProp();
        void consultarPropietariosDeMascota(double idMasc);
        void consultarMascotasDepropietario(double idProp);
        void asociarMascota(double idProp);
        void asociarPropietario(double idMasc);
        void cambiarEstatus(double idMasc, string fechaM);
        void eliminarPropietarioDeMascota();
};

#endif