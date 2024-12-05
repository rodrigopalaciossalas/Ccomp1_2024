#ifndef MAINGESTION_HPP
#define MAINGESTION_HPP

#include <iostream>

#include "mainEconomia.hpp"

#include "Clientes.hpp"

#include "AbogadoModel.hpp"
#include "AbogadoView.hpp"
#include "AbogadoController.hpp"


// Función para mostrar el menú
void mostrarMenu(int &opcion);

// Función para gestionar Abogados
void gestionarAbogados();

// Función para gestionar Economía (Boletas y Facturas)
void gestionarEconomia();

//Función para gestionar Clientes
void gestionarClientes();

#endif // MAINGESTION_HPP
