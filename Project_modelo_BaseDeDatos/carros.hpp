#ifndef ESTACIONAMIENTO_HPP
#define 	ESTACIONAMIENTO_HPP
#include "A_punteros.hpp"
class Carros 
{
private:
    char* modelo;
    char* placa;
    char* marca;
    A_puntero puntero;
    
public:
    Carros(const char* _modelo, const char* _placa, const char* _marca);
    
    ~Carros();

    void setNombre(const char* _modelo);
    void setTelefono(const char* _placa);
    void setCorreo(const char* _marca);
    
    const char* getModelo() const; 
    const char* getPlaca() const;
    const char* getMarca() const;
	bool esplaca(const char* placa) const; 

};

#endif // PERSONA_HPP
