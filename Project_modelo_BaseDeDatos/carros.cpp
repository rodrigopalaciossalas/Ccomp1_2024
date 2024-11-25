#include "carros.hpp"
#include <iostream>

Carros::Carros(const char* _modelo, int _edad, const char* _dni, const char* _placa, const char* _marca)
{
    modelo = nullptr;
    placa = nullptr;
    marca = nullptr;

    puntero.copiarCadena(modelo, _modelo);
    puntero.copiarCadena(placa, _placa);
    puntero.copiarCadena(marca, _marca);
}

Carros::~Carros() 
{
    if (modelo != nullptr)
    {
        delete[] modelo;
    }
    if (placa != nullptr)
    {
        delete[] placa;
    }
    if (marca != nullptr)
    {
        delete[] marca;
    }
}

void Carros::setModelos(const char* _modelo) 
{ 
	if (modelo != nullptr) 
    {
        delete[] modelo;
    }
    puntero.copiarCadena(modelo, _modelo); 
}

void Carros::setPlaca(const char* _placa) 
{ 
	if (placa != nullptr) 
    {
        delete[] placa;
    }
    puntero.copiarCadena(placa, _placa); 
}
void Carros::setMarca(const char* _marca) 
{ 
	if (marca != nullptr) 
    {
        delete[] marca;
    }
    puntero.copiarCadena(marca, _marca); 
    puntero.copiarCadena(marca, _marca); 
}

const char* Carros::getModelo() const 
{ 
    return modelo; 
}

const char* Carros::getPlaca() const 
{ 
    return placa; 
}
const char* Carros::getMarca() const 
{ 
    return marca; 
}

bool Carros::esplaca(const char* placa) const 
{
    return puntero.compararCadenas(_placa, placa);
}


void Carros::visual_carros() const 
{
    std::cout << "placa: " << placa << "\n";
    std::cout << "modelo: " << getmodelo() << "\n";
    std::cout << "marca: " << getmarca() << "\n";
	
}




