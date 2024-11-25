#ifndef ESTACIONAMIENTO_HPP
#define ESTACIONAMIENTO_HPP

#include "A_punteros.hpp"

class Estacionamiento
{
private:
    char* h_ingreso; 
    char* h_salida;         
    A_puntero puntero;

public:
   
    Estacionamiento(const char* _h_ingreso, const char* _h_salida);

    ~Estacionamiento();

    void setH_ingreso(const char* _h_ingreso);
	
	void setH_salida(const char* _h_salida);
	
    const char* getHsalida() const;
	
    const char* getHingreso() const;

	void visual_fecha();
};

#endif 
