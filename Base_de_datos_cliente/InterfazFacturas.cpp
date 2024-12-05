#include <iostream>
#include "InterfazFacturas.hpp"

void mostrarMenuFacturas() {
    std::cout << "\nMenu de Facturas:\n";
    std::cout << "1. Mostrar Lista de Facturas\n";
    std::cout << "2. Agregar Factura\n";
    std::cout << "3. Modificar Factura\n";
    std::cout << "4. Eliminar Factura\n";
    std::cout << "5. Volver al menú principal\n";
}

void gestionarFacturas(ListaGenerica& listaFacturas, const char* nombreArchivoFacturas) {
    int subOpcion, id;
    char nuevoDato[256];

    do {
        mostrarMenuFacturas();
        std::cout << "Seleccione una opción: ";
        std::cin >> subOpcion;
        std::cin.ignore();  // Limpiar el buffer de entrada

        switch (subOpcion) {
            case 1:
                // Mostrar lista de Facturas
                std::cout << "\nLista de Facturas:\n";
                listaFacturas.mostrarLista(nombreArchivoFacturas);
                break;

            case 2:
                // Agregar Factura
                std::cout << "\nIngrese el dato de la nueva factura (ID,Descripción): ";
                std::cin.getline(nuevoDato, 256);
                listaFacturas.agregarDato(nombreArchivoFacturas, nuevoDato);
                break;

            case 3:
                // Modificar Factura
                std::cout << "\nIngrese el ID de la factura a modificar: ";
                std::cin >> id;
                std::cin.ignore();  // Limpiar el buffer de entrada
                std::cout << "Ingrese el nuevo dato para la factura: ";
                std::cin.getline(nuevoDato, 256);
                listaFacturas.modificarDato(nombreArchivoFacturas, id, nuevoDato);
                break;

            case 4:
                // Eliminar Factura
                std::cout << "\nIngrese el ID de la factura a eliminar: ";
                std::cin >> id;
                listaFacturas.borrarPorID(nombreArchivoFacturas, id);
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
