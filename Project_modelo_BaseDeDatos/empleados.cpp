#include "empleados.hpp"
#include <iostream>

Empleado::Empleado(const char* id, const char* nombre, int edad, const char* dni, const char* telefono, const char* correo, const char* puesto, float salario)
    : Persona(nombre, edad, dni, telefono, correo) 
{
    idEmpleado = nullptr;
    this->puesto = nullptr;
    puntero.copiarCadena(idEmpleado, id);
    puntero.copiarCadena(this->puesto, puesto);
    this->salario = salario;
}

Empleado::~Empleado() 
{
    if (idEmpleado != nullptr) 
    {
        delete[] idEmpleado;
    }
    if (puesto != nullptr) 
    {
        delete[] puesto;
    }
}

void Empleado::setIDEmpleado(const char* id) 
{
    if (idEmpleado != nullptr) 
    {
        delete[] idEmpleado;
    }
    puntero.copiarCadena(idEmpleado, id);
}

void Empleado::setPuesto(const char* puesto) 
{
    if (this->puesto != nullptr) 
    {
        delete[] this->puesto;
    }
    puntero.copiarCadena(this->puesto, puesto);
}

void Empleado::setSalario(float salario) 
{
    if (salario < 0) 
    {
        std::cerr << "Error: El salario no puede ser negativo.\n";
        return;
    }
    this->salario = salario;
}

const char* Empleado::getIDEmpleado() const 
{
    return idEmpleado;
}

const char* Empleado::getPuesto() const 
{
    return puesto;
}

float Empleado::getSalario() const 
{
    return salario;
}

bool Empleado::esID(const char* id) const 
{
    return puntero.compararCadenas(idEmpleado, id);
}

void Empleado::visual_empleados() const 
{
    std::cout << "ID: " << idEmpleado << "\n";
    std::cout << "Nombre: " << getNombre() << "\n";
    std::cout << "Edad: " << getEdad() << "\n";
    std::cout << "DNI: " << getDni() << "\n";
    std::cout << "Teléfono: " << getTelefono() << "\n";
    std::cout << "Correo: " << getCorreo() << "\n";
    std::cout << "Puesto: " << puesto << "\n";
    std::cout << "Salario: " << salario << "\n\n";
}

void Empleado::entradasEmpleado() 
{
    char id[50];
    char nombre[100];
    int edad;
    char dni[20];
    char telefono[20];
    char correo[100];
    char puesto[50];
    float salario;

    std::cout << "Ingrese ID del Empleado: ";
    std::cin.getline(id, 50);

    std::cout << "Ingrese Nombre del Empleado: ";
    std::cin.getline(nombre, 100);

    std::cout << "Ingrese Edad del Empleado: ";
    std::cin >> edad;
    if (edad <= 0) 
    {
        std::cerr << "Error: La edad debe ser mayor a 0.\n";
        return;
    }
    std::cin.ignore();

    std::cout << "Ingrese DNI del Empleado: ";
    std::cin.getline(dni, 20);

    std::cout << "Ingrese Teléfono del Empleado: ";
    std::cin.getline(telefono, 20);

    std::cout << "Ingrese Correo del Empleado: ";
    std::cin.getline(correo, 100);

    std::cout << "Ingrese Puesto del Empleado: ";
    std::cin.getline(puesto, 50);

    std::cout << "Ingrese Salario del Empleado: ";
    std::cin >> salario;
    if (salario < 0) 
    {
        std::cerr << "Error: El salario no puede ser negativo.\n";
        return;
    }
    std::cin.ignore();

    setIDEmpleado(id);
    setNombre(nombre);
    setEdad(edad);
    setDni(dni);
    setTelefono(telefono);
    setCorreo(correo);
    setPuesto(puesto);
    setSalario(salario);
}
