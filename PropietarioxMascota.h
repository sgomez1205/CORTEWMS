#ifndef PROPIETARIOXMASCOTA_H
#define PROPIETARIOXMASCOTA_H

#include "Propietario.h"
#include "Mascota.h"

class PropietarioxMascota{
    private:
        Propietario propietario;
        Mascota mascota;
    public:
        PropietarioxMascota();
        PropietarioxMascota(Propietario propietario, Mascota mascota);
        
        Propietario getPropietario();
        Mascota getMascota();
};

#endif