#ifndef INTERFAZ_FACTURAS_HPP
#define INTERFAZ_FACTURAS_HPP

#include "ListaGenerica.hpp"  // Asegúrate de que la clase ListaGenerica esté correctamente definida
#include "Facturas.hpp"       // Asegúrate de que la clase Facturas esté correctamente definida

void mostrarMenuFacturas();
void gestionarFacturas(ListaGenerica& listaFacturas, const char* nombreArchivoFacturas);

#endif
