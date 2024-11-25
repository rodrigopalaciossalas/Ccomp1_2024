// Hello World program 
// ANSI Codes
// https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797

#include <iostream>
#include "carros.hpp"
#include "Estacionamiento.hpp"
#ifdef _WIN32
    #include <windows.h>
    #define CLEAR_COMMAND "cls"
#elif defined(__APPLE__) || defined(__MACH__) || defined(__linux__)
    #include <unistd.h>
    #include <termios.h>
    #define CLEAR_COMMAND "clear"
#endif

void presentacion() 
{   
	std::system(CLEAR_COMMAND);            
    std::cout << "\x1B[H";          

    std::cout << "\x1B[31;5;114;103;110m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"	
	std::cout << "/***************************************************/" << std::endl; 
	std::cout << "\x1B[m";             // Resetear color a valor por defecto
	std::cout << "\x1B[31;1m Universidad Catolica San Pablo \x1B[m" << std::endl; 
	std::cout << "\x1B[33;1m Escuela Profesional de Ciencia de la Computacion \x1B[m" << std::endl; 
	std::cout << "\x1B[37;1m Curso de Ciencia de la Computacion I \x1B[m" << std::endl; 
	std::cout << "\x1B[38;5;46m Rodrigo Palacios Salas \x1B[m" << std::endl; 
	std::cout << "\x1B[3;38;5;160m Arequipa 2024 - Semestre II \x1B[m" << std::endl; 
	std::cout << "\x1B[5;36;44m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"	
	std::cout << "/***************************************************/" << std::endl;
	std::cout << "\x1B[m";             // Resetear color a valor por defecto 
	std::cout << "\n proyecto base de datos \n\n";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"
	}


// Variables globales para el sistema
const int maxcarros = 100;
carros* carro[maxcarros];
int numcarros = 0;


void main() 
{
	presentacion();
    int opcion;
    do 
    {
        std::cout << "\n=== Sistema de Gestión de carros ===\n";
        std::cout << "1. Agregar carros\n";
        std::cout << "2. Listar carros\n";
        std::cout << "3. Buscar carros por placa\n";
        std::cout << "4. Volver al Menú Principal\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;
        std::cin.ignore();

        switch (opcion) 
        {
            case 1: 
            {
                if (maxcarros >= maxcarros) 
                {
                    std::cout << "Se ha alcanzado el límite máximo de carros.\n";
                    break;
                }

                char placa[50], modelo[100], marca[20], h_ingreso[20], h_salida[20];

                std::cout << "Ingrese placa: ";
                std::cin.getline(placa, 50);
                std::cout << "Ingrese modelo del carro: ";
                std::cin.getline(modelo, 100);
                std::cout << "Ingrese marca del carro: ";
                std::cin.getline(marca, 20);
                std::cout << "Ingrese Teléfono del carro: ";
                std::cin.getline(h_ingreso, 20);
                std::cout << "Ingrese Correo del carro: ";
                std::cin.getline(h_salida, 20);

                // Crear el carro y agregarlo al arreglo
                carros[numcarros++] = new carro(placa, modelo, marca, h_ingreso, h_salida);
                std::cout << "carro agregado exitosamente.\n";
                break;
            }
            case 2: 
            {
                if (numcarros == 0) 
                {
                    std::cout << "No hay carros registrados.\n";
                    break;
                }

                std::cout << "\n=== Lista de carros ===\n";
                for (int i = 0; i < numcarros; ++i) 
                {
                    carros[i]->visual_carros();
                }
                break;
            }
            case 3: 
            {
                if (numcarros == 0) 
                {
                    std::cout << "No hay carros para buscar.\n";
                    break;
                }

                char idcarro[50];
                std::cout << "Ingrese la placa del carro a buscar: ";
                std::cin.getline(idcarro, 50);

                bool encontrado = false;
                for (int i = 0; i < numcarros; ++i) 
                {
                    if (carros[i]->esplaca(idcarro)) 
                    {
                        std::cout << "\n=== carro Encontrado ===\n";
                        carros[i]->visual_carros();
                        encontrado = true;
                        break;
                    }
                }

                if (!encontrado) 
                {
                    std::cout << "carro con ID " << idcarro << " no encontrado.\n";
                }
                break;
            }
            case 4: 
                std::cout << "Volviendo al Menú Principal...\n";
                break;
            default:
                std::cout << "Opción inválida. Intente nuevamente.\n";
        }
    } while (opcion != 4);
	
	for (int i = 0; i < numcarros; ++i) 
    {
        delete carros[i];
    }

    return 0;
}





