#include "AbogadoModel.hpp"
#include "AbogadoView.hpp"
#include "AbogadoController.hpp"
#include "A_punteros.hpp"
#include <iostream>

int main()
{
    // Crear un objeto A_puntero para gestión de cadenas de caracteres
    A_puntero puntero;

    // Crear un objeto Abogado con algunos datos iniciales
    Abogado abogado("Juan", "Perez", "123456789", "Civil", 3000.0, "Abogado", "juan.perez@gmail.com", 10, 12, 2010);

    // Crear un objeto AbogadoView
    AbogadoView view;

    // Crear un objeto AbogadoController que manejará la lógica entre la vista y el modelo
    AbogadoController controller(&abogado, &view);

    // Mostrar los datos iniciales
    std::cout << "Datos del abogado:\n";
    controller.mostrarDatos();

    // Modificar algunos datos del abogado
    std::cout << "\nModificando algunos datos del abogado...\n";
    controller.ingresarDatosOpcionales();

    // Mostrar los datos actualizados
    std::cout << "\nDatos actualizados del abogado:\n";
    controller.mostrarDatos();

    return 0;
}
