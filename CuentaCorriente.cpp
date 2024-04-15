#include "CuentaCorriente.h"
#include <iostream>
using namespace std;

CuentaCorriente::CuentaCorriente()
    : nombre(""), apellidos(""), direccion(""), telefono(""), saldo(0.0) {}

    // Constructor con todos los argumentos
    CuentaCorriente::CuentaCorriente(string nombre, string apellidos, string direccion, string telefono, double saldo)
        : nombre(nombre), apellidos(apellidos), direccion(direccion), telefono(telefono), saldo(saldo) {}

    // Métodos get y set para las propiedades
    void CuentaCorriente::setNombre(string nombre) { this->nombre = nombre; }
    string CuentaCorriente::getNombre() { return nombre; }

    void CuentaCorriente::setApellidos(string apellidos) { this->apellidos = apellidos; }
    string CuentaCorriente::getApellidos() { return apellidos; }

    void CuentaCorriente::setDireccion(string direccion) { this->direccion = direccion; }
    string CuentaCorriente::getDireccion() { return direccion; }

    void CuentaCorriente::setTelefono(string telefono) { this->telefono = telefono; }
    string CuentaCorriente::getTelefono() { return telefono; }

    void CuentaCorriente::setSaldo(double saldo) { this->saldo = saldo; }
    double CuentaCorriente::getSaldo() { return saldo; }

    // Métodos para interactuar con el saldo
    void CuentaCorriente::retirarDinero(double cantidad) {
        if (cantidad <= saldo) {
            saldo -= cantidad;
        } else {
            cout << "Saldo insuficiente.\n";
        }
    }

    void CuentaCorriente::ingresarDinero(double cantidad) {
        saldo += cantidad;
    }

    // Método para visualizar los datos de la cuenta
    void CuentaCorriente::consultarCuenta() {
        cout << "Nombre: " << nombre << "\n";
        cout << "Apellidos: " << apellidos << "\n";
        cout << "Dirección: " << direccion << "\n";
        cout << "Teléfono: " << telefono << "\n";
        cout << "Saldo: " << saldo << "\n";
    }

    // Método para verificar si la cuenta está en números rojos
    bool CuentaCorriente::saldoNegativo() {
        return saldo < 0;
    }
