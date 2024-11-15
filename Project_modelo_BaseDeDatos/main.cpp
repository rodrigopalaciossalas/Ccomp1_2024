// Hello World program 
// ANSI Codes
// https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797

#include <iostream>
#include "empleados.hpp"
#include "cliente.hpp"
#include "productos.hpp"
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
const int maxClientes = 100;
const int maxEmpleados = 100;
const int maxProductos = 100;
Cliente* clientes[maxClientes];
Empleado* empleados[maxEmpleados];
Producto* productos[maxProductos];
int numClientes = 0;
int numEmpleados = 0;
int numProductos = 0;

void modeloProductos() 
{
    int opcion;
    do 
    {
        std::cout << "=== Sistema de Gestión de Productos ===\n";
        std::cout << "1. Agregar Producto\n";
        std::cout << "2. Listar Productos\n";
        std::cout << "3. Buscar Producto por ID\n";
        std::cout << "4. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;
        std::cin.ignore();

        switch (opcion) 
        {
            case 1: 
            {
                if (numProductos >= maxProductos) 
                {
                    std::cout << "Se ha alcanzado el límite máximo de productos.\n\n";
                    break;
                }

                char id[50];
                char nombre[100];
                float precio;
                int cantidad;

                std::cout << "Ingrese ID del Producto: ";
                std::cin.getline(id, 50);

                std::cout << "Ingrese Nombre del Producto: ";
                std::cin.getline(nombre, 100);

                std::cout << "Ingrese Precio del Producto: ";
                std::cin >> precio;
                std::cin.ignore();

                std::cout << "Ingrese Cantidad del Producto: ";
                std::cin >> cantidad;
                std::cin.ignore();

                productos[numProductos++] = new Producto(id, nombre, precio, cantidad);
                std::cout << "Producto agregado exitosamente.\n\n";
                break;
            }
            case 2: 
            {
                if (numProductos == 0) 
                {
                    std::cout << "No hay productos para mostrar.\n\n";
                    break;
                }

                std::cout << "\n=== Lista de Productos ===\n";
                for (int i = 0; i < numProductos; ++i)
                 {
                    std::cout << "Producto #" << (i + 1) << ":\n";
                    productos[i]->mostrarProducto();
                }
                break;
            }
            case 3: 
            {
                if (numProductos == 0) 
                {
                    std::cout << "No hay productos para buscar.\n\n";
                    break;
                }

                char idBuscado[50];
                std::cout << "Ingrese el ID del Producto a buscar: ";
                std::cin.getline(idBuscado, 50);

                bool encontrado = false;
                for (int i = 0; i < numProductos; ++i) 
                {
                    if (productos[i]->esID(idBuscado)) 
                    {
                        std::cout << "\n=== Producto Encontrado ===\n";
                        productos[i]->mostrarProducto();
                        encontrado = true;
                        break;
                    }
                }

                if (!encontrado) 
                {
                    std::cout << "Producto con ID " << idBuscado << " no encontrado.\n\n";
                }
                break;
            }
            case 4:
                std::cout << "Saliendo del programa.\n";
                break;
            default:
                std::cout << "Opción inválida. Por favor, seleccione una opción válida.\n\n";
                break;
        }
    } while (opcion != 4);
}

void moduloClientes() 
{
    int opcion;
    do 
    {
        std::cout << "\n=== Sistema de Gestión de Clientes ===\n";
        std::cout << "1. Agregar Cliente\n";
        std::cout << "2. Listar Clientes\n";
        std::cout << "3. Buscar Cliente por ID\n";
        std::cout << "4. Volver al Menú Principal\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;
        std::cin.ignore();

        switch (opcion) 
        {
            case 1: 
            {
                if (numClientes >= maxClientes) 
                {
                    std::cout << "Se ha alcanzado el límite máximo de clientes.\n";
                    break;
                }

                char id[50], nombre[100], dni[20], telefono[20], correo[100], codigo[20];
                int edad;

                std::cout << "Ingrese ID del Cliente: ";
                std::cin.getline(id, 50);
                std::cout << "Ingrese Nombre del Cliente: ";
                std::cin.getline(nombre, 100);
                std::cout << "Ingrese Edad del Cliente: ";
                std::cin >> edad;
                std::cin.ignore();
                std::cout << "Ingrese DNI del Cliente: ";
                std::cin.getline(dni, 20);
                std::cout << "Ingrese Teléfono del Cliente: ";
                std::cin.getline(telefono, 20);
                std::cout << "Ingrese Correo del Cliente: ";
                std::cin.getline(correo, 100);
                std::cout << "Ingrese Código del Cliente: ";
                std::cin.getline(codigo, 20);

                // Crear el cliente y agregarlo al arreglo
                clientes[numClientes++] = new Cliente(id, nombre, edad, dni, telefono, correo, codigo);
                std::cout << "Cliente agregado exitosamente.\n";
                break;
            }
            case 2: 
            {
                if (numClientes == 0) 
                {
                    std::cout << "No hay clientes registrados.\n";
                    break;
                }

                std::cout << "\n=== Lista de Clientes ===\n";
                for (int i = 0; i < numClientes; ++i) 
                {
                    clientes[i]->visual_clientes();
                }
                break;
            }
            case 3: 
            {
                if (numClientes == 0) 
                {
                    std::cout << "No hay clientes para buscar.\n";
                    break;
                }

                char idBuscado[50];
                std::cout << "Ingrese el ID del Cliente a buscar: ";
                std::cin.getline(idBuscado, 50);

                bool encontrado = false;
                for (int i = 0; i < numClientes; ++i) 
                {
                    if (clientes[i]->esID(idBuscado)) 
                    {
                        std::cout << "\n=== Cliente Encontrado ===\n";
                        clientes[i]->visual_clientes();
                        encontrado = true;
                        break;
                    }
                }

                if (!encontrado) 
                {
                    std::cout << "Cliente con ID " << idBuscado << " no encontrado.\n";
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

}

void moduloEmpleados() 
{
    int opcion;
    do {
        std::cout << "\n=== Sistema de Gestión de Empleados ===\n";
        std::cout << "1. Agregar Empleado\n";
        std::cout << "2. Listar Empleados\n";
        std::cout << "3. Buscar Empleado por ID\n";
        std::cout << "4. Volver al Menú Principal\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;
        std::cin.ignore();

        switch (opcion) 
        {
            case 1: 
            {
                if (numEmpleados >= maxEmpleados) 
                {
                    std::cout << "Se ha alcanzado el límite máximo de empleados.\n";
                    break;
                }

                char id[50], nombre[100], dni[20], telefono[20], correo[100], puesto[50];
                int edad;
                float salario;

                std::cout << "Ingrese ID del Empleado: ";
                std::cin.getline(id, 50);
                std::cout << "Ingrese Nombre del Empleado: ";
                std::cin.getline(nombre, 100);
                std::cout << "Ingrese Edad del Empleado: ";
                std::cin >> edad;
                std::cin.ignore();
                std::cout << "Ingrese DNI del Empleado: ";
                std::cin.getline(dni, 20);
                std::cout << "Ingrese Teléfono del Empleado: ";
                std::cin.getline(telefono, 20);
                std::cout << "Ingrese Correo del Empleado: ";
                std::cin.getline(correo, 100);
                std::cout << "Ingrese Puesto del Empleado: ";
                std::cin.getline(puesto, 50);
                std::cout << "Ingrese Salario del Empleado: ";
                std::cin >> salario;
                std::cin.ignore();

                // Crear el empleado y agregarlo al arreglo
                empleados[numEmpleados++] = new Empleado(id, nombre, edad, dni, telefono, correo, puesto, salario);
                std::cout << "Empleado agregado exitosamente.\n";
                break;
            }
            case 2: 
            {
                if (numEmpleados == 0) 
                {
                    std::cout << "No hay empleados registrados.\n";
                    break;
                }

                std::cout << "\n=== Lista de Empleados ===\n";
                for (int i = 0; i < numEmpleados; ++i) 
                {
                    empleados[i]->visual_empleados();
                }
                break;
            }
            case 3: 
            {
                if (numEmpleados == 0) 
                {
                    std::cout << "No hay empleados para buscar.\n";
                    break;
                }

                char idBuscado[50];
                std::cout << "Ingrese el ID del Empleado a buscar: ";
                std::cin.getline(idBuscado, 50);

                bool encontrado = false;
                for (int i = 0; i < numEmpleados; ++i) 
                {
                    if (empleados[i]->esID(idBuscado)) 
                    {
                        std::cout << "\n=== Empleado Encontrado ===\n";
                        empleados[i]->visual_empleados();
                        encontrado = true;
                        break;
                    }
                }

                if (!encontrado) 
                {
                    std::cout << "Empleado con ID " << idBuscado << " no encontrado.\n";
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

}


// Función principal
int main() 
{
    int opcion;
    do {
        presentacion();
        std::cout << "\n=== Menú Principal ===\n";
        std::cout << "1. Clientes\n";
        std::cout << "2. Empleados\n";
        std::cout << "3. productos\n";
        std::cout << "4. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;
        std::cin.ignore();

        switch (opcion) 
        {
            case 1:
                moduloClientes();
                break;
            case 2:
                moduloEmpleados();
                break;
            case 3:
                modeloProductos();
                break;
            case 4:
                std::cout << "Saliendo del programa...\n";
                break;
            default:
                std::cout << "Opción inválida. Intente nuevamente.\n";
        }
    } while (opcion != 3);

    // Liberar memoria
    for (int i = 0; i < numClientes; ++i) 
    {
        delete clientes[i];
    }
    for (int i = 0; i < numEmpleados; ++i) 
    {
        delete empleados[i];
    }

    for (int i = 0; i < numProductos; ++i) 
    {
        delete productos[i];
    }

    return 0;
}
