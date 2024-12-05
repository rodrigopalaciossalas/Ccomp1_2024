#include <iostream>
#include "InterfazBoletas.hpp"

void mostrarMenuBoletas() {
    std::cout << "\nMenu de Boletas:\n";
    std::cout << "1. Mostrar Lista de Boletas\n";
    std::cout << "2. Agregar Boleta\n";
    std::cout << "3. Modificar Boleta\n";
    std::cout << "4. Eliminar Boleta\n";
    std::cout << "5. Volver al menú principal\n";
}

void gestionarBoletas(ListaGenerica& listaBoletas, const char* nombreArchivoBoletas) {
    int subOpcion, id;
    char nuevoDato[256];

    do {
        mostrarMenuBoletas();
        std::cout << "Seleccione una opción: ";
        std::cin >> subOpcion;
        std::cin.ignore();  // Limpiar el buffer de entrada

        switch (subOpcion) {
            case 1:
                // Mostrar lista de Boletas
                std::cout << "\nLista de Boletas:\n";
                listaBoletas.mostrarLista(nombreArchivoBoletas);
                break;

            case 2:
                // Agregar Boleta
                std::cout << "\nIngrese el dato de la nueva boleta (ID,Descripción): ";
                std::cin.getline(nuevoDato, 256);
                listaBoletas.agregarDato(nombreArchivoBoletas, nuevoDato);
                break;

            case 3:
                // Modificar Boleta
                std::cout << "\nIngrese el ID de la boleta a modificar: ";
                std::cin >> id;
                std::cin.ignore();  // Limpiar el buffer de entrada
                std::cout << "Ingrese el nuevo dato para la boleta: ";
                std::cin.getline(nuevoDato, 256);
                listaBoletas.modificarDato(nombreArchivoBoletas, id, nuevoDato);
                break;

            case 4:
                // Eliminar Boleta
                std::cout << "\nIngrese el ID de la boleta a eliminar: ";
                std::cin >> id;
                listaBoletas.borrarPorID(nombreArchivoBoletas, id);
                break;

            case 5:
                // Volver al menú principal
                break;

            default:
                std::cout << "Opción no válida. Intente nuevamente.\n";
                break;
        }
    } while (subOpcion != 5);
}
