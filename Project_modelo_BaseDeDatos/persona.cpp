#include "persona.hpp"
#include <iostream>

Persona::Persona(const char* _nombre, int _edad, const char* _dni, const char* _telefono, const char* _correo)
    : edad(_edad)
{
    nombre = nullptr;
    dni = nullptr;
    telefono = nullptr;
    correo = nullptr;

    puntero.copiarCadena(nombre, _nombre);
    puntero.copiarCadena(dni, _dni);
    puntero.copiarCadena(telefono, _telefono);
    puntero.copiarCadena(correo, _correo);
}

Persona::~Persona() 
{
    if (nombre != nullptr)
    {
        delete[] nombre;
    }
    if (dni != nullptr)
    {
        delete[] dni;
    }
    if (telefono != nullptr)
    {
        delete[] telefono;
    }
    if (correo != nullptr)
    {
        delete[] correo;
    }
}

void Persona::setNombre(const char* _nombre) 
{ 
    puntero.copiarCadena(nombre, _nombre); 
}
void Persona::setEdad(int _edad) 
{ 
    edad = _edad; 
}
void Persona::setDni(const char* _dni) 
{ 
    puntero.copiarCadena(dni, _dni); 
}
void Persona::setTelefono(const char* _telefono) 
{ 
    puntero.copiarCadena(telefono, _telefono); 
}
void Persona::setCorreo(const char* _correo) 
{ 
    puntero.copiarCadena(correo, _correo); 
}

const char* Persona::getNombre() const 
{ 
    return nombre; 
}
const char* Persona::getDni() const 
{ 
    return dni; 
}
int Persona::getEdad() const 
{ 
    return edad; 
}
const char* Persona::getTelefono() const 
{ 
    return telefono; 
}
const char* Persona::getCorreo() const 
{ 
    return correo; 
}
