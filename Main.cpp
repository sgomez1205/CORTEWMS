#include <iostream>
#include "Sistema.h"

using std::cout;
using std::cin;
using std::string; 

void menu(Sistema sistema){
    int opc=0;
    do{
        cout << "\n" << "BIENVENIDOS A LA VETERINARIA W.S.M" << "\n";
        cout << "1.  Agregar Info Propietario." << "\n";
        cout << "2.  modificar Info Propietario." << "\n";
        cout << "3.  Eliminar Info Propietario." << "\n";
        cout << "4.  Listar Info Propietarios." << "\n";
        cout << "5.  Cantidad Propietarios Registrados." << "\n";
        cout << "6.  Mostrar Datos Todos Los Propietarios" << "\n";
        cout << "7.  Mostrar Datos Todas Las Mascotas." << "\n";
        cout << "8.  Consultar Propietarios De Una Mascota." << "\n";
        cout << "9.  Consultar Mascotas De Un Propietario." << "\n";
        cout << "10. Asociar Nueva Mascota A Un Propietario." << "\n";
        cout << "11. Asociar Nuevo Propietario A Una Mascota." << "\n";
        cout << "12. Cambiar Estatus De Mascota." << "\n";
        cout << "13. Eliminar Propietario De Una Mascota." << "\n";
        cout << "0.  Salir" << "\n";
        cout << "opc: ";
        cin >> opc;
        cout << "\n";
        switch(opc){
            case 1: sistema.agregarDatosPropietario();
                    sistema.mostrarPropietarios();

                    break;
            case 2: sistema.combinarId(1234, 56789 );
                    break;
            case 3: 
                    break;
            case 4: 
                    break;
            case 5: 
                    break;
            case 6: 
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
            case 13:
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

