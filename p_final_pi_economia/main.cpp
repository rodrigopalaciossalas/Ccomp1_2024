
#include <iostream>
#include "mainEconomia.hpp"

int main() {
    // Crear una instancia de MainEconomia con los nombres de archivo para Boletas y Facturas
    const char* archivoBoletas = "boletas.txt";
    const char* archivoFacturas = "facturas.txt";

    // Crear un objeto de la clase MainEconomia
    MainEconomia mainEconomia(archivoBoletas, archivoFacturas);

    // Llamar al método iniciar para comenzar la gestión
    mainEconomia.iniciar();

    return 0;
}