#ifndef ABOGADO_CONTROLLER_HPP
#define ABOGADO_CONTROLLER_HPP

#include "AbogadoModel.hpp"
#include "AbogadoView.hpp"

class AbogadoController 
{
private:
    Abogado* abogado;
    AbogadoView* vista;
    AbogadoModel* modelo;

public:
    AbogadoController(Abogado* _abogado, AbogadoView* _vista);

    void mostrarDatos();
    void actualizarSalario(double salario);
    void actualizarPuesto(const char* puesto);
    void ingresarDatosObligatorios();
    void ingresarDatosOpcionales();
    void agregarAbogado();
    void eliminarAbogado();
    void buscarAbogado();
    void listarAbogados();
};

#endif // ABOGADO_CONTROLLER_HPP
