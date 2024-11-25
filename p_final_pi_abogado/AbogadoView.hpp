#ifndef ABOGADO_VIEW_HPP
#define ABOGADO_VIEW_HPP

#include "AbogadoModel.hpp"

class AbogadoView {
public:
    void mostrarDatos(Abogado& abogado);  // Muestra los datos de un abogado
    void solicitarEntrada(const char* mensaje, char* entrada, int longitud);  // Solicita una cadena de texto
    int solicitarInt(const char* mensaje);  // Solicita un número entero
    int solicitarFecha(const char* mensaje);  // Solicita una parte de la fecha (día, mes o año)
};

#endif // ABOGADO_VIEW_HPP
