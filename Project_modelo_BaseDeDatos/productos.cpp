#include "productos.hpp"
#include <iostream>

// Constructor
Producto::Producto(const char* id, const char* nombre, float precio, int cantidad)
{
    idProducto = nullptr;
    nombreProducto = nullptr;
    puntero.copiarCadena(idProducto, id);
    puntero.copiarCadena(nombreProducto, nombre);
    this->precio = precio;
    this->cantidad = cantidad;
}

// Destructor
Producto::~Producto() 
{
    if (idProducto != nullptr) 
    {
        delete[] idProducto;
    }
    if (nombreProducto != nullptr) 
    {
        delete[] nombreProducto;
    }
}

// Setters
void Producto::setIDProducto(const char* id) 
{
    puntero.copiarCadena(idProducto, id);
}

void Producto::setNombreProducto(const char* nombre) 
{
    puntero.copiarCadena(nombreProducto, nombre);
}

void Producto::setPrecio(float precio) 
{
    this->precio = precio;
}

void Producto::setCantidad(int cantidad) 
{
    this->cantidad = cantidad;
}

// Getters
const char* Producto::getIDProducto() const 
{
    return idProducto;
}

const char* Producto::getNombreProducto() const 
{
    return nombreProducto;
}

float Producto::getPrecio() const 
{
    return precio;
}

int Producto::getCantidad() const 
{
    return cantidad;
}

// Métodos
void Producto::mostrarProducto() const 
{
    std::cout << "ID Producto: " << idProducto << "\n";
    std::cout << "Nombre Producto: " << nombreProducto << "\n";
    std::cout << "Precio: " << precio << "\n";
    std::cout << "Cantidad: " << cantidad << "\n\n";
}

bool Producto::esID(const char* id) const 
{
    return puntero.compararCadenas(idProducto, id);
}

void Producto::entradasProducto() 
{
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

    setIDProducto(id);
    setNombreProducto(nombre);
    setPrecio(precio);
    setCantidad(cantidad);
}
