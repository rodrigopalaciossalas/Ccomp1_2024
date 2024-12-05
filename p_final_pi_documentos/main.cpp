#include "DocumentosModel.hpp"
#include "DocumentosView.hpp"
#include "DocumentosController.hpp"
#include "Fecha.hpp"
#include <iostream>

int main() {
    Fecha fecha1(10, 5, 2021);
    Fecha fecha2(15, 6, 2022);
    Fecha fecha3(20, 7, 2023);

    Documentos* documentos = new Documentos[3]; 

    documentos[0] = Documentos("Contrato", 1, fecha1, "Contrato de alquiler");
    documentos[1] = Documentos("Reporte", 2, fecha2, "Reporte financiero");
    documentos[2] = Documentos("Testamento", 3, fecha3, "Testamento de defuncion");

    int cantidadDocumentos = 3;

    DocumentosController controlador(documentos, cantidadDocumentos);

    const char* nombreArchivo = "documentos.txt";

    int opcion = 0;
    while (true) {
        std::cout << "\n*** Menu de Opciones ***\n";
        std::cout << "1. Buscar documento\n";
        std::cout << "2. Agregar documento\n";
        std::cout << "3. Modificar documento\n";
        std::cout << "4. Eliminar documento\n";
        std::cout << "5. Mostrar documentos desde el archivo\n";
        std::cout << "6. Salir\n";
        std::cout << "Elija una opcion: ";
        std::cin >> opcion;

        if (opcion == 1) {
            int buscarOpcion = 0;
            std::cout << "\n*** Opciones de Busqueda ***\n";
            std::cout << "1. Buscar por Nombre\n";
            std::cout << "2. Buscar por ID\n";
            std::cout << "3. Buscar por Fecha\n";
            std::cout << "4. Buscar por Tipo\n";
            std::cout << "Elija una opcion: ";
            std::cin >> buscarOpcion;

            if (buscarOpcion == 1) {
                char nombre[100];
                std::cout << "Ingrese el nombre del documento: ";
                std::cin >> nombre;
                controlador.buscarPorNombre(nombre);
            } else if (buscarOpcion == 2) {
                int id;
                std::cout << "Ingrese el ID del documento: ";
                std::cin >> id;
                controlador.buscarPorID(id);
            } else if (buscarOpcion == 3) {
                int dia, mes, anio;
                std::cout << "Ingrese la fecha (dia mes año): ";
                std::cin >> dia >> mes >> anio;
                Fecha fecha(dia, mes, anio);
                controlador.buscarPorFecha(fecha);
            } else if (buscarOpcion == 4) {
                char tipo[100];
                std::cout << "Ingrese el tipo del documento: ";
                std::cin >> tipo;
                controlador.buscarPorTipo(tipo);
            }
        } else if (opcion == 2) {
            char tipo[100], titulo[100];
            int id, dia, mes, anio;
            std::cout << "Ingrese el tipo del documento: ";
            std::cin >> tipo;
            std::cout << "Ingrese el ID del documento: ";
            std::cin >> id;
            std::cout << "Ingrese la fecha (dia mes año): ";
            std::cin >> dia >> mes >> anio;
            Fecha fecha(dia, mes, anio);
            std::cout << "Ingrese el titulo del documento: ";
            std::cin >> titulo;

            Documentos* nuevoArreglo = new Documentos[cantidadDocumentos + 1];  
            for (int i = 0; i < cantidadDocumentos; ++i) {
                nuevoArreglo[i] = documentos[i];
            }
            nuevoArreglo[cantidadDocumentos] = Documentos(tipo, id, fecha, titulo);  

            delete[] documentos; 
            documentos = nuevoArreglo; 

            cantidadDocumentos++; 

            controlador.agregarDocumento(tipo, id, fecha, titulo);
            std::cout << "Documento agregado exitosamente.\n";
        } else if (opcion == 3) {
            int id;
            std::cout << "Ingrese el ID del documento a modificar: ";
            std::cin >> id;
            controlador.modificarDocumento(id);
        } else if (opcion == 4) {
            int id;
            std::cout << "Ingrese el ID del documento a eliminar: ";
            std::cin >> id;
            controlador.eliminarDocumento(id);
            std::cout << "Documento eliminado exitosamente.\n";
        } else if (opcion == 5) {
            std::cout << "\nDocumentos desde el archivo:\n";
            controlador.mostrarDocumentosDesdeArchivo(nombreArchivo);
        } else if (opcion == 6) {
            break;
        } else {
            std::cout << "Opcion no válida. Intente de nuevo.\n";
        }
    }

    delete[] documentos;

    return 0;
}
