#include "LecturaProblema3.h"
#include <iostream>
#include <fstream>
#include <string>

LecturaProblema3::LecturaProblema3() {}

void LecturaProblema3::mostrar_resultados() {
    std::string Arch_1;
    std::cout << "Ingrese la ruta del archivo de texto: ";
    std::cin >> Arch_1;

    std::ifstream archivo_x(Arch_1.c_str(), std::ios::in);
    if (archivo_x.fail()) {
        std::cout << "No se puede abrir el archivo" << std::endl;
        exit(1);
    }

    std::string rutaResultado;
    std::cout << "Ingrese la ruta y nombre del archivo para guardar los resultados: ";
    std::cin >> rutaResultado;

    std::ofstream archivo_salida(rutaResultado);
    if (!archivo_salida.is_open()) {
        std::cout << "No se puede abrir el archivo de salida" << std::endl;
        exit(1);
    }

    std::string texto;
    std::string linea;
    while (getline(archivo_x, linea)) {
        texto = texto + linea;
    }

    int num_caracter = 0;
    char caracter;
    std::cout << "Ingrese el caracter a buscar: ";
    std::cin >> caracter;

    size_t pos = texto.find(caracter);
    while (pos != std::string::npos) {
        num_caracter++;
        pos = texto.find(caracter, pos + 1);
    }

    std::string secu;
    std::cout << "Ingrese la secuencia a buscar: ";
    std::cin >> secu;

    int num_secu = 0;
    pos = texto.find(secu);
    while (pos != std::string::npos) {
        num_secu++;
        pos = texto.find(secu, pos + 1);
    }

    archivo_salida << "El caracter \'" << caracter << "\' se repite " << num_caracter << " veces en el texto." << std::endl;
    archivo_salida << "La secuencia \"" << secu << "\" se repite " << num_secu << " veces en el texto." << std::endl;

    archivo_x.close();
    archivo_salida.close();
}
