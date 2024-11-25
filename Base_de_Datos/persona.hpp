#ifndef PERSONA_HPP
#define PERSONA_HPP
#include <iostream>
#include "A_punteros.hpp"

class Persona {
	
	private:
		char* nombres;
		char* apellidos;
		char* telefono;
		char* correo;
		int edad;
		A_puntero puntero;
		
	protected:
	
		const char* getNombres() const;
		const char* getApellidos() const;
		const char* getTelefono() const;
		const char* getCorreo() const;
		
		void setNombres(const char* _nombres);
		void setApellidos (const char* _apellidos);
		void setTelefono(const char* _telefono);
		void setCorreo(const char* _correo);
		
		void ingresarEdad( );
	
	public:
		Persona( const char* _nombres, const char* _apellidos, const char* _telefono, const char* _correo, const int edad);
		~Persona();
		
		void registrarPersona();
		void mostrarDatosPersona() const;
		
		
};

#endif 