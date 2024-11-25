#include <iostream>
#include "ListaGenerica.hpp"
#include "Boletas.hpp"  // Asegúrate de tener la definición correcta de la clase Boletas
#include "Facturas.hpp" // Asegúrate de tener la definición correcta de la clase Facturas

int main() {
    // Crear lista generica de Boletas y Facturas
    ListaGenerica listaBoletas;
    ListaGenerica listaFacturas;

    const char* nombreArchivoBoletas = "boletas.txt";
    const char* nombreArchivoFacturas = "facturas.txt";

    // Agregar elementos a las listas
    listaBoletas.agregarDato(nombreArchivoBoletas, "1,Venta de Producto A");
    listaBoletas.agregarDato(nombreArchivoBoletas, "2,Venta de Producto B");

    listaFacturas.agregarDato(nombreArchivoFacturas, "101,Factura para Cliente X");
    listaFacturas.agregarDato(nombreArchivoFacturas, "102,Factura para Cliente Y");

    // Mostrar lista de Boletas y Facturas
    std::cout << "\nLista de Boletas:\n";
    listaBoletas.mostrarLista(nombreArchivoBoletas);

    std::cout << "\nLista de Facturas:\n";
    listaFacturas.mostrarLista(nombreArchivoFacturas);

    // Agregar más elementos a las listas
    listaBoletas.agregarDato(nombreArchivoBoletas, "3,Venta de Producto C");
    listaFacturas.agregarDato(nombreArchivoFacturas, "103,Factura para Cliente Z");

    // Mostrar listas después de agregar más elementos
    std::cout << "\nLista de Boletas (después de agregar más elementos):\n";
    listaBoletas.mostrarLista(nombreArchivoBoletas);

    std::cout << "\nLista de Facturas (después de agregar más elementos):\n";
    listaFacturas.mostrarLista(nombreArchivoFacturas);

    return 0;
}