#include <iostream>
#include <cmath>
#include <cstdlib>  
#include <ctime>

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
	std::cout << "\n !! juego gato \n\n";

	return;
}

void imprimir_tablero(char casilla_01, char casilla_02, char casilla_03,char casilla_04, char casilla_05, char casilla_06,char casilla_07, char casilla_08, char casilla_09, char casilla_10, char casilla_11, char casilla_12, char casilla_13, char casilla_14, char casilla_15, char casilla_16) 
{

		std::cout <<"      1   2   3   4" << std::endl;
		std::cout <<"  A | "<< casilla_01 << " | "<< casilla_02 << " | " << casilla_03 <<" | " << casilla_04 <<" |" << std::endl;
		std::cout <<"------------------"<< std::endl;
		std::cout <<"  B | "<< casilla_05 << " | "<< casilla_06 << " | " << casilla_07 <<" | " << casilla_08 <<" |" << std::endl;
		std::cout <<"------------------"<< std::endl;
		std::cout <<"  C | "<< casilla_09 << " | "<< casilla_10 << " | " << casilla_11 <<" | " << casilla_12 <<" |"<< std::endl;
		std::cout <<"------------------"<< std::endl;
		std::cout <<"  D | "<< casilla_13 << " | "<< casilla_14 << " | " << casilla_15 <<" | " << casilla_16 <<" |"<< std::endl;
	return;	
}
	
bool verificar_ganador(char casilla_01, char casilla_02, char casilla_03,char casilla_04, char casilla_05, char casilla_06,char casilla_07, char casilla_08, char casilla_09, char casilla_10, char casilla_11, char casilla_12, char casilla_13, char casilla_14, char casilla_15, char casilla_16) 
{
			return ( (casilla_01 == 'x' && casilla_02 == 'x' && casilla_03 == 'x' && casilla_04 == 'x') ||
					 (casilla_05 == 'x' && casilla_06 == 'x' && casilla_07 == 'x' && casilla_08 == 'x') ||
					 (casilla_09 == 'x' && casilla_10 == 'x' && casilla_11 == 'x' && casilla_12 == 'x') ||
					 (casilla_13 == 'x' && casilla_14 == 'x' && casilla_15 == 'x' && casilla_16 == 'x') ||
					 (casilla_01 == 'x' && casilla_05 == 'x' && casilla_09 == 'x' && casilla_13 == 'x') ||
					 (casilla_02 == 'x' && casilla_06 == 'x' && casilla_10 == 'x' && casilla_14 == 'x') ||
					 (casilla_03 == 'x' && casilla_07 == 'x' && casilla_11 == 'x' && casilla_15 == 'x') ||
					 (casilla_04 == 'x' && casilla_08 == 'x' && casilla_12 == 'x' && casilla_16 == 'x') ||
					 (casilla_01 == 'x' && casilla_06 == 'x' && casilla_11 == 'x' && casilla_16 == 'x') ||
					 (casilla_04 == 'x' && casilla_07 == 'x' && casilla_10 == 'x' && casilla_13 == 'x') ||
					 //casos en l 
					 (casilla_01 == 'x' && casilla_05 == 'x' && casilla_09 == 'x' && casilla_10 == 'x') ||
					 (casilla_02 == 'x' && casilla_03 == 'x' && casilla_04 == 'x' && casilla_08 == 'x') ||
					 (casilla_09 == 'x' && casilla_13 == 'x' && casilla_14 == 'x' && casilla_15 == 'x') ||
					 
					 (casilla_01 == '0' && casilla_02 == '0' && casilla_03 == '0' && casilla_04 == 'x') ||
					 (casilla_05 == '0' && casilla_06 == '0' && casilla_07 == '0' && casilla_08 == 'x') ||
					 (casilla_09 == '0' && casilla_10 == '0' && casilla_11 == '0' && casilla_12 == 'x') ||
					 (casilla_13 == '0' && casilla_14 == '0' && casilla_15 == '0' && casilla_16 == 'x') ||
					 (casilla_01 == '0' && casilla_05 == '0' && casilla_09 == '0' && casilla_13 == 'x') ||
					 (casilla_02 == '0' && casilla_06 == '0' && casilla_10 == '0' && casilla_14 == 'x') ||
					 (casilla_03 == '0' && casilla_07 == '0' && casilla_11 == '0' && casilla_15 == 'x') ||
					 (casilla_04 == '0' && casilla_08 == '0' && casilla_12 == '0' && casilla_16 == 'x') ||
					 (casilla_01 == '0' && casilla_06 == '0' && casilla_11 == '0' && casilla_16 == 'x') ||
					 (casilla_04 == '0' && casilla_07 == '0' && casilla_10 == '0' && casilla_13 == 'x') ||
					 //casos en l 
					 (casilla_01 == '0' && casilla_05 == '0' && casilla_09 == '0' && casilla_10 == 'x') ||
					 (casilla_02 == '0' && casilla_03 == '0' && casilla_04 == '0' && casilla_08 == 'x') ||
					 (casilla_09 == '0' && casilla_13 == '0' && casilla_14 == '0' && casilla_15 == 'x'));
	 
	 
}
bool verificar_empate(char casilla_01, char casilla_02, char casilla_03,char casilla_04, char casilla_05, char casilla_06,char casilla_07, char casilla_08, char casilla_09, char casilla_10, char casilla_11, char casilla_12, char casilla_13, char casilla_14, char casilla_15, char casilla_16) 
{
	return (casilla_01 != 'a' && casilla_02 != 'b' && casilla_03 != 'c' &&
            casilla_04 != 'd' && casilla_05 != 'e' && casilla_06 != 'f' &&
            casilla_07 != 'g' && casilla_08 != 'h' && casilla_09 != 'i' &&
			casilla_10 != 'j' && casilla_11 != 'k' && casilla_12 != 'l' &&
			casilla_13 != 'm' && casilla_14 != 'n' && casilla_15 != 'p' &&
			casilla_16 != 'o');
}

void jugador_1(char& casilla_01, char& casilla_02, char& casilla_03, char& casilla_04, char& casilla_05, char& casilla_06, char& casilla_07, char& casilla_08, char& casilla_09, char& casilla_10, char& casilla_11, char& casilla_12, char& casilla_13, char& casilla_14, char& casilla_15, char& casilla_16) 
{
    int errores = 0;
    char jugada;

    do 
	{
        std::cout << "Jugador 1, elige una casilla (a-p): ";
        std::cin >> jugada;
        
        switch (jugada) 
		{
            case 'a': 
				if (casilla_01 == 'a') 
				{ 
					casilla_01 ='x';
					return; 
				
				} 
			break;
            case 'b': 
				if (casilla_02 == 'b') 
				{ 
					casilla_02 = 'x'; 
					return; 
				}
			break;
            case 'c': 
				if (casilla_03 == 'c') 
				{ 
					casilla_03 = 'x';
					return; 
				}
			break;
            case 'd': 
				if (casilla_04 == 'd') 
				{ 
					casilla_04 = 'x';
					return; 
				} 
			break;
            case 'e': 
				if (casilla_05 == 'e') 
				{ 
					casilla_05 = 'x';
					return;
				} 
			break;
            case 'f': 
				if (casilla_06 == 'f') 
				{ 
					casilla_06 = 'x';
					return;
				}
			break;
            case 'g': 
				if (casilla_07 == 'g') 
				{ 
					casilla_07 = 'x';
					return;
				} 
			break;
            case 'h': 
				if (casilla_08 == 'h') 
				{ 
					casilla_08 = 'x';
					return;
				} 
			break;
            case 'i': 
				if (casilla_09 == 'i') 
				{ 
					casilla_09 = 'x';
					return;
				} 	
			break;
			case 'j': 
				if (casilla_10 == 'j') 
				{ 
					casilla_10 = 'x';
					return;
				} 	
			break;
			case 'k': 
				if (casilla_11 == 'k') 
				{ 
					casilla_11 = 'x';
					return;
				} 	
			break;
			case 'l': 
				if (casilla_12 == 'l') 
				{ 
					casilla_12 = 'x';
					return;
				} 	
			break;
			case 'm': 
				if (casilla_13 == 'm') 
				{ 
					casilla_13 = 'm';
					return;
				} 	
			break;
			case 'n': 
				if (casilla_14 == 'n') 
				{ 
					casilla_14 = 'x';
					return;
				} 	
			break;
			case 'p': 
				if (casilla_15 == 'p') 
				{ 
					casilla_15 = 'x';
					return;
				} 	
			break;
			case 'o': 
				if (casilla_16 == 'o') 
				{ 
					casilla_16 = 'x';
					return;
				} 	
			break;
            default: 
                std::cout << "Entrada no válida. Intenta de nuevo." << std::endl;
                errores++;
                break;
        }
        std::cout << "Casilla ocupada o inválida. Tienes " << (3 - errores) << " intentos restantes." << std::endl;
    }while (errores < 3);
	std::cout << "Jugador 1 descalificado por errores!" << std::endl;
    exit(0);
}

void jugador_2(char& casilla_01, char& casilla_02, char& casilla_03, char& casilla_04, char& casilla_05, char& casilla_06, char& casilla_07, char& casilla_08, char& casilla_09, char& casilla_10, char& casilla_11, char& casilla_12, char& casilla_13, char& casilla_14, char& casilla_15, char& casilla_16) 
{
    char A_1, A_2;
    int errores = 0;

    do  
	{
        std::cout << "Jugador 2, ingresa fila (A, B, C): ";
        std::cin >> A_1;
		std::cout << "Jugador 2, columna (1, 2, 3): ";
        std::cin >> A_2;
        switch (A_1) {
            case 'A':
            case 'a':
                if (A_2 == '1' && casilla_01 == 'a') 
				{ 
				casilla_01 = '0'; 
				
				return; 
				
				}
                else if (A_2 == '2' && casilla_02 == 'b') 
				{ 
				casilla_02 = '0'; 
				
				return; 
				
				}
                else if (A_2 == '3' && casilla_03 == 'c') 
				{ 
				casilla_03 = '0'; 
				return; 
				}
				else if (A_2 == '4' && casilla_04 == 'd') 
				{ 
				casilla_04 = '0'; 
				
				return; 
				}
                break;
            case 'B':
            case 'b':
				if (A_2 == '1' && casilla_05 == 'e') 
				{ 
				casilla_05 = '0'; 
				
				return; 
				
				}
                else if (A_2 == '2' && casilla_06 == 'f') 
				{ 
				casilla_06 = '0';
				
				return;
				
				}
				else if (A_2 == '3' && casilla_07 == 'g') 
				{ 
				casilla_07 = '0';
				return; 
				}
				else if (A_2 == '4' && casilla_08 == 'h') 
				{ 
				casilla_08 = '0'; 
				
				return; 
				}
                break;
            case 'C':
            case 'c':
                if (A_2 == '1' && casilla_09 == 'i')
				{ 
				casilla_09 = '0'; 
				
				return; 
				
				}
				else if (A_2 == '2' && casilla_10 == 'j')
				{ 
				casilla_10 = '0'; 
				
				return; 
				
				}
				else if (A_2 == '3' && casilla_11 == 'k')
				{ 
				casilla_10 = '0'; 
				
				return;
				}				
				else if (A_2 == '4' && casilla_12 == 'l')
				{ 
				casilla_10 = '0'; 
	
				return; 
				}
                break;
			case 'D':
            case 'd':
                if (A_2 == '1' && casilla_13 == 'm')
				{ 
				casilla_13 = '0'; 
		
				return; 
				
				}
				else if (A_2 == '2' && casilla_14 == 'n')
				{ 
				casilla_14 = '0'; 
				return; 
				
				}
				else if (A_2 == '3' && casilla_15 == 'p')
				{ 
				casilla_15 = '0'; 
				return; 
				}
				else if (A_2 == '4' && casilla_16 == 'o')
				{ 
				casilla_16 = '0';
				return; 
				}
                break;
            default:
                std::cout << "Entrada no válida. Intenta de nuevo." << std::endl;
                errores++;
                break;
        }
        std::cout << "Casilla ocupada o inválida. Tienes " << (3 - errores) << " intentos restantes." << std::endl;
    }while (errores < 3);
		
}

void dificultad_maquina(bool jugada_realizada, char& casilla_01, char& casilla_02, char& casilla_03, char& casilla_04, char& casilla_05, char& casilla_06, char& casilla_07, char& casilla_08, char& casilla_09, char& casilla_10, char& casilla_11, char& casilla_12, char& casilla_13, char& casilla_14, char& casilla_15, char& casilla_16) 
{
	
    srand(static_cast<unsigned int>(time(0)));
    int indice_aleatorio;
	
	jugada_realizada =false;
    
	while (!jugada_realizada)
	{
		indice_aleatorio = rand() % 15; 

		switch(indice_aleatorio)
		{
			case 0: 
				if (casilla_01 != 'x' && casilla_01 != '0') 
				{                    
					casilla_01 = '0';
					jugada_realizada = true; 
				}
				break;
			case 1: 
				if (casilla_02 != 'x' && casilla_02 != '0') 
				{                    
					casilla_02 = '0';
					jugada_realizada = true;
				}
				break;
			case 2: 
				if (casilla_03 != 'x' && casilla_03 != '0') 
				{                    
					casilla_03 = '0';
					jugada_realizada = true;
				}
				break;
			case 3: 
				if (casilla_04 != 'x' && casilla_04 != '0') 
				{                    
					casilla_04 = '0';
					jugada_realizada = true;
				}
				break;
			case 4: 
				if (casilla_05 != 'x' && casilla_05 != '0') 
				{                    
					casilla_05 = '0';
					jugada_realizada = true;
				}
				break;
			case 5: 
				if (casilla_06 != 'x' && casilla_06 != '0') 
				{                    
					casilla_06 = '0';
					jugada_realizada = true;
				}
				break;
			case 6: 
				if (casilla_07 != 'x' && casilla_07 != '0') 
				{                    
					casilla_07 = '0';
					jugada_realizada = true;
				}
				break;
			case 7: 
				if (casilla_08 != 'x' && casilla_08 != '0') 
				{                    
					casilla_08 = '0';
					jugada_realizada = true;
				}
				break;
			case 8: 
				if (casilla_09 != 'x' && casilla_09 != '0') 
				{                    
					casilla_09 = '0';
					jugada_realizada = true;
				}
				break;
			case 9: 
				if (casilla_10 != 'x' && casilla_10 != '0') 
				{                    
					casilla_10 = '0';
					jugada_realizada = true;
				}
				break;
			case 10: 
				if (casilla_11 != 'x' && casilla_11 != '0') 
				{                    
					casilla_11 = '0';
					jugada_realizada = true;
				}
			case 11: 
				if (casilla_12 != 'x' && casilla_12 != '0') 
				{                    
					casilla_12 = '0';
					jugada_realizada = true;
				}
				break;
			case 12: 
				if (casilla_13 != 'x' && casilla_13 != '0') 
				{                    
					casilla_13 = '0';
					jugada_realizada = true;
				}
				break;
			case 13: 
				if (casilla_14 != 'x' && casilla_14 != '0') 
				{                    
					casilla_14 = '0';
					jugada_realizada = true;
				}
				break;		
			case 14: 
				if (casilla_15 != 'x' && casilla_15 != '0') 
				{                    
					casilla_15 = '0';
					jugada_realizada = true;
				}
				break;		
			case 15: 
				if (casilla_16 != 'x' && casilla_16 != '0') 
				{                    
					casilla_16 = '0';
					jugada_realizada = true;
				}
				break;		
		}
	}

	return;
}
int main() 
{
	
	
    char casilla_01 = 'a', casilla_02 = 'b', casilla_03 = 'c', casilla_04 = 'd';
    char casilla_05 = 'e', casilla_06 = 'f', casilla_07 = 'g', casilla_08 = 'h';
    char casilla_09 = 'i', casilla_10 = 'j', casilla_11 = 'k', casilla_12 = 'l';
	char casilla_13 = 'm', casilla_14 = 'n', casilla_15 = 'p', casilla_16 = 'o';
    
	bool jugada_realizada = false;
	
	imprimir_tablero(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09, casilla_10, casilla_11, casilla_12, casilla_13, casilla_14, casilla_15, casilla_16);
           
	
    std::cout << "Seleccione modo de juego: " << std::endl;
    std::cout << "1. Jugar vs Jugador 2" << std::endl;
    std::cout << "2. Jugar vs Maquina MODO FACIL" << std::endl;
    int modo;
    std::cin >> modo;

    if (modo == 1) 
	{
        while (true) {
            imprimir_tablero(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09, casilla_10, casilla_11, casilla_12, casilla_13, casilla_14, casilla_15, casilla_16);
    
            jugador_1(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09, casilla_10, casilla_11, casilla_12, casilla_13, casilla_14, casilla_15, casilla_16);
    
            if (verificar_ganador(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09, casilla_10, casilla_11, casilla_12, casilla_13, casilla_14, casilla_15, casilla_16)) {
                std::cout << "Jugador 1 gana!" << std::endl;
                break; // Aquí está correcto
            }

            if (verificar_empate(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09, casilla_10, casilla_11, casilla_12, casilla_13, casilla_14, casilla_15, casilla_16)) {
                std::cout << "Es un empate!" << std::endl;
                break; // Aquí también está correcto
            }

            // Lógica para el segundo jugador
            imprimir_tablero(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09, casilla_10, casilla_11, casilla_12, casilla_13, casilla_14, casilla_15, casilla_16);
			
			jugador_2(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09, casilla_10, casilla_11, casilla_12, casilla_13, casilla_14, casilla_15, casilla_16);

            if (verificar_ganador(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09, casilla_10, casilla_11, casilla_12, casilla_13, casilla_14, casilla_15, casilla_16)) {
                std::cout << "Jugador 2 gana!" << std::endl;
                break; // Aquí también está correcto
            }

            if (verificar_empate(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09, casilla_10, casilla_11, casilla_12, casilla_13, casilla_14, casilla_15, casilla_16)) {
                std::cout << "Es un empate!" << std::endl;
                break; // Aquí también está correcto
            }
        }
	}
	else if (modo == 2) 
	{

		imprimir_tablero(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09, casilla_10, casilla_11, casilla_12, casilla_13, casilla_14, casilla_15, casilla_16);
		std::cout << "-------------------------------------" << std::endl;

		while (true) 
		{
			jugador_1(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09, casilla_10, casilla_11, casilla_12, casilla_13, casilla_14, casilla_15, casilla_16);
    
			// Asegúrate de que la máquina juegue
			dificultad_maquina(jugada_realizada, casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09, casilla_10, casilla_11, casilla_12, casilla_13, casilla_14, casilla_15, casilla_16);

			imprimir_tablero(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09, casilla_10, casilla_11, casilla_12, casilla_13, casilla_14, casilla_15, casilla_16);
    
			if (verificar_ganador(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09, casilla_10, casilla_11, casilla_12, casilla_13, casilla_14, casilla_15, casilla_16)) {
				std::cout << "Jugador 1 gana!" << std::endl;
				break;
			}

			if (verificar_empate(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09, casilla_10, casilla_11, casilla_12, casilla_13, casilla_14, casilla_15, casilla_16)) {
				std::cout << "Es un empate!" << std::endl;
				break;
			}
		}
	}
    else
	{
        std::cout << "No es correcto el modo" << std::endl;
    }
    return 0;
}	





