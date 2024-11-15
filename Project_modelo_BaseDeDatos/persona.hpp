#ifndef PERSONA_HPP
#define PERSONA_HPP
#include "A_punteros.hpp"
class Persona 
{
private:
    char* nombre;
    int edad;
    char* dni;
    char* telefono;
    char* correo;
    A_puntero puntero;
    
public:
    Persona(const char* _nombre, int _edad, const char* _dni, const char* _telefono, const char* _correo);
    
    ~Persona();

    void setNombre(const char* _nombre);
    void setEdad(int _edad);
    void setDni(const char* _dni);
    void setTelefono(const char* _telefono);
    void setCorreo(const char* _correo);
    
    const char* getNombre() const;
    const char* getDni() const;
    int getEdad() const;
    const char* getTelefono() const;
    const char* getCorreo() const;

};

#endif // PERSONA_HPP
