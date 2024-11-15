#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include "persona.hpp"
#include "A_punteros.hpp"

class Cliente : public Persona 
{
private:
    char* idCliente; // Atributo para almacenar el ID del cliente (ingresado manualmente)
    char* codigoCliente;
    A_puntero puntero;

public:
    // Constructor de Cliente que llama al constructor de Persona
    Cliente(const char* id, const char* nombre, int edad, const char* dni, const char* telefono, const char* correo, const char* codigo);

    // Destructor
    ~Cliente();

    // Setters y Getters
    void setIDCliente(const char* id);
    const char* getIDCliente() const;
    void setCodigoCliente(const char* codigo);
    const char* getCodigoCliente() const;
    void visual_clientes() const;
    // Método para verificar si el ID coincide
    bool esID(const char* id) const;
    void entradasCliente();

};

#endif // CLIENTE_HPP
