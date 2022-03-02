#include <iostream>
#include "Sistema.h"

using std::cout;
using std::cin;
using std::string; 

void menu(Sistema sistema){
    int opc = 0, x = 0;
    do{
        cout << "\n" << "BIENVENIDOS A LA VETERINARIA W.S.M" << "\n";
        cout << "1. Agregar Info Prop/Masc." << "\n";
        cout << "2. modificar Info Propietario." << "\n";
        cout << "3. Eliminar Info Propietario." << "\n";
        cout << "4. Listar Info Propietarios." << "\n";
        cout << "5. Listar Info Mascotas." << "\n";
        cout << "6. Cantidad Propietarios Registrados." << "\n";
        cout << "7. Consultar Propietarios De Una Mascota." << "\n";
        cout << "8. Consultar Mascotas De Un Propietario." << "\n";
        cout << "9. Asociar Nueva Mascota A Un Propietario." << "\n";
        cout << "10. Asociar Nuevo Propietario A Una Mascota." << "\n";
        cout << "11. Cambiar Estatus De Mascota." << "\n";
        cout << "12. Eliminar Propietario De Una Mascota." << "\n";
        cout << "0.  Salir" << "\n";
        cout << "opc: ";
        cin >> opc;
        cout << "\n";
        switch(opc){
            case 1: cout << "Bienvenido, desea ingresar un propietario (1), mascota (2) o ambos (3): ";
                    cin >> x;
                    if( x == 1 ){
                        sistema.agregarDatosPropietario();
                    }
                    else if( x == 2 ){
                        sistema.agregarDatosMascota();
                    }
                    else if ( x == 3 ){
                        cout << "\nPropietario:\n";
                        sistema.agregarDatosPropietario();
                        cout << "\nMascota:\n";
                        sistema.agregarDatosMascota();
                    }
                    else{
                        cout << "\nError\n";
                    }
                    break;
            case 2: 
                    break;
            case 3: 
                    break;
            case 4: sistema.listarPropietarios();
                    break;
            case 5: sistema.listarMascotas();
                    break;
            case 6: cout << "Hay una cantidad de: " << sistema.contarProp() << " propietarios registrados\n";
                    break;
            case 7: 
                    break;
            case 8: 
                    break;
            case 9:
                    break;
            case 10:
                    break;
            case 11:
                    break;
            case 12:
                    break;
            default: break;
        }
    }while(opc != 0);
}

int main(){
    Sistema sistema;
    menu(sistema);
    return 0;
}

