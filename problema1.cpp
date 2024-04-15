#include <iostream>
#include "CuentaCorriente.h"

using namespace std;

int problema1() {
    CuentaCorriente cuenta;
    int opcion;
    double cantidad;
    string nuevo_valor;

    do {
        cout << "**** MENU ****";
        cout << "1. Crear cuenta\n";
        cout << "2. Depositar dinero\n";
        cout << "3. Retirar dinero\n";
        cout << "4. Consultar cuenta\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Ingrese el nombre: ";
            cin >> nuevo_valor;
            cuenta.setNombre(nuevo_valor);

            cout << "Ingrese los apellidos: ";
            cin >> nuevo_valor;
            cuenta.setApellidos(nuevo_valor);

            cout << "Ingrese la direccion: ";
            cin >> nuevo_valor;
            cuenta.setDireccion(nuevo_valor);

            cout << "Ingrese el telefono: ";
            cin >> nuevo_valor;
            cuenta.setTelefono(nuevo_valor);

            cout << "Ingrese el saldo inicial: ";
            cin >> cantidad;
            cuenta.setSaldo(cantidad);
            break;
        case 2:
            cout << "Ingrese la cantidad a depositar: ";
            cin >> cantidad;
            cuenta.ingresarDinero(cantidad);
            break;
        case 3:
            cout << "Ingrese la cantidad a retirar: ";
            cin >> cantidad;
            cuenta.retirarDinero(cantidad);
            break;
        case 4:
            cuenta.consultarCuenta();
            break;
        case 5:
            cout << "Saliendo...\n";
            break;
        default:
            cout << "Opcion invalida. Por favor, intente de nuevo.\n";
            break;
        }
    } while (opcion != 5);

    return 0;
}
