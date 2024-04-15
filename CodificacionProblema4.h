#ifndef CODIFICACIONPROBLEMA4_H
#define CODIFICACIONPROBLEMA4_H
#include <unordered_map>
#include <string>
using namespace std;


class CodificacionProblema4 {
public:
    void cargarCodigoPropio(unordered_map<char, char> codigo);
    void cargarCodigoDesdeDocumento(string rutaArchivoCodigo);
    void codificarMensaje(string rutaArchivoOrigen, string rutaArchivoDestino);
    void decodificarMensaje(string rutaArchivoOrigen, string rutaArchivoDestino);
private:
    char codificarLetra(char letra);
    char decodificarLetra(char letra);
    unordered_map<char, char> codigoPropio;
    string codigoDocumento;
};

#endif // CODIFICACIONPROBLEMA4_H
