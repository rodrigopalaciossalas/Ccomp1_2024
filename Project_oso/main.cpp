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
	std::system(CLEAR_COMMAND);  	// Comando para borrar todo el contenido de la pantalla
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
void imprimir_tablero(const char tablero[4][4], int puntos_jugador1, int puntos_jugador2) 
{
	
    std::cout << "\x1B[38;5;46m" << "Bienvenidos al juego del OSO" << "\x1B[m" << std::endl;
    
    std::cout << "\x1B[38;5;33m" << "Puntuacion Jugador 1: " << "\x1B[m" << puntos_jugador1 << "\x1B[m" << std::endl;
    std::cout << "\x1B[38;5;33m" << "Puntuacion Jugador 2: " << "\x1B[m" << puntos_jugador2 << "\x1B[m" << std::endl;
    
    std::cout << "\x1B[38;5;31m" << "------------------------" << std::endl;
    std::cout << "\x1B[38;5;51m" << "      1    2    3    4" << std::endl;

    for (int fila = 0; fila < 4; fila++) 
	{
        std::cout <<"  "<< "\x1B[38;5;51m" << fila + 1 << " ";  
        for (int columna = 0; columna < 4; columna++) 
		{
            std::cout << "\x1B[38;5;86m" << "| " << "\x1B[m" << tablero[fila][columna] << "\x1B[38;5;86m" << " |";
        }
        std::cout << "\x1B[m" << std::endl;
        std::cout << "\x1B[38;5;86m" << "    --------------------" << std::endl;
    }
}

bool tablero_lleno(const char tablero[4][4]) 
{
    for (int fila = 0; fila < 4; fila++) 
	{
        for (int columna = 0; columna < 4; columna++) 
		{
            if (tablero[fila][columna] == ' ') 
			{ 
                return false;
            }
        }
    }
    return true;  
}


int verificar_puntos(const char tablero[4][4]) 
{
    int puntos = 0;

    // Revisar filas
    for (int fila = 0; fila < 4; fila++) 
	{
        for (int columna = 0; columna < 2; columna++) 
		{  
            if (tablero[fila][columna] == 'o' && tablero[fila][columna + 1] == 's' && tablero[fila][columna + 2] == 'o') 
			{
                puntos++;
            }
        }
    }

    // Revisar columnas
    for (int columna = 0; columna < 4; columna++) 
	{
        for (int fila = 0; fila < 2; fila++) 
		{  
            if (tablero[fila][columna] == 'o' && tablero[fila + 1][columna] == 's' && tablero[fila + 2][columna] == 'o') 
			{
                puntos++;
            }
        }
    }

    // Revisar diagonales principales 
    for (int fila = 0; fila < 2; fila++) 
	{
        for (int columna = 0; columna < 2; columna++) 
		{
            if (tablero[fila][columna] == 'o' && tablero[fila + 1][columna + 1] == 's' && tablero[fila + 2][columna + 2] == 'o') 
			{
                puntos++;
            }
        }
    }

    // Revisar diagonales inversas (de derecha a izquierda)
    for (int fila = 0; fila < 2; fila++) 
	{
        for (int columna = 2; columna < 4; columna++) 
		{
            if (tablero[fila][columna] == 'o' && tablero[fila + 1][columna - 1] == 's' && tablero[fila + 2][columna - 2] == 'o') 
			{
                puntos++;
            }
        }
    }

    return puntos;
}

void jugador(char tablero[4][4], int jugador_actual) 
{
    int fila = 0;
    int columna = 0;
    int escoger_variable = 0;

    bool jugada_valida = false;  

    while (!jugada_valida) 
	{
        std::cout << "\x1B[m" <<"Presione "<< "\x1B[38;5;135m" <<"1" 
		<< "\x1B[m" << " si desea ingresar" << "\x1B[38;5;135m" <<" 'o'"
		<< "\x1B[m" << " o " << "\x1B[m" << "presione "
		<< "\x1B[38;5;135m" << "2" << "\x1B[m" <<" si desea ingresar" 
		<< "\x1B[38;5;135m" << "'s'" << "\x1B[m" << ": ";
        std::cin >> escoger_variable;
		std::cout << "\x1B[m";
		std::cout << "Jugador, ingrese fila (1, 2, 3, 4): ";
        std::cin >> fila;
        std::cout << "Jugador, ingrese columna (1, 2, 3, 4): ";
        std::cin >> columna;

        fila--;  
        columna--;  

        // Validar si la posición es válida y está vacía
        if (fila >= 0 && fila < 4 && columna >= 0 && columna < 4 && tablero[fila][columna] == ' ') 
		{
            if (escoger_variable == 1) 
			{
                tablero[fila][columna] = 'o';
            } else if (escoger_variable == 2) 
			{
                tablero[fila][columna] = 's';
            } else {
                std::cout << "Variable no correcta. Intenta de nuevo.";
                continue;
            }
            jugada_valida = true;  
			
        }
		else 
		{
            std::cout << "Posicion no válida o casilla ocupada. Intenta de nuevo.";
        }
    }
}

int main() 
{

    char tablero[4][4] = 
	{
        {' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' '}
    };

    // Puntuación de los jugadores
    int puntos_jugador1 = 0;
    int puntos_jugador2 = 0;

    // Ejecución del juego
    bool jugando = true;
    int jugador_actual = 1;  
	
    
	while (jugando) 
	{
        bool repetir_turno = false; 
        
		presentacion();
        
		imprimir_tablero(tablero, puntos_jugador1, puntos_jugador2);

        jugador(tablero, jugador_actual);

        int puntos_ganados = verificar_puntos(tablero);
        if (puntos_ganados > 0) 
		{

            // Asignar puntos al jugador actual
            if (jugador_actual == 1) 
			{
                puntos_jugador1 += puntos_ganados;
            } 
			else 
			{
                puntos_jugador2 += puntos_ganados;
            }
            std::cout << "¡Jugador " << jugador_actual << " formó 'oso' y ganó " << puntos_ganados << " puntos!\n";
            repetir_turno = true; 
        }

      
        imprimir_tablero(tablero, puntos_jugador1, puntos_jugador2);

      
        if (tablero_lleno(tablero)) 
		{
            std::cout << "El tablero esta lleno. Fin del juego.";
            jugando = false;
        }

      
        if (!repetir_turno) 
		{
            jugador_actual = (jugador_actual == 1) ? 2 : 1;
        } 
		else 
		{
            repetir_turno = false;  
		}
	}

    return 0;
}
/*
void tablero(char a_teblero, char b_teblero, char c_teblero, char d_teblero, 
			 char e_teblero, char f_teblero, char g_teblero, char h_teblero,
			 char i_teblero, char j_teblero, char k_teblero, char l_teblero, 
			 char m_teblero, char n_teblero, char o_teblero, char p_teblero)
{

		char tablero[4][4] =
	{
		{a_teblero,b_teblero,c_teblero,d_teblero},
		{e_teblero,f_teblero,g_teblero,h_teblero},
		{i_teblero,j_teblero,k_teblero,l_teblero},
		{m_teblero,n_teblero,o_teblero,p_teblero},
	};
	std::system(CLEAR_COMMAND);
	//si encuentras agregar el comando de system para centrar texto
	std::cout << "\x1B[38;5;46m" << "Bienvenidos al juego del OSO" << "\x1B[m" << std::endl;
	std::cout << "\x1B[38;5;31m" << "--------------------" << std::endl;
	std::cout << "\x1B[38;5;21m" << "  A    B    C   D" << std::endl;
	for (int fila = 0; fila < 4; fila++) 
	{
		for (int columna = 0; columna < 4; columna++)
		{
			std::cout << "\x1B[38;5;31m" << "| " << "\x1B[m" << tablero[fila][columna] << "\x1B[38;5;31m" << " |";
		}
		std::cout << "\x1B[m";
		std::cout << std::endl;
		std::cout << "\x1B[38;5;31m" << "--------------------" << std::endl;
		std::cout << "\x1B[m";
	}
}

void jugador(char& a_teblero, char& b_teblero, char& c_teblero, char& d_teblero, 
             char& e_teblero, char& f_teblero, char& g_teblero, char& h_teblero, 
             char& i_teblero, char& j_teblero, char& k_teblero, char& l_teblero, 
             char& m_teblero, char& n_teblero, char& o_teblero, char& p_teblero) 
{
	//fila o columna para ingresar el usuario
	char orizontal{}, vertical {};


	//escojer_variable
	int escojer_variable = 0;
	int errores = 0;
	
	 do
	{	
		std::cout << "precione 1 si desea ingresar o precione 2 si desea ingresar s" << std::endl;
		std::cin >> escojer_variable;
        std::cout << "Jugador, ingrese fila (A, B, C ,D): ";
        std::cin >> orizontal;
		std::cout << "Jugador, columna (1, 2, 3, 4): ";
        std::cin >> vertical;
        switch (orizontal) 
		{
            case 'A':
            case 'a':
                if (vertical == '1' && a_teblero == '0') 
				{ 
					if(escojer_variable == 1)
					{	
						a_teblero = 'o';
					}
					else if(escojer_variable == 2)
					{	
						a_teblero = 's';
					}
					else 
					{
						std::cout << "variable no correcta" << std::endl;
						errores++;
					}
				}
                else if (vertical == '2' && b_teblero == '0') 
				{ 
					if(escojer_variable == 1)
					{	
						a_teblero = 'o';
					}
					else if(escojer_variable == 2)
					{	
						a_teblero = 's';
					}
					else 
					{
						std::cout << "variable no correcta" << std::endl;
						errores++;
					}
				}

                else if (vertical == '3' && c_teblero == '0') 
				{ 
					if(escojer_variable == 1)
					{	
						a_teblero = 'o';
					}
					else if(escojer_variable == 2)
					{	
						a_teblero = 's';
					}
					else 
					{
						std::cout << "variable no correcta" << std::endl;
						errores++;
					}
				}
				else if (vertical == '4' && d_teblero == '0') 
				{
					if(escojer_variable == 1)
					{	
						a_teblero = 'o';
					}
					else if(escojer_variable == 2)
					{	
						a_teblero = 's';
					}
					else 
					{
						std::cout << "variable no correcta" << std::endl;
						errores++;
					} 
				}
				break;
            case 'B':
            case 'b':
                if (vertical == '1' && e_teblero == '0') 
				{ 
					if(escojer_variable == 1)
					{	
						a_teblero = 'o';
						break;
					}
					else if(escojer_variable == 2)
					{	
						a_teblero = 's';
						break;
					}
					else 
					{
						std::cout << "variable no correcta" << std::endl;
						errores++;
						break;
					}
				}
                else if (vertical == '2' && f_teblero == '0') 
				{ 
					if(escojer_variable == 1)
					{	
						a_teblero = 'o';
						break;
					}
					else if(escojer_variable == 2)
					{	
						a_teblero = 's';
						break;
					}
					else 
					{
						std::cout << "variable no correcta" << std::endl;
						errores++;
						break;
					} 
				}
                else if (vertical == '3' && g_teblero == '0') 
				{ 
					if(escojer_variable == 1)
					{	
						a_teblero = 'o';
						break;
					}
					else if(escojer_variable == 2)
					{	
						a_teblero = 's';
						break;
					}
					else 
					{
						std::cout << "variable no correcta" << std::endl;
						errores++;
						break;
					} 
				}
				else if (vertical == '4' && h_teblero == '0') 
				{ 
					if(escojer_variable == 1)
					{	
						a_teblero = 'o';
						break;
					}
					else if(escojer_variable == 2)
					{	
						a_teblero = 's';
						break;
					}
					else 
					{
						std::cout << "variable no correcta" << std::endl;
						errores++;
						break;
					} 
				}
            case 'C':
            case 'c':
                if (vertical == '1' && i_teblero == '0') 
				{ 
					if(escojer_variable == 1)
					{	
						a_teblero = 'o';
						break;
					}
					else if(escojer_variable == 2)
					{	
						a_teblero = 's';
						break;
					}
					else 
					{
						std::cout << "variable no correcta" << std::endl;
						errores++;
						break;
					} 
				}
                else if (vertical == '2' && j_teblero == '0') 
				{ 
					if(escojer_variable == 1)
					{	
						a_teblero = 'o';
						break;
					}
					else if(escojer_variable == 2)
					{	
						a_teblero = 's';
						break;
					}
					else 
					{
						std::cout << "variable no correcta" << std::endl;
						errores++;
						break;
					} 
				}
                else if (vertical == '3' && k_teblero == '0')
				{ 	
					if(escojer_variable == 1)
					{	
						a_teblero = 'o';
						break;
					}
					else if(escojer_variable == 2)
					{	
						a_teblero = 's';
						break;
					}
					else 
					{
						std::cout << "variable no correcta" << std::endl;
						errores++;
						break;
					} 
				}
				else if (vertical == '3' && l_teblero == '0') 
				{ 
					if(escojer_variable == 1)
					{	
						l_teblero = 'o';
						break;
					}
					else if(escojer_variable == 2)
					{	
						l_teblero = 's';
						break;
					}
					else 
					{
						std::cout << "variable no correcta" << std::endl;
						errores++;
						break;
					} 
				}
			case 'D':
            case 'd':
                if (vertical == '1' && m_teblero == '0') 
				{ 
					if(escojer_variable == 1)
					{	
						m_teblero = 'o';
						break;
					}
					else if(escojer_variable == 2)
					{	
						m_teblero = 's';
						break;
					}
					else 
					{
						std::cout << "variable no correcta" << std::endl;
						errores++;
						break;
					}
				}
                else if (vertical == '2' && n_teblero == '0') 
				{ 
					if(escojer_variable == 1)
					{	
						n_teblero = 'o';
						break;
					}
					else if(escojer_variable == 2)
					{	
						n_teblero = 's';
						break;
					}
					else 
					{
						std::cout << "variable no correcta" << std::endl;
						errores++;
						break;
					} 
				}
                else if (vertical == '3' && o_teblero == '0')
				{ 
					if(escojer_variable == 1)
					{	
						o_teblero = 'o';
						break;
					}
					else if(escojer_variable == 2)
					{	
						o_teblero = 's';
						break;
					}
					else 
					{
						std::cout << "variable no correcta" << std::endl;
						errores++;
						break;
					} 
				}
				else if (vertical == '3' && p_teblero == '0') 
				{ 
					if(escojer_variable == 1)
					{	
						p_teblero = 'o';
						break;
					}
					else if(escojer_variable == 2)
					{	
						p_teblero = 's';
						break;
					}
					else 
					{
						std::cout << "variable no correcta" << std::endl;
						errores++;
						break;
					}
				}
			default:
				std::cout << "Entrada no valida tienes " << errores << " intentos"<<std::endl;
				errores++;
				break;
        }
	 }while (errores <3);
        std::cout << "Casilla ocupada o invalida. Tienes " << (3 - errores) << " intentos restantes." << std::endl;

}

int main() {
    // Inicializamos todas las casillas a '0', lo que indica que están vacías
    char a_teblero = '0', b_teblero = '0', c_teblero = '0', d_teblero = '0';
    char e_teblero = '0', f_teblero = '0', g_teblero = '0', h_teblero = '0';
    char i_teblero = '0', j_teblero = '0', k_teblero = '0', l_teblero = '0';
    char m_teblero = '0', n_teblero = '0', o_teblero = '0', p_teblero = '0';

    // Ejecución del juego
    bool jugando = true;

    while (jugando) {
        // Imprimimos el estado actual del tablero
        tablero(a_teblero, b_teblero, c_teblero, d_teblero, 
                e_teblero, f_teblero, g_teblero, h_teblero, 
			    i_teblero, j_teblero, k_teblero, l_teblero, 
				m_teblero, n_teblero, o_teblero, p_teblero);

        // Ejecutar la jugada del jugador
        jugador(a_teblero, b_teblero, c_teblero, d_teblero, 
                e_teblero, f_teblero, g_teblero, h_teblero, 
                i_teblero, j_teblero, k_teblero, l_teblero, 
                m_teblero, n_teblero, o_teblero, p_teblero);

        // Después de cada jugada, puedes agregar lógica para verificar si hay un ganador o si el tablero está lleno
        // Aquí podrías agregar una función de verificación del estado del juego

        // Por ejemplo, puedes terminar el juego si todas las casillas están ocupadas
        if (a_teblero != '0' && b_teblero != '0' && c_teblero != '0' && d_teblero != '0' &&
            e_teblero != '0' && f_teblero != '0' && g_teblero != '0' && h_teblero != '0' &&
            i_teblero != '0' && j_teblero != '0' && k_teblero != '0' && l_teblero != '0' &&
            m_teblero != '0' && n_teblero != '0' && o_teblero != '0' && p_teblero != '0') {
            std::cout << "El tablero está lleno. Fin del juego.\n";
            jugando = false;
        }
    }

    return 0;
}
*/









