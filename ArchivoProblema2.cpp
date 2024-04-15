#include "ArchivoProblema2.h"
#include<fstream>
#include<string>
#include<iostream>
using namespace std;

ArchivoProblema2::ArchivoProblema2(){

}

void ArchivoProblema2::leerArchivo(string ubicacion) {
    ifstream archivo(ubicacion);
    if (archivo.is_open()) {
        string linea;
        while (getline(archivo, linea)) {
            cout << linea << '\n';
        }
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo para leer.\n";
    }
}



void ArchivoProblema2::escribirArchivo(string ubicacion) {
    ofstream archivo(ubicacion, ios::app);
    if (archivo.is_open()) {
        string texto;
        char opcion;
        do {
            cout << "Ingrese el texto a guardar: ";
            getline(cin, texto);
            archivo << texto << endl;
            cout << "¿Desea escribir mas texto en el archivo? (s/n): ";
            cin >> opcion;
            cin.ignore();
        } while (opcion == 's' || opcion == 'S');
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo para escribir.\n";
    }
}
