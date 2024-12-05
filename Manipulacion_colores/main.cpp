#include "ColorManipulation.hpp"

#ifdef _WIN32
    #include <windows.h>
    #define CLEAR_COMMAND "cls"
#elif defined(__APPLE__) || defined(__MACH__) || defined(__linux__)
    #include <unistd.h>
    #include <termios.h>
    #define CLEAR_COMMAND "clear"
#endif

#include <iostream>
#include "ColorManipulation.hpp"

#include <iostream>
#include "ColorManipulation.hpp"

int main() {
    std::system(CLEAR_COMMAND);
    // Limpiar pantalla y colocar cursor al principio
    resetCursor();  

    // Colores básicos
    std::cout << "Colores básicos:" << std::endl;

    // Negro
    setTextColor(30);
    std::cout << "Texto negro" << std::endl;
    resetColor();

    // Rojo
    setTextColor(31);
    std::cout << "Texto rojo" << std::endl;
    resetColor();

    // Verde
    setTextColor(32);
    std::cout << "Texto verde" << std::endl;
    resetColor();

    // Amarillo
    setTextColor(33);
    std::cout << "Texto amarillo" << std::endl;
    resetColor();

    // Azul
    setTextColor(34);
    std::cout << "Texto azul" << std::endl;
    resetColor();

    // Magenta
    setTextColor(35);
    std::cout << "Texto magenta" << std::endl;
    resetColor();

    // Cian
    setTextColor(36);
    std::cout << "Texto cian" << std::endl;
    resetColor();

    // Blanco
    setTextColor(37);
    std::cout << "Texto blanco" << std::endl;
    resetColor();

    std::cout << std::endl;

    // Colores brillantes
    std::cout << "Colores brillantes:" << std::endl;

    // Negro brillante
    setTextColor(90);
    std::cout << "Texto negro brillante" << std::endl;
    resetColor();

    // Rojo brillante
    setTextColor(91);
    std::cout << "Texto rojo brillante" << std::endl;
    resetColor();

    // Verde brillante
    setTextColor(92);
    std::cout << "Texto verde brillante" << std::endl;
    resetColor();

    // Amarillo brillante
    setTextColor(93);
    std::cout << "Texto amarillo brillante" << std::endl;
    resetColor();

    // Azul brillante
    setTextColor(94);
    std::cout << "Texto azul brillante" << std::endl;
    resetColor();

    // Magenta brillante
    setTextColor(95);
    std::cout << "Texto magenta brillante" << std::endl;
    resetColor();

    // Cian brillante
    setTextColor(96);
    std::cout << "Texto cian brillante" << std::endl;
    resetColor();

    // Blanco brillante
    setTextColor(97);
    std::cout << "Texto blanco brillante" << std::endl;
    resetColor();

    std::cout << std::endl;

    // Estilos combinados con colores
    std::cout << "Estilos combinados con colores:" << std::endl;

    // Negrita y rojo
    setBold();
    setTextColor(31);
    std::cout << "Texto en negrita y color rojo" << std::endl;
    resetColor();

    // Cursiva y verde
    setItalic();
    setTextColor(32);
    std::cout << "Texto en cursiva y color verde" << std::endl;
    resetColor();

    // Subrayado y azul
    setBold();
    setItalic();
    setTextColor(34);
    std::cout << "Texto subrayado y color azul" << std::endl;
    resetColor();

    // Parpadeante y amarillo
    setBlinking();
    setTextColor(33);
    std::cout << "Texto parpadeante y color amarillo" << std::endl;
    resetColor();

    std::cout << std::endl;

    return 0;
}
