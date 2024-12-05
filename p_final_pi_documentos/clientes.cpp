#include "Clientes.hpp"

Clientes::Clientes(const char* _nombres, const char* _apellidos, 
                   const char* _telefono, const char* _correo, 
                   const int edad, int ID, const char* _direccion, 
                   const char* _profesion)
    : Persona(_nombres, _apellidos, _telefono, _correo, edad), ID(ID) {
    
    direccion = nullptr;
    profesion = nullptr;

    Persona::setCadenachar(_direccion, direccion);  
    Persona::setCadenachar(_profesion, profesion); 
}


Clientes::~Clientes() {
    if (direccion != nullptr) {
        delete[] direccion;
    }
    if (profesion != nullptr) {
        delete[] profesion;
    }
}


const char* Clientes::getDireccion() const { 
		return direccion; 
	}
const char* Clientes::getProfesion() const { 
		return profesion; 
	}
const int Clientes::getID() const { 
		return ID; 
	}

void Clientes::setDireccion(const char* _direccion) { 
    Persona::setCadenachar(_direccion, direccion); 
}

void Clientes::setProfesion(const char* _profesion) { 
    Persona::setCadenachar(_profesion, profesion); 
}


void Clientes::guardarEnArchivo(std::ofstream &archivo) const {
    archivo << " " << ID << std::endl;
    archivo << "Nombres: " << nombres << std::endl;
    archivo << "Apellidos: " << apellidos << std::endl;
    archivo << "Telefono: " << telefono << std::endl;
    archivo << "Edad: " << edad << std::endl;
    archivo << "Correo: " << correo << std::endl;
    archivo << "Direccion: " << direccion << std::endl;
    archivo << "Profesion: " << profesion << std::endl;
    archivo << "------------------------" << std::endl;
}

void Clientes::mostrarInformacion() const {
    Persona::mostrarInformacion();
	std::cout << "ID: " << ID << std::endl;
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

void Clientes::buscarCliente(const char* nombreArchivo, int id) const {
    std::ifstream archivo(nombreArchivo);
    std::string linea;
    bool encontrado = false;

    if (!archivo.is_open()) {
        std::cerr << "No se pudo abrir el archivo para leer." << std::endl;
        return;
    }

    while (std::getline(archivo, linea)) {
        // ID = primera línea de cada registro
        if (linea.find(std::to_string(id)) != std::string::npos) {
            encontrado = true;
            std::cout << "Cliente encontrado: " << std::endl;
            std::cout << linea << std::endl; // Muestra la línea del ID encontrado

            
            while (std::getline(archivo, linea) && linea != "------------------------") {
                std::cout << linea << std::endl; // Muestra información del cliente
            }
            break;
        }
    }

    if (!encontrado) {
        std::cout << "Cliente con ID " << id << " no encontrado." << std::endl;
    }

    archivo.close();
}

void Clientes::registrarCliente(std::ofstream &archivo) {
    char nombres[100];
    char apellidos[100];
    char telefono[100];
    char correo[100];
    int edad;
    int id;
    char direccion[100];
    char profesion[100];

    std::cout << "Ingrese el nombre del cliente: ";
    std::cin.ignore(); 
    std::cin.getline(nombres, 100);

    std::cout << "Ingrese los apellidos del cliente: ";
	std::cin.ignore();
    std::cin.getline(apellidos, 100);

    std::cout << "Ingrese el DNI del cliente: ";
    std::cin>>id;


    std::cout << "Ingrese el telefono del cliente: ";
	std::cin.ignore();
    std::cin.getline(telefono, 100);

    std::cout << "Ingrese el correo del cliente: ";
	std::cin.ignore();
    std::cin.getline(correo, 100);

    std::cout << "Ingrese la edad del cliente: ";
    std::cin >> edad;


    std::cout << "Ingrese la direccion del cliente: ";
    std::cin.ignore(); 
    std::cin.getline(direccion, 100);

    std::cout << "Ingrese la profesion del cliente: ";
	std::cin.ignore();
    std::cin.getline(profesion, 100);

     Clientes nuevoCliente(nombres, apellidos, telefono, correo, edad, id, direccion, profesion);
	
	
    nuevoCliente.guardarEnArchivo(archivo);
}

const char* Clientes::getTipo() const {
    return "Cliente";
}










