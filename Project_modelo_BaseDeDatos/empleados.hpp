#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include "persona.hpp"
#include "A_punteros.hpp"

class Empleado : public Persona 
{
private:
    char* idEmpleado; 
    char* puesto;     
    float salario;    
    A_puntero puntero;

public:
    // Constructor de Empleado que llama al constructor de Persona
    Empleado(const char* id, const char* nombre, int edad, const char* dni, const char* telefono, const char* correo, const char* puesto, float salario);

    // Destructor
    ~Empleado();

    // Setters y Getters
    void setIDEmpleado(const char* id);
    const char* getIDEmpleado() const;
    void setPuesto(const char* puesto);
    const char* getPuesto() const;
    void setSalario(float salario);
    float getSalario() const;

    // Método para verificar si el ID coincide
    bool esID(const char* id) const;

    // Función para interactuar con empleados (agregar, listar, buscar)
    void visual_empleados() const;

    // Entrada interactiva de datos para empleados
    void entradasEmpleado();
};

#endif // EMPLEADO_HPP
