#ifndef INTERFAZ_BOLETAS_HPP
#define INTERFAZ_BOLETAS_HPP

#include "ListaGenerica.hpp"  // Asegúrate de que la clase ListaGenerica esté correctamente definida
#include "Boletas.hpp"        // Asegúrate de que la clase Boletas esté correctamente definida

void mostrarMenuBoletas();
void gestionarBoletas(ListaGenerica& listaBoletas, const char* nombreArchivoBoletas);

#endif

