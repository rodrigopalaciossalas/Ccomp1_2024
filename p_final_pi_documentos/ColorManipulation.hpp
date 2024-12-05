#ifndef COLOR_MANIPULATION_HPP
#define COLOR_MANIPULATION_HPP

#include <iostream>

// Códigos de colores
#define BLACK 30
#define RED 31
#define GREEN 32
#define YELLOW 33
#define BLUE 34
#define MAGENTA 35
#define CYAN 36
#define WHITE 37

// Códigos de estilos
#define BOLD 1
#define ITALIC 3
#define BLINKING 5

// Función para restablecer color
void resetColor();

// Función para establecer color de texto
void setTextColor(int colorCode);

// Función para establecer color de fondo
void setBackgroundColor(int colorCode);

// Función para aplicar estilo en negrita
void setBold();

// Función para aplicar estilo en cursiva
void setItalic();

// Función para aplicar parpadeo
void setBlinking();

// Función para colocar el cursor en la parte superior izquierda
void resetCursor();

#endif // COLOR_MANIPULATION_HPP