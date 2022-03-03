#include <iostream>
#include "Sistema.h"

using std::cout;
using std::cin;
using std::string; 

void menu(Sistema sistema){
    int opc = 0, x = 0, idProp = 0, idMasc = 0;
    string fecha = "dd/mm/aaaa";
    do{
        cout << "\n" << "BIENVENIDOS A LA VETERINARIA W.S.M\n";
        cout << "1. Agregar Info Prop/Masc.\n";
        cout << "2. Modificar Info Propietario.\n";
        cout << "3. Eliminar Info Propietario.\n";
        cout << "4. Listar Info Propietarios.\n";
        cout << "5. Listar Info Mascotas.\n";
        cout << "6. Cantidad Propietarios Registrados.\n";
        cout << "7. Consultar Propietarios De Una Mascota.\n";
        cout << "8. Consultar Mascotas De Un Propietario.\n";
        cout << "9. Asociar Nueva Mascota A Un Propietario.\n";
        cout << "10. Asociar Nuevo Propietario A Una Mascota.\n";
        cout << "11. Cambiar Estatus De Mascota.\n";
        cout << "12. Eliminar Propietario De Una Mascota.\n";
        cout << "0. Salir\n";
        cout << "opc: ";
        x = 0;
        cin >> opc;
        cout << "\n";
        switch(opc){
            case 1: cout << "Bienvenido!\nIngresar Un...\n(1)Propietario\n(2)mascota\n(3)Ambos\n:";
                    cin >> x;
                    if( x == 1 ){
                        sistema.agregarDatosPropietario();
                    }
                    else if( x == 2 ){
                        sistema.agregarDatosMascota();
                    }
                    else if ( x == 3 ){
                        cout << "\n**Propietario**\n";
                        sistema.agregarDatosPropietario();
                        cout << "\n**Mascota**\n";
                        sistema.agregarDatosMascota();
                    }
                    else{
                        cout << "\nError\n";
                    }
                    break;
            case 2: cout << "\nBienvenido!\nID Usuario A Modificar: ";
                    cin >> idProp;
                    cout << "\nQue Desea Modificar:\n(1)Email\n(2)Telefono";
                    cin >> x;
                    sistema.modificarPropietario(idProp, x);
                    break;
            case 3: cout << "\nBienvenido!\nID Usuario A Eliminar: ";
                    cin >> idProp;
                    sistema.eliminarPropietario(idProp);
                    break;
            case 4: sistema.listarPropietarios();
                    break;
            case 5: sistema.listarMascotas();
                    break;
            case 6: cout << "Hay una cantidad de: " << sistema.contarProp() << " propietarios registrados\n";
                    break;
            case 7: cout << "ID De Mascota: ";
                    cin >> idMasc;
                    sistema.consultarPropietariosDeMascota(idMasc);   //REVISAR Y PROBAR
                    break;
            case 8: cout << "ID De Propietario: ";
                    cin >> idProp;
                    sistema.consultarMascotasDepropietario(idProp);    //REVISAR Y PROBAR
                    break;
            case 9:
                    break;
            case 10:
                    break;
            case 11:cout << "\nBienvenido!\nID Mascota: ";
                    cin >> idMasc;
                    cout << "Ingrese Fecha De Defuncion(dd/mm/aaaa): ";
                    cin >> fecha;
                    sistema.cambiarEstatus(idMasc, fecha);
                    break;
            case 12:
                    break;
            default: break;
        }
    }while(opc != 0);
    cout << "Muchas Gracias Por Usar Nuestro Sistema, Hasta Pronto\n";
}

int main(){
    Sistema sistema;
    menu(sistema);
    return 0;
}

