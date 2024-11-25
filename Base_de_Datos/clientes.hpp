#ifndef CLIENTES_HPP
#define CLIENTES_HPP
#include <iostream>
#include <fstream>
#include "A_punteros.hpp"
#include "persona.hpp"

class Clientes : public Persona{
	private:
		char* direccion;
		char* profesion;
		A_puntero puntero;
		
	public:
		Clientes( const char* _nombres, const char* _apellidos, const char* _telefono, const char* _correo, const int edad,
					const char* _direccion, const char* _profesion);
		~Clientes();
		
		
		const char* getDireccion() const;
		const char* getProfesion() const;
		
		void setDireccion(const char* _nombre);
		void setProfesion(const char* _numero);
		
		
		void registrarCliente(std::ofstream &archivo);
		void mostrarCliente() const;
		void guardarEnArchivo(std::ofstream &archivo) const;
		static void mostrarClientes(const char* nombreArchivo);
		
	
};


#endif 