#ifdef _WIN32
    #include <windows.h>
    #define CLEAR_COMMAND "cls"
#elif defined(__APPLE__) || defined(__MACH__) || defined(__linux__)
    #include <unistd.h>
    #include <termios.h>
    #define CLEAR_COMMAND "clear"
#endif

#include "clientes.hpp"
#include "persona.hpp"
#include <iostream>
#include <fstream>



int main() {
    const char* nombreArchivo = "clientes.txt"; // Nombre del archivo donde se guardarán los clientes
    std::ofstream archivo(nombreArchivo, std::ios::app); // Abre el archivo en modo append

    if (!archivo) {
        std::cout << "Error al abrir el archivo para escribir." << std::endl;
        return 1; 
    }

    int busqueda;
    int opcion;
    do {
        ;
        std::cout << "1. Registrar Cliente" << std::endl;
        std::cout << "2. Mostrar Clientes" << std::endl;
        std::cout << "3. Buscar por ID" << std::endl;
        std::cout << "4. Salir" << std::endl;
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;
		 std::system(CLEAR_COMMAND);
        switch (opcion) {
            case 1: {
               
                
                Clientes cliente("", "", "", "", 0, 0, "", ""); // cliente temporal
                cliente.registrarCliente(archivo);
				std::cout<<"\n\n1.Volver al inicio"<<std::endl;
				std::cout<<"2.Salir"<<std::endl;
				std::cout << "Seleccione una opción: ";
					break;
            }
            case 2: {
                Clientes::mostrarClientes(nombreArchivo);
                break;
            }
            case 3: {
                
                std::cout<<"Ingresa id del cliente: ";
                std::cin >> busqueda;

                // Crear un objeto cliente para llamar a buscarCliente
                Clientes cliente("", "", "", "", 0, 0, "", "");
                cliente.buscarCliente(nombreArchivo, busqueda);
                break;
            }
            case 4:
                
                std::cout << "Adios" << std::endl;
                break;
            default:
                std::cout << "Opción no válida. Intente de nuevo." << std::endl;
        }
    } while (opcion != 4); 

    archivo.close(); 
    return 0;
}
