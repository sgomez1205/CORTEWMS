#ifndef SISTEMA_H
#define SISTEMA_H

#include <iostream>
#include <iterator>
#include <vector>
#include <map>
#include "PropietarioxMascota.h"

using namespace std;
using std::cout;
using std::cin;
using std::string;

class Sistema {
    private:
        vector<Propietario> propietarios;
        vector<Mascota> mascotas;
        map <Propietario, Mascota> mapPropietariosxMascota;
        //mapa: { prop : <mascota>, ... etc }
    public:
        Sistema();
        void inicializarDatos();

        void agregarDatosPropietario();
        void agregarDatosMascota();
        void modificar(double idProp);
        void eliminar(double idProp);
        void listarPropietarios();
        void listarMascotas();
        int contarProp();
        void consultarPropietariosDeMascota(double idMasc);
        void consultarMascotasDepropietario(double idProp);
        void asociarMascota(double idProp);
        void asociarPropietario(double idMasc);
        void cambiarEstatus();
        void eliminarPropietarioDeMascota();
};

#endif