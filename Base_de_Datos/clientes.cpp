#include "clientes.hpp"
#include <iostream>
#include <fstream>
#include "A_punteros.hpp"

//Constructor 

Clientes::Clientes( const char* _nombres, const char* _apellidos, const char* _telefono, const char* _correo, const int edad,
			const char* _direccion, const char* _profesion): Persona (_nombres, _apellidos, _telefono, _correo, edad){
				direccion = nullptr;
				profesion = nullptr;
				
				puntero.copiarCadena( direccion, _direccion ); 
				puntero.copiarCadena( profesion, _profesion );
				
			}
			
Clientes::~Clientes() {
	if (direccion !=nullptr){
		delete[] direccion;
		}
	if (profesion !=nullptr){
		delete[] profesion;
		}
}


void Clientes::setDireccion(const char* _direccion) 
{ 
    puntero.copiarCadena(direccion, _direccion); 
}

void Clientes::setProfesion(const char* _profesion) 
{ 
    puntero.copiarCadena(profesion, _profesion); 
}



const char* Clientes::getDireccion() const {
    return direccion;
}

const char* Clientes::getProfesion() const {
    return profesion;
}



void Clientes::guardarEnArchivo(std::ofstream &archivo) const {
		archivo << "Nombres: " << nombres << std::endl;
		archivo << "Apellidos: " << apellidos << std::endl;
		archivo << "Telefono: " << telefono << std::endl;
		archivo << "Edad: " << edad << std::endl;
		archivo << "Correo: " << correo << std::endl;
		
		
		archivo << "Direccion: " << direccion << std::endl;
		archivo << "Profesion: " << profesion << std::endl;
        archivo << "------------------------" << std::endl;
    }
	
void Clientes::mostrarCliente() const{
	mostrarDatosPersona();
	std::cout << "Direccion: " << direccion << std::endl;
    std::cout << "Profesion: " << profesion << std::endl;
    std::cout << "------------------------" << std::endl;
}

void Clientes::mostrarClientes(const char* nombreArchivo) {
    std::ifstream archivo(nombreArchivo);
    if (!archivo.is_open()) {
        std::cout << "Error al abrir el archivo." << std::endl;
        return;
    }

    std::string linea;
    while (std::getline(archivo, linea)) {
        std::cout << linea << std::endl;
    }

archivo.close();
}

//falta-------------
void Clientes::registrarCliente(std::ofstream &archivo) {
	char nombres [100];
	char apellidos [100];
	char telefono [100];
	char correo [100];
	int edad;
    char direccion[100];
    char profesion[100];
		
	std::cout << "Ingrese el nombre del cliente: ";
    std::cin.ignore(); 
    std::cin.getline(nombres, 100);
	
	std::cout << "Ingrese los apellidos del cliente: ";
    std::cin.ignore(); 
    std::cin.getline(apellidos, 100);
	
	std::cout << "Ingrese el telefono del cliente: ";
    std::cin.ignore(); 
    std::cin.getline(telefono, 100);
	
	std::cout << "Ingrese el correo del cliente: ";
    std::cin.ignore(); 
    std::cin.getline(correo, 100);
	
	std::cout << "Ingrese la edad del cliente: ";
    std::cin>>edad;
	
    std::cout << "Ingrese el direccion del cliente: ";
    std::cin.ignore(); 
    std::cin.getline(direccion, 100);

    std::cout << "Ingrese el profesion del cliente: ";
    std::cin.getline(profesion, 100);

    // Crear un nuevo objeto Cliente y guardar en el archivo
    Clientes nuevoCliente(nombres, apellidos, telefono, correo, edad, direccion, profesion);
	
	
    nuevoCliente.guardarEnArchivo(archivo);
}












