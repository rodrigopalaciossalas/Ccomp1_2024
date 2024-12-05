#include "Persona.hpp"


Persona::Persona(const char* _nombres, const char* _apellidos,
                 const char* _telefono, const char* _correo, 
				 const int edad) :edad(edad){
	
	nombres=nullptr;
	apellidos=nullptr;
	telefono=nullptr;
	correo=nullptr;
				 				 
    setCadenachar(_nombres, nombres);
    setCadenachar(_apellidos, apellidos);
    setCadenachar(_telefono, telefono);
    setCadenachar(_correo, correo);
	
}

Persona::~Persona() {
    delete[] nombres;
    delete[] apellidos;
    delete[] telefono;
    delete[] correo;
}

//cadenas
void Persona::setCadenachar(const char* _a, char*& a) {
    if (_a) {

        int length = 0;
        while (_a[length] != '\0') {
            length++;
        }

        a = new char[length + 1];
        for (int i = 0; i < length; i++) {
            a[i] = _a[i];
        }
        a[length] = '\0'; 
    } else {
        a = nullptr;
    }
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
const int Persona::getEdad() const { 
	return edad; 
	}


void Persona::setNombres(const char* _nombres) { 
	setCadenachar(_nombres, nombres); 
	}
void Persona::setApellidos(const char* _apellidos) { 
	setCadenachar(_apellidos, apellidos); 
	}
void Persona::setTelefono(const char* _telefono) { 
	setCadenachar(_telefono, telefono); 
	}
void Persona::setCorreo(const char* _correo) { 
	setCadenachar(_correo, correo);
	}


void Persona::mostrarInformacion() const {
    std::cout << "Nombres: " << nombres << std::endl;
    std::cout << "Apellidos: " << apellidos  << std::endl;
    std::cout << "Telefono: " << telefono << std::endl;
    std::cout << "Correo: " << correo << std::endl;
    std::cout << "Edad: " << edad << std::endl;

    }
	
const char* Persona::getTipo() const{
	return "Persona";
}
