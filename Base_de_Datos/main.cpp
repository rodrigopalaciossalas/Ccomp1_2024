#include <iostream>
#include "AbogadoController.hpp"
#include "AbogadoView.hpp"
#include "AbogadoModel.hpp"

int main() {
    Abogado abogado("", "", "", "", 0.0, "", "", 0, 0, 0);  // Inicializar con datos vacíos
    AbogadoView vista;
    AbogadoController controller(&abogado, &vista);

    int opcion = 0;

    do {
        std::cout << "\n=== Menu ===\n";
        std::cout << "1. Ingresar datos obligatorios\n";
        std::cout << "2. Ingresar datos opcionales\n";
        std::cout << "3. Mostrar datos del abogado\n";
        std::cout << "4. Salir\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                controller.ingresarDatosObligatorios();
                break;
            case 2:
                controller.ingresarDatosOpcionales();
                break;
            case 3:
                controller.mostrarDatos();
                std::cout << "ID del Abogado: " << abogado.obtenerID() << std::endl; // Mostrar ID
                break;
            case 4:
                std::cout << "Saliendo..." << std::endl;
                break;
            default:
                std::cout << "Opcion no valida!" << std::endl;
        }
    } while (opcion != 4);

    return 0;
}
