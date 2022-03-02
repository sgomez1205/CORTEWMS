#ifndef PROPIETARIOXMASCOTA_H
#define PROPIETARIOXMASCOTA_H

#include "Propietario.h"
#include "Mascota.h"

class PropietarioxMascota{
    private:
        Propietario propietario;
        Mascota mascota;
        double id;
    public:
        PropietarioxMascota();
        PropietarioxMascota(Propietario propietario, Mascota mascota, double id);
        Propietario getPropietario();
        Mascota getMascota();
        double getId();
};

#endif