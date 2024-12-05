#include <iostream>
#include "MainGestion.hpp"  // Incluir el archivo con las funciones

int main() {
    int opcion;

    do {
        mostrarMenu(opcion);  // Mostrar el menú

        switch (opcion) {
            case 1:
                gestionarAbogados();  // Llamar a la gestión de abogados
                break;

            case 2:
                gestionarEconomia();  // Llamar a la gestión de economía
                break;
			case 3:
				gestionarClientes();
				break;	
			
            case 4:
                std::cout << "Saliendo...\n";
                break;

            default:
                std::cout << "Opción no válida. Intente nuevamente.\n";
                break;
        }
    } while (opcion != 3);

    return 0;
}

