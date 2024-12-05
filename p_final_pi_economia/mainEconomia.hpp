#ifndef MAINECONOMIA_HPP
#define MAINECONOMIA_HPP

#include "ListaGenerica.hpp"
#include "InterfazBoletas.hpp"
#include "InterfazFacturas.hpp"

class MainEconomia {
private:
    ListaGenerica listaBoletas;
    ListaGenerica listaFacturas;
    const char* nombreArchivoBoletas;
    const char* nombreArchivoFacturas;

public:
    MainEconomia(const char* archivoBoletas, const char* archivoFacturas);
    void iniciar();  // Método para iniciar la interfaz y manejar el menú
    void gestionarBoletas();
    void gestionarFacturas();

    // Métodos para gestionar boletas y facturas
    void GestionarBoletasS(ListaGenerica& lista, const char* nombreArchivo);
    void GestionarFacturasS(ListaGenerica& lista, const char* nombreArchivo);
};

#endif // MAINECONOMIA_HPP
