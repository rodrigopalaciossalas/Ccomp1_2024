// Hello World program 
// ANSI Codes
// https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797

#include <iostream>

#ifdef _WIN32
    #include <windows.h>
    #define CLEAR_COMMAND "cls"
#elif defined(__APPLE__) || defined(__MACH__) || defined(__linux__)
    #include <unistd.h>
    #include <termios.h>
    #define CLEAR_COMMAND "clear"
#endif

void presentacion() 
{   
	std::system(CLEAR_COMMAND);            // Comando para borrar todo el contenido de la pantalla
    std::cout << "\x1B[H";          // Codigo para colocar el cursor en el canto superior izquierdo

    std::cout << "\x1B[31;5;114;103;110m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"	
	std::cout << "/***************************************************/" << std::endl; 
	std::cout << "\x1B[m";             // Resetear color a valor por defecto
	std::cout << "\x1B[31;1m Universidad Catolica San Pablo \x1B[m" << std::endl; 
	std::cout << "\x1B[33;1m Escuela Profesional de Ciencia de la Computacion \x1B[m" << std::endl; 
	std::cout << "\x1B[37;1m Curso de Ciencia de la Computacion I \x1B[m" << std::endl; 
	std::cout << "\x1B[38;5;46m Rodrigo Palacios Salas \x1B[m" << std::endl; 
	std::cout << "\x1B[3;38;5;160m Arequipa 2024 - Semestre II \x1B[m" << std::endl; 
	std::cout << "\x1B[5;36;44m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"	
	std::cout << "/***************************************************/" << std::endl;
	std::cout << "\x1B[m";             // Resetear color a valor por defecto 
	std::cout << "\n juego oso \n\n";

	return;
	
}

void imprimir_tablero(const char tablero[4][4]) {
    std::system(CLEAR_COMMAND);  // Limpiar la pantalla
    std::cout << "\x1B[38;5;46m" << "Bienvenidos al juego del OSO" << "\x1B[m" << std::endl;
    std::cout << "\x1B[38;5;31m" << "--------------------" << std::endl;
    std::cout << "\x1B[38;5;21m" << "    1    2    3    4" << std::endl;

    for (int fila = 0; fila < 4; fila++) {
        std::cout << "\x1B[38;5;21m" << fila + 1 << " ";  // Mostrar número de fila
        for (int columna = 0; columna < 4; columna++) {
            std::cout << "\x1B[38;5;31m" << "| " << "\x1B[m" << tablero[fila][columna] << "\x1B[38;5;31m" << " |";
        }
        std::cout << "\x1B[m" << std::endl;
        std::cout << "\x1B[38;5;31m" << "--------------------" << std::endl;
    }
}

// Función para verificar si el tablero está lleno
bool tablero_lleno(const char tablero[4][4]) {
    for (int fila = 0; fila < 4; fila++) {
        for (int columna = 0; columna < 4; columna++) {
            if (tablero[fila][columna] == '0') {  // Si hay alguna casilla vacía, el tablero no está lleno
                return false;
            }
        }
    }
    return true;  // Todas las casillas están llenas
}

// Función para verificar si se formó "oso" y asignar puntos
int verificar_puntos(const char tablero[4][4]) {
    int puntos = 0;

    // Revisar filas
    for (int fila = 0; fila < 4; fila++) {
        for (int columna = 0; columna < 2; columna++) {  // Solo puede haber "oso" en las primeras 3 columnas
            if (tablero[fila][columna] == 'o' && tablero[fila][columna + 1] == 's' && tablero[fila][columna + 2] == 'o') {
                puntos++;
            }
        }
    }

    // Revisar columnas
    for (int columna = 0; columna < 4; columna++) {
        for (int fila = 0; fila < 2; fila++) {  // Solo puede haber "oso" en las primeras 3 filas
            if (tablero[fila][columna] == 'o' && tablero[fila + 1][columna] == 's' && tablero[fila + 2][columna] == 'o') {
                puntos++;
            }
        }
    }

    // Revisar diagonales principales (de izquierda a derecha)
    for (int fila = 0; fila < 2; fila++) {
        for (int columna = 0; columna < 2; columna++) {
            if (tablero[fila][columna] == 'o' && tablero[fila + 1][columna + 1] == 's' && tablero[fila + 2][columna + 2] == 'o') {
                puntos++;
            }
        }
    }

    // Revisar diagonales inversas (de derecha a izquierda)
    for (int fila = 0; fila < 2; fila++) {
        for (int columna = 2; columna < 4; columna++) {
            if (tablero[fila][columna] == 'o' && tablero[fila + 1][columna - 1] == 's' && tablero[fila + 2][columna - 2] == 'o') {
                puntos++;
            }
        }
    }

    return puntos;
}

// Función que maneja el turno del jugador
void jugador(char tablero[4][4], int jugador_actual) {
    int fila = 0;
    int columna = 0;
    int escoger_variable = 0;

    bool jugada_valida = false;  // Para asegurarnos de que se ingrese una jugada válida

    while (!jugada_valida) {
        std::cout << "Jugador " << jugador_actual << ": Presione 1 si desea ingresar 'o' o presione 2 si desea ingresar 's': ";
        std::cin >> escoger_variable;
        std::cout << "Jugador, ingrese fila (1, 2, 3, 4): ";
        std::cin >> fila;
        std::cout << "Jugador, ingrese columna (1, 2, 3, 4): ";
        std::cin >> columna;

        fila--;  // Ajustar para índice de arreglo (fila 1 es índice 0)
        columna--;  // Ajustar para índice de arreglo (columna 1 es índice 0)

        // Validar si la posición es válida y está vacía
        if (fila >= 0 && fila < 4 && columna >= 0 && columna < 4 && tablero[fila][columna] == '0') {
            if (escoger_variable == 1) {
                tablero[fila][columna] = 'o';
            } else if (escoger_variable == 2) {
                tablero[fila][columna] = 's';
            } else {
                std::cout << "Variable no correcta. Intenta de nuevo.\n";
                continue;
            }
            jugada_valida = true;  // La jugada fue válida, salir del ciclo
        } else {
            std::cout << "Posición no válida o casilla ocupada. Intenta de nuevo.\n";
        }
    }
}

// Función principal
int main() {
    // Inicializamos todas las casillas a '0', lo que indica que están vacías
    char tablero[4][4] = {
        {'0', '0', '0', '0'},
        {'0', '0', '0', '0'},
        {'0', '0', '0', '0'},
        {'0', '0', '0', '0'}
    };

    // Puntuación de los jugadores
    int puntos_jugador1 = 0;
    int puntos_jugador2 = 0;

    // Ejecución del juego
    bool jugando = true;
    int jugador_actual = 1;  // Jugador 1 comienza

    while (jugando) {
        // Imprimimos el estado actual del tablero antes de la jugada
        imprimir_tablero(tablero);

        // Ejecutar la jugada del jugador actual
        jugador(tablero, jugador_actual);

        // Imprimimos el tablero después de cada jugada
        imprimir_tablero(tablero);

        // Verificar si el tablero está lleno
        if (tablero_lleno(tablero)) {
            std::cout << "El tablero está lleno. Fin del juego.\n";
            jugando = false;
        }

        // Verificar si se formó "oso" y sumar puntos
        int puntos_ganados = verificar_puntos(tablero);
        if (jugador_actual == 1) {
            puntos_jugador1 += puntos_ganados;
        } else {
            puntos_jugador2 += puntos_ganados;
        }

        // Mostrar puntuación
        std::cout << "Puntuación Jugador 1: " << puntos_jugador1 << std::endl;
        std::cout << "Puntuación Jugador 2: " << puntos_jugador2 << std::endl;

        // Cambiar de jugador
        jugador_actual = (jugador_actual == 1) ? 2 : 1;
    }

    return 0;
}