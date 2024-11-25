#include "AbogadoModel.hpp"


// Constructor
Abogado::Abogado(const char* _nombre, const char* _apellido, const char* _telefono, const char* _correo, int _edad,
                 const char* _especialidad, double _salario, const char* _puesto, const char* _gmail,
                 int dia, int mes, int anio)
    : Persona(_nombre, _apellido, _telefono, _correo, _edad), // Inicialización de la clase base
      fechaContratacion(dia, mes, anio), 
      salario(_salario), 
      id(1) // ID asignado como ejemplo
{
    especialidad = nullptr;
    puesto = nullptr;
    gmail = nullptr;

    puntero.copiarCadena(especialidad, _especialidad);
    puntero.copiarCadena(puesto, _puesto);
    puntero.copiarCadena(gmail, _gmail);
}


Abogado::~Abogado()
{
    if (especialidad != nullptr) delete[] especialidad;
    if (puesto != nullptr) delete[] puesto;
    if (gmail != nullptr) delete[] gmail;
}

void Abogado::setEspecialidad(const char* _especialidad)
{
    puntero.copiarCadena(especialidad, _especialidad);
}

void Abogado::setSalario(double _salario)
{
    salario = _salario;
}

void Abogado::setPuesto(const char* _puesto)
{
    puntero.copiarCadena(puesto, _puesto);
}

void Abogado::setGmail(const char* _gmail)
{
    puntero.copiarCadena(gmail, _gmail);
}

void Abogado::setFechaContratacion(int dia, int mes, int anio)
{
    fechaContratacion = Fecha(dia, mes, anio);
}

const char* Abogado::getEspecialidad() const
{
    return especialidad;
}

double Abogado::getSalario() const
{
    return salario;
}

const char* Abogado::getPuesto() const
{
    return puesto;
}

const char* Abogado::getGmail() const
{
    return gmail;
}

Fecha Abogado::getFechaContratacion() const
{
    return fechaContratacion;
}

int Abogado::obtenerID() const
{
    return id;
}

//clase abogado model para manejar los abogados

AbogadoModel::AbogadoModel()
    : abogados(nullptr), cantidad(0), capacidad(2)
{
    abogados = new Abogado*[capacidad];
}



AbogadoModel::~AbogadoModel()
{
    for (int i = 0; i < cantidad; i++)
    {
        delete abogados[i];
    }
    delete[] abogados;
}

void AbogadoModel::expandir()
{
    capacidad *= 2;
    Abogado** nuevosAbogados = new Abogado*[capacidad];
    for (int i = 0; i < cantidad; i++)
    {
        nuevosAbogados[i] = abogados[i];
    }
    delete[] abogados;
    abogados = nuevosAbogados;
}

void AbogadoModel::agregarAbogado(Abogado* abogado)
{
    if (cantidad == capacidad)
    {
        expandir();
    }
    abogados[cantidad++] = abogado;
}

void AbogadoModel::eliminarAbogadoPorID(int id)
{
    for (int i = 0; i < cantidad; i++)
    {
        if (abogados[i]->obtenerID() == id)
        {
            delete abogados[i];
            for (int j = i; j < cantidad - 1; j++)
            {
                abogados[j] = abogados[j + 1];
            }
            cantidad--;
            std::cout << "Abogado con ID " << id << " eliminado.\n";
            return;
        }
    }
    std::cout << "No se encontró abogado con ID " << id << ".\n";
}

Abogado* AbogadoModel::buscarAbogadoPorID(int id)
{
    for (int i = 0; i < cantidad; i++)
    {
        if (abogados[i]->obtenerID() == id)
        {
            return abogados[i];
        }
    }
    return nullptr;
}

void AbogadoModel::listarAbogados()
{
    if (cantidad == 0)
    {
        std::cout << "No hay abogados registrados.\n";
        return;
    }

    for (int i = 0; i < cantidad; i++)
    {
        if (abogados[i] != nullptr) // Verificar que el puntero no sea nulo
        {
            std::cout << "Abogado ID: " << abogados[i]->obtenerID()
                      << ", Nombre: " << abogados[i]->getNombre()
                      << ", Apellido: " << abogados[i]->getApellido() << "\n";
        }
        else
        {
            std::cout << "Registro vacío en la posición " << i << ".\n";
        }
    }
}