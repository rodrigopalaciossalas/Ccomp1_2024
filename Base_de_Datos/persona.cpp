#include "persona.hpp"
#include <iostream>
#include "A_punteros.hpp"

Persona::Persona(const char* _nombres, const char* _apellidos, const char* _telefono, const char* _correo, const int edad) 
: edad(edad){
	nombres = nullptr;
	apellidos = nullptr;
	telefono = nullptr;
	correo= nullptr;
		
	puntero.copiarCadena( nombres, _nombres ); 
	puntero.copiarCadena( apellidos, _apellidos ); 
	puntero.copiarCadena( telefono, _telefono );
	puntero.copiarCadena( correo, _correo );
}

Persona::~Persona(){
	if (nombres != nullptr){
		delete[] nombres;
	}
	if (apellidos != nullptr){
		delete[] apellidos;
	}
	if (telefono != nullptr){
		delete[] apellidos;
	}
	if (correo != nullptr){
		delete[] correo;
	}
}

//Métodos Protegidos

void Persona::setNombres(const char* _nombres) 
{ 
    puntero.copiarCadena(nombres, _nombres); 
}

void Persona::setApellidos(const char* _apellidos) 
{ 
    puntero.copiarCadena(apellidos, _apellidos); 
}

void Persona::setTelefono(const char* _telefono) 
{ 
    puntero.copiarCadena(telefono, _telefono); 
}

void Persona::setCorreo(const char* _correo) 
{ 
    puntero.copiarCadena(correo, _correo); 
}



const char* Persona::getNombres() const {
    return nombres;
}

const char* Persona::getApellidos() const {
    return apellidos;
}

const char* Persona::getTelefono() const {
    return telefono;
}

const char* Persona::getCorreo() const {
    return correo;
}

void Persona::ingresarEdad()
{
	std::cout<<"Ingrese su edad: ";
	std::cin>>edad;
}

//Método público

void Persona::registrarPersona ()[
    char nombres[100];
    char apellidos[100];
    char telefono[100];
	char correo[100];

    std::cout << "Ingrese el nombre del cliente: ";
    std::cin.ignore(); 
    std::cin.getline(nombres, 100);
	
	std::cout << "Ingrese los apellidos del cliente: ";
    std::cin.getline(apellidos, 100);

    std::cout << "Ingrese el telefono del cliente: ";
    std::cin.getline(telefono, 100);

    std::cout << "Ingrese el correo del cliente: ";
    std::cin.getline(correo, 100);
	
	
}

void Persona::mostrarDatosPersona() const {
    std::cout << "Nombres: " << nombres 
	<< "\nApellidos: " << apellidos
	<<"\nTelefono: "<< telefono
	<<"\nCorreo: "<<correo
	<<"\nEdad: "<< edad<< std::endl;
}