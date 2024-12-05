
#ifndef CLIENTES_HPP
#define CLIENTES_HPP

#include "Persona.hpp"
#include <fstream>

class Clientes : public Persona {
private:
    char* direccion;
    char* profesion;
	int ID;
    
public:
   
    Clientes(const char* _nombres, const char* _apellidos, 
			const char* _telefono, const char* _correo, 
             const int edad, const int ID, const char* _direccion, 
			 const char* _profesion);
    

    ~Clientes();


    const char* getDireccion() const;
    const char* getProfesion() const;
	const int getID() const;
	
    void setDireccion(const char* _direccion);
    void setProfesion(const char* _profesion);

	void buscarCliente(const char* nombreArchivo, int id) const;
    void registrarCliente(std::ofstream &archivo);
    void guardarEnArchivo(std::ofstream &archivo) const;
	static void mostrarClientes(const char* nombreArchivo);
	
	void mostrarInformacion() const override;
    const char* getTipo() const override;
};

#endif 
