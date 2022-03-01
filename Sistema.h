#ifndef SISTEMA_H
#define SISTEMA_H

#include <iostream>
#include <vector>
#include "Propietario.h"
#include "Mascota.h"
#include "PropietarioxMascota.h"
//#define  NUMDECIMAL = 0.00001

using std::cout;
using std::cin;
using std::string;

class Sistema {
    private:
        vector<Propietario> propietarios;
        vector<Mascota> mascotas;
        vector<PropietarioxMascota> propietariosxMascotas;
        map <Propietario, Mascota> mapPropietariosxMascota;
    public:
        void agregarDatosPropietario();
        void agregarDatosMascota();
        void modificar(double idProp);
        void eliminar(double idProp);
        void listar();
        int contarProp();
        void mostrarPropietarios();
        void mostrarMascotas();
        void consultarPropietariosDeMascota(double idMasc);
        void consultarMascotasDepropietario(double isProp);
        void asociarMascota(double idProp);
        void cambiarEstattus();
        void eliminarPropietarioDeMascota();
        void inicializacionDatosPropietario();
        void inicializacionDatosMascota();
        void inicializarDatos();
        double combinarId(double idProp, double idMasc );
        Sistema();
};

#endif