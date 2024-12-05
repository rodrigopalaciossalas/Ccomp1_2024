#include "MainEconomia.hpp"
#include "InterfazBoletas.hpp"
#include "InterfazFacturas.hpp"
#include <iostream>

// Implementación del constructor
MainEconomia::MainEconomia(const char* archivoBoletas, const char* archivoFacturas)
    : nombreArchivoBoletas(archivoBoletas), nombreArchivoFacturas(archivoFacturas) {}

// Implementación del método iniciar que maneja el menú
void MainEconomia::iniciar() {
    int opcion;

    do {
        std::cout << "\nMenu Principal:\n";
        std::cout << "1. Boletas\n";
        std::cout << "2. Facturas\n";
        std::cout << "3. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;
        std::cin.ignore();  // Limpiar el buffer de entrada

        switch (opcion) {
            case 1:
                gestionarBoletas();  // Invoca la función que gestiona boletas
                break;

            case 2:
                gestionarFacturas();  // Invoca la función que gestiona facturas
                break;

            case 3:
                std::cout << "Saliendo...\n";
                break;

            default:
                std::cout << "Opción no válida. Intente nuevamente.\n";
                break;
        }
    } while (opcion != 3);
}

// Implementación de la gestión de boletas
void MainEconomia::gestionarBoletas() {
    GestionarBoletasS(listaBoletas, nombreArchivoBoletas); 
}

// Implementación de la gestión de facturas
void MainEconomia::gestionarFacturas() {
    GestionarFacturasS(listaFacturas, nombreArchivoFacturas); 
}

// Implementación del método de gestión de boletas
void MainEconomia::GestionarBoletasS(ListaGenerica& lista, const char* nombreArchivo) {
    // Lógica para gestionar boletas
    std::cout << "Gestionando Boletas desde el archivo " << nombreArchivo << std::endl;
}

// Implementación del método de gestión de facturas
void MainEconomia::GestionarFacturasS(ListaGenerica& lista, const char* nombreArchivo) {
    // Lógica para gestionar facturas
    std::cout << "Gestionando Facturas desde el archivo " << nombreArchivo << std::endl;
}
