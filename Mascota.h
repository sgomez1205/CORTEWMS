#ifndef MASCOTA_H
#define MASCOTA_H

#include <iostream>

using std::cout;
using std::string;

class Mascota{
    private:
        string nombreMasc;
        string raza;
        int tipo;        //(1) Perro, (2) Gato, (3)Otros
        double peso;
        int edad;
        string tipoSangre;
        double idMasc;
        int estatus;     //(1) Vivo, (2) Muerto
        string fechaM;
    public:
        Mascota();
        Mascota(string nombreMasc, string raza, int edad, int tipo, double peso, string tipoSangre, double idMasc, int estatus, string fechaM);

        string getNombreMasc();
        double getIdMasc();
        int getEstatus();
        void setEstatus(int estatus);
        string getFecha();
        void setFecha(string fechaM);
        void mostrarDatosMascota();
};

#endif