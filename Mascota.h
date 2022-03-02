#ifndef MASCOTA_H
#define MASCOTA_H

#include <iostream>

using std::cout;
using std::string;

class Mascota{
    private:
        string nombreMasc;
        string raza;
        int tipo;        //tipo: 1->Perro, 2->Gato, 3->Otros
        double peso;
        int edad;
        string tipoSangre;
        double idMasc;
        bool estatus;     //bool: true->Vivo, false->Muerto
        string fechaM;
    public:
        string getNombreMasc();
        double getIdMasc();
        int getTipo();
        double getPeso();
        string getTipoSangre();
        bool getEstatus();
        string getFecha();
        int getEdad();
        Mascota();
        Mascota(string nombreMasc, string raza, int edad, int tipo, double peso, string tipoSangre, double idMasc, bool estatus, string fechaM);
        void mostrarDatosMascota();
};

#endif