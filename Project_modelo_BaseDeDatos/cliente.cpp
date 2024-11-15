#include "cliente.hpp"
#include "A_punteros.hpp"
#include <iostream>



Cliente::Cliente(const char* id, const char* nombre, int edad, const char* dni, const char* telefono, const char* correo, const char* codigo)
    : Persona(nombre, edad, dni, telefono, correo) // Llamada al constructor de Persona
{
    idCliente = nullptr;
    codigoCliente = nullptr;
    puntero.copiarCadena(idCliente, id);
    puntero.copiarCadena(codigoCliente, codigo);
}

Cliente::~Cliente() 
{
    if (idCliente != nullptr) 
    {
        delete[] idCliente;
    }
    if (codigoCliente != nullptr) 
    {
        delete[] codigoCliente;
    }
}

void Cliente::setIDCliente(const char* id) 
{
    puntero.copiarCadena(idCliente, id);
}

const char* Cliente::getIDCliente() const 
{
    return idCliente;
}

void Cliente::setCodigoCliente(const char* codigo) 
{
    puntero.copiarCadena(codigoCliente, codigo);
}

const char* Cliente::getCodigoCliente() const 
{
    return codigoCliente;
}

bool Cliente::esID(const char* id) const 
{
    return puntero.compararCadenas(idCliente, id);
}

void Cliente::entradasCliente() 
{
                char id[50];
                char nombre[100];
                int edad;
                char dni[20];
                char telefono[20];
                char correo[100];
                char codigo[20];

                std::cout << "Ingrese ID del Cliente: ";
                std::cin.getline(id, 50);

                std::cout << "Ingrese Nombre del Cliente: ";
                std::cin.getline(nombre, 100);

                std::cout << "Ingrese Edad del Cliente: ";
                std::cin >> edad;
                std::cin.ignore();

                std::cout << "Ingrese DNI del Cliente: ";
                std::cin.getline(dni, 20);

                std::cout << "Ingrese Teléfono del Cliente: ";
                std::cin.getline(telefono, 20);

                std::cout << "Ingrese Correo del Cliente: ";
                std::cin.getline(correo, 100);

                std::cout << "Ingrese Código del Cliente: ";
                std::cin.getline(codigo, 20);
}
void Cliente::visual_clientes() const 
{
    std::cout << "ID: " << idCliente << "\n";
    std::cout << "Nombre: " << getNombre() << "\n";
    std::cout << "Edad: " << getEdad() << "\n";
    std::cout << "DNI: " << getDni() << "\n";
    std::cout << "Teléfono: " << getTelefono() << "\n";
    std::cout << "Correo: " << getCorreo() << "\n";
    std::cout << "Código: " << codigoCliente << "\n\n";
}

