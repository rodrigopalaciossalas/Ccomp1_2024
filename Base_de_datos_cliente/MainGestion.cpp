#ifdef _WIN32
    #include <windows.h>
    #define CLEAR_COMMAND "cls"
#elif defined(__APPLE__) || defined(__MACH__) || defined(__linux__)
    #include <unistd.h>
    #include <termios.h>
    #define CLEAR_COMMAND "clear"
#endif

#include <iostream>
#include "MainGestion.hpp"  // Incluir el archivo con las funciones

void mostrarMenu(int &opcion) {
    std::cout << "\nMenu Principal de Gestion:\n";
    std::cout << "1. Gestion de Abogados\n";
    std::cout << "2. Gestion de Economía (Boletas y Facturas)\n";
	std::cout << "3. Gestion de Clientes\n";
    std::cout << "4. Salir\n";
    std::cout << "Seleccione una opción: ";
    std::cin >> opcion;
    std::cin.ignore();  // Limpiar el buffer de entrada
}

void gestionarAbogados() {
    AbogadoModel modelo;
    AbogadoView vista;
    AbogadoController controlador(&modelo, &vista);

    controlador.iniciar();  // Inicia la gestión de abogados
}

// Función para gestionar Economía (Boletas y Facturas)
void gestionarEconomia() {
    // Crear una instancia de MainEconomia con los nombres de archivo para Boletas y Facturas
    const char* archivoBoletas = "boletas.txt";
    const char* archivoFacturas = "facturas.txt";

    // Crear un objeto de la clase MainEconomia
    MainEconomia mainEconomia(archivoBoletas, archivoFacturas);

    // Llamar al método iniciar para comenzar la gestión de economía
    mainEconomia.iniciar();
}
/*
void gestionarClientes() {
    const char* nombreArchivo = "clientes.txt"; // Nombre del archivo donde se guardarán los clientes
    Clientes mainClientes(clientes.txt);
}
*/