#include "Estacionamiento.hpp"
#include "carros.hpp"
#include <iostream>

Estacionamiento::Estacionamiento(const char* _h_ingreso, const char* _h_salida) 
{
    h_ingreso = nullptr;
    h_salida = nullptr;
    puntero.copiarCadena(h_ingreso, _h_ingreso);
    puntero.copiarCadena(h_salida, _h_salida);

}

Estacionamiento::~Estacionamiento() 
{
    if (h_ingreso != nullptr) 
    {
        delete[] h_ingreso;
    }
    if (h_salida != nullptr) 
    {
        delete[] h_salida;
    }
}

void Estacionamiento::setH_ingreso(const char* _h_ingreso) 
{
    if (h_ingreso != nullptr) 
    {
        delete[] h_ingreso;
    }
    puntero.copiarCadena(h_ingreso, _h_ingreso);
}

void Estacionamiento::setH_salida(const char* _h_salida) 
{
    if (h_salida != nullptr) 
    {
        delete[] h_salida;
    }
    puntero.copiarCadena(h_salida, _h_salida);
}
const char* Estacionamiento::getHsalida() const
{
		return h_salida;
}
const char* Estacionamiento::getHingreso() const
{
		return h_ingreso;
}

void Estacionamiento::visual_fecha() 
{

    std::cout << "fecha de entrada: " << getHingreso() << "\n";
    std::cout << "fecha de salida: " << getHsalida() << "\n";
    
}











