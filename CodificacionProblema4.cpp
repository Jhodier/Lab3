#include "CodificacionProblema4.h"
#include <fstream>
#include <iostream>

using namespace std;


void CodificacionProblema4::cargarCodigoPropio(unordered_map<char, char> codigo) {
    codigoPropio = codigo;
}

void CodificacionProblema4::cargarCodigoDesdeDocumento(string rutaArchivoCodigo) {
    ifstream archivoCodigo(rutaArchivoCodigo);
    char clave, valor;
    while (archivoCodigo >> clave >> valor) {
        codigoPropio[clave] = valor;
    }
    archivoCodigo.close();
}

void CodificacionProblema4::codificarMensaje(string rutaArchivoOrigen, std::string rutaArchivoDestino) {
    ifstream archivoOrigen(rutaArchivoOrigen);
    ofstream archivoDestino(rutaArchivoDestino);
    char letra;
    while (archivoOrigen.get(letra)) {
        archivoDestino << codificarLetra(letra);
    }
    archivoOrigen.close();
    archivoDestino.close();
}

void CodificacionProblema4::decodificarMensaje(string rutaArchivoOrigen, std::string rutaArchivoDestino) {
    ifstream archivoOrigen(rutaArchivoOrigen);
    ofstream archivoDestino(rutaArchivoDestino);
    char letra;
    while (archivoOrigen.get(letra)) {
        archivoDestino << decodificarLetra(letra);
    }
    archivoOrigen.close();
    archivoDestino.close();
}

char CodificacionProblema4::codificarLetra(char letra) {
    if (codigoPropio.find(letra) != codigoPropio.end()) {
        return codigoPropio[letra];
    }
    return letra;
}

char CodificacionProblema4::decodificarLetra(char letra) {
    for (auto& par : codigoPropio) {
        if (par.second == letra) {
            return par.first;
        }
    }
    return letra;
}
