#ifndef PRODUCTOS_HPP
#define PRODUCTOS_HPP

#include "A_punteros.hpp"

class Producto 
{
private:
    char* idProducto;   // ID del producto
    char* nombreProducto; // Nombre del producto
    float precio;       // Precio del producto
    int cantidad;       // Cantidad disponible
    A_puntero puntero;  // Utilidad para manejo de cadenas

public:
    // Constructor
    Producto(const char* id, const char* nombre, float precio, int cantidad);

    // Destructor
    ~Producto();

    // Setters
    void setIDProducto(const char* id);
    void setNombreProducto(const char* nombre);
    void setPrecio(float precio);
    void setCantidad(int cantidad);

    // Getters
    const char* getIDProducto() const;
    const char* getNombreProducto() const;
    float getPrecio() const;
    int getCantidad() const;

    // Métodos
    void mostrarProducto() const;
    bool esID(const char* id) const;
    void entradasProducto();
};

#endif // PRODUCTOS_HPP
