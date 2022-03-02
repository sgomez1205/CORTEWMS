#include "PropietarioxMascota.h"

PropietarioxMascota::PropietarioxMascota()
    : id(0)
{
}

PropietarioxMascota::PropietarioxMascota(Propietario propietario, Mascota mascota, double id){
    this->propietario = propietario;
    this->mascota = mascota;
    this->id = id;
}

Mascota PropietarioxMascota::getMascota(){
    return this->mascota;
}

Propietario PropietarioxMascota::getPropietario(){
    return this->propietario;
}

double PropietarioxMascota::getId(){
    return this->id;
}


