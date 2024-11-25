#include "AbogadoView.hpp"
#include <iostream>

void AbogadoView::mostrarDatos(Abogado& abogado) 
{
    std::cout << "=== Datos del Abogado ===\n";
    std::cout << "Nombre: " << abogado.getNombre() << "\n";
    std::cout << "Apellido: " << abogado.getApellido() << "\n";
    std::cout << "Telefono: " << abogado.getTelefono() << "\n";
    std::cout << "Especialidad: " << abogado.getEspecialidad() << "\n";
    std::cout << "Salario: " << abogado.getSalario() << "\n";
    std::cout << "Puesto: " << abogado.getPuesto() << "\n";
    std::cout << "Gmail: " << abogado.getGmail() << "\n";

    Fecha fecha = abogado.getFechaContratacion();
    std::cout << "Fecha de contratacion: " << fecha.dia << "/" << fecha.mes << "/" << fecha.anio << "\n";
    std::cout << "=========================\n";
}
void AbogadoView::solicitarEntrada(const char* mensaje, char* entrada, int longitud) 
{
    std::cout << mensaje;
    std::cin.getline(entrada, longitud);

    entrada[longitud - 1] = '\0';

}


int AbogadoView::solicitarInt(const char* mensaje)
 {
    int valor;
    std::cout << mensaje;
    std::cin >> valor;
    return valor;
}

int AbogadoView::solicitarFecha(const char* mensaje) 
{
    return solicitarInt(mensaje); 
}
