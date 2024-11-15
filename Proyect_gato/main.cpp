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

void imprimir_tablero(char casilla_01, char casilla_02, char casilla_03,char casilla_04, char casilla_05, char casilla_06,char casilla_07, char casilla_08, char casilla_09) 
{

		std::cout <<"      1   2   3" << std::endl;
		std::cout <<"  A | "<< casilla_01 << " | "<< casilla_02 << " | " << casilla_03 <<" |" << std::endl;
		std::cout <<"------------------"<< std::endl;
		std::cout <<"  B | "<< casilla_04 << " | "<< casilla_05 << " | " << casilla_06 <<" |" << std::endl;
		std::cout <<"------------------"<< std::endl;
		std::cout <<"  C | "<< casilla_07 << " | "<< casilla_08 << " | " << casilla_09 <<" |" << std::endl;
	return;	
}
	
bool verificar_ganador(char casilla_01, char casilla_02, char casilla_03, char casilla_04, char casilla_05, char casilla_06, char casilla_07, char casilla_08, char casilla_09) 
{
			return ( (casilla_01 == 'x' && casilla_02 == 'x' && casilla_03 == 'x') ||
					 (casilla_04 == 'x' && casilla_05 == 'x' && casilla_06 == 'x') ||
					 (casilla_07 == 'x' && casilla_08 == 'x' && casilla_09 == 'x') ||
					 (casilla_01 == 'x' && casilla_04 == 'x' && casilla_07 == 'x') ||
					 (casilla_02 == 'x' && casilla_05 == 'x' && casilla_08 == 'x') ||
					 (casilla_03 == 'x' && casilla_06 == 'x' && casilla_09 == 'x') ||
					 (casilla_01 == 'x' && casilla_05 == 'x' && casilla_09 == 'x') ||
					 (casilla_03 == 'x' && casilla_05 == 'x' && casilla_07 == 'x') ||
					 (casilla_01 == '0' && casilla_02 == '0' && casilla_03 == '0') ||
					 (casilla_04 == '0' && casilla_05 == '0' && casilla_06 == '0') ||
					 (casilla_07 == '0' && casilla_08 == '0' && casilla_09 == '0') ||
					 (casilla_01 == '0' && casilla_04 == '0' && casilla_07 == '0') ||
					 (casilla_02 == '0' && casilla_05 == '0' && casilla_08 == '0') ||
					 (casilla_03 == '0' && casilla_06 == '0' && casilla_09 == '0') ||
					 (casilla_01 == '0' && casilla_05 == '0' && casilla_09 == '0') ||
					 (casilla_03 == '0' && casilla_05 == '0' && casilla_07 == '0')
					);
	 
	 
}
bool verificar_empate(char casilla_01, char casilla_02, char casilla_03, char casilla_04, char casilla_05, char casilla_06, char casilla_07, char casilla_08, char casilla_09)
{  
	return (casilla_01 != '1' && casilla_02 != '2' && casilla_03 != '3' &&
            casilla_04 != '4' && casilla_05 != '5' && casilla_06 != '6' &&
            casilla_07 != '7' && casilla_08 != '8' && casilla_09 != '9');
}

void jugador_1(char& casilla_01, char& casilla_02, char& casilla_03, char& casilla_04, char& casilla_05, char& casilla_06, char& casilla_07, char& casilla_08, char& casilla_09) 
{
    int errores = 0;
    char jugada;

    do 
	{
        std::cout << "Jugador 1, elige una casilla (1-9): ";
        std::cin >> jugada;
        
        switch (jugada) 
		{
            case '1': 
				if (casilla_01 == '1') 
				{ 
					casilla_01 ='x';
					return; 
				
				} 
			break;
            case '2': 
				if (casilla_02 == '2') 
				{ 
					casilla_02 = 'x'; 
					return; 
				}
			break;
            case '3': 
				if (casilla_03 == '3') 
				{ 
					casilla_03 = 'x';
					return; 
				}
			break;
            case '4': 
				if (casilla_04 == '4') 
				{ 
					casilla_04 = 'x';
					return; 
				} 
			break;
            case '5': 
				if (casilla_05 == '5') 
				{ 
					casilla_05 = 'x';
					return;
				} 
			break;
            case '6': 
				if (casilla_06 == '6') 
				{ 
					casilla_06 = 'x';
					return;
				}
			break;
            case '7': 
				if (casilla_07 == '7') 
				{ 
					casilla_07 = 'x';
					return;
				} 
			break;
            case '8': 
				if (casilla_08 == '8') 
				{ 
					casilla_08 = 'x';
					return;
				} 
			break;
            case '9': 
				if (casilla_09 == '9') 
				{ 
					casilla_09 = 'x';
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

void jugador_2(char& casilla_01, char& casilla_02, char& casilla_03, char& casilla_04, char& casilla_05, char& casilla_06, char& casilla_07, char& casilla_08, char& casilla_09) 
{
    char A_1, A_2;
    int errores = 0;

    while (errores < 3) {
        std::cout << "Jugador 2, ingresa fila (A, B, C): ";
        std::cin >> A_1;
		std::cout << "Jugador 2, columna (1, 2, 3): ";
        std::cin >> A_2;
        switch (A_1) {
            case 'A':
            case 'a':
                if (A_2 == '1' && casilla_01 == '1') 
				{ 
				casilla_01 = '0'; 
				
				return; 
				
				}
                else if (A_2 == '2' && casilla_02 == '2') 
				{ 
				casilla_02 = '0'; 
				
				return; 
				
				}
                else if (A_2 == '3' && casilla_03 == '3') 
				{ 
				casilla_03 = '0'; 
				return; 
				}
                break;
            case 'B':
            case 'b':
                if (A_2 == '1' && casilla_04 == '4') 
				{ 
				casilla_04 = '0'; 
				
				return; 
				
				}
                else if (A_2 == '2' && casilla_05 == '5') 
				{ 
				casilla_05 = '0'; 
				
				return; 
				
				}
                else if (A_2 == '3' && casilla_06 == '6') 
				{ 
				casilla_06 = '0';
				
				return;
				
				}
                break;
            case 'C':
            case 'c':
                if (A_2 == '1' && casilla_07 == '7') 
				{ 
				casilla_07 = '0';
				
				return; 
				
				}
                else if (A_2 == '2' && casilla_08 == '8') 
				{ 
				casilla_08 = '0'; 
				
				return; 
				
				}
                else if (A_2 == '3' && casilla_09 == '9')
				{ 
				casilla_09 = '0'; 
				
				return; 
				
				}
				
                break;
            default:
                std::cout << "Entrada no válida. Intenta de nuevo." << std::endl;
                errores++;
                break;
        }
        std::cout << "Casilla ocupada o inválida. Tienes " << (3 - errores) << " intentos restantes." << std::endl;
    }
    std::cout << "¡Jugador 2 descalificado por errores!" << std::endl;
    exit(0);
}

void dificultad_maquina(bool jugada_realizada,int dificultad, char& casilla_01, char& casilla_02, char& casilla_03, char& casilla_04, char& casilla_05, char& casilla_06, char& casilla_07, char& casilla_08, char& casilla_09) 
{
	
    srand(static_cast<unsigned int>(time(0)));
    int indice_aleatorio;
	
	jugada_realizada =false;
    
	if (dificultad == 1)
    {
        while (!jugada_realizada)
        {
            indice_aleatorio = rand() % 9; 

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
            }
        }
    }
	
	else if (dificultad==2)
	{
	
		if((((casilla_04=='x' && casilla_07=='x')||(casilla_07=='x' && casilla_04=='x'))&& casilla_01=='1')||(((casilla_02=='x' && casilla_03=='x')||(casilla_03=='x' && casilla_02=='x'))&& casilla_01=='1')||(((casilla_05=='x' && casilla_09=='x')||(casilla_09=='x' && casilla_05=='x'))&& casilla_01=='1'))
		{
			casilla_01= '0';
			jugada_realizada = true;
		}
		if((((casilla_01=='x' && casilla_03=='x')||(casilla_03=='x' && casilla_01=='x'))&& casilla_02=='2')||(((casilla_05=='x' && casilla_08=='x')||(casilla_08=='x' && casilla_05=='x'))&& casilla_02=='2'))
		{
			casilla_02 = '0';
			jugada_realizada = true;
		}
		if((((casilla_01=='x' && casilla_02=='x')||(casilla_02=='x' && casilla_01=='x'))&& casilla_03=='3')||(((casilla_05=='x' && casilla_07=='x')||(casilla_07=='x' && casilla_05=='x'))&& casilla_03=='3')||(((casilla_06=='x' && casilla_09=='x')||(casilla_09=='x' && casilla_06=='x'))&& casilla_03== '3'))
		{
			casilla_03 = '0';
			jugada_realizada = true;
		}
		if((((casilla_01=='x' && casilla_07=='x')||(casilla_07=='x' && casilla_01=='x'))&& casilla_04=='4')||(((casilla_05=='x' && casilla_06=='x')||(casilla_06=='x' && casilla_05=='x'))&& casilla_04=='4'))
		{
			casilla_04 = '0';
			jugada_realizada = true;
		}
		if((((casilla_01=='x' && casilla_09=='x')||(casilla_09=='x' && casilla_01=='x'))&& casilla_05=='5')||(((casilla_02=='x' && casilla_08=='x')||(casilla_08=='x' && casilla_02=='x'))&& casilla_05=='5')||(((casilla_03=='x' && casilla_07=='x')||(casilla_07=='x' && casilla_03=='x'))&& casilla_05=='5')||(((casilla_04=='x' && casilla_06=='x')||(casilla_06=='x' && casilla_04=='x'))&& casilla_05=='5'))
		{
			casilla_05 = '0';
			jugada_realizada = true;
		}
		if((((casilla_03=='x' && casilla_09=='x')||(casilla_09=='x' && casilla_03=='x'))&& casilla_06=='6')||(((casilla_04=='x' && casilla_05=='x')||(casilla_05=='x' && casilla_04=='x'))&& casilla_06=='6'))
		{
			casilla_06 = '0';
			jugada_realizada = true;
		}
		if((((casilla_01=='x' && casilla_04=='x')||(casilla_04=='x' && casilla_01=='x'))&& casilla_07=='7')||(((casilla_05=='x' && casilla_03=='x')||(casilla_03=='x' && casilla_05=='x'))&& casilla_07=='7')||(((casilla_08=='x' && casilla_09=='x')||(casilla_09=='x' && casilla_08=='x'))&& casilla_07=='7'))
		{
			casilla_07 = '0';
			jugada_realizada = true;
		}
		if((((casilla_07=='x' && casilla_09=='x')||(casilla_09=='x' && casilla_07=='x'))&& casilla_08=='8')||(((casilla_02=='x' && casilla_05=='x')||(casilla_05=='x' && casilla_02=='x'))&& casilla_08=='8'))
		{
			casilla_08= '0';
			jugada_realizada = true;
		}
	 
		if((((casilla_07=='x' && casilla_08=='x')||(casilla_08=='x' && casilla_07=='x'))&& casilla_09=='9')||(((casilla_05=='x' && casilla_01=='x')||(casilla_01=='x' && casilla_05=='x'))&& casilla_09=='9')||(((casilla_03=='x' && casilla_06=='x')||(casilla_06=='x' && casilla_03=='x'))&& casilla_09=='9'))
		{
			casilla_09 = '0';
			jugada_realizada = true;
		}
		else
		{
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
			}

		}
	}

	else if(dificultad == 3) 
	{
     // Bloqueo de jugadas del jugador o buscar ganar
		if (((casilla_01 == 'x' && casilla_02 == 'x') || (casilla_01 == 'x' && casilla_03 == 'x') || (casilla_02 == 'x' && casilla_03 == 'x')) && casilla_01 == '1') 
		{
			casilla_01 = '0';
		} 
		else if (((casilla_01 == 'x' && casilla_03 == 'x') || (casilla_01 == 'x' && casilla_02 == 'x')) && casilla_02 == '2') 
		{
			casilla_02 = '0';
		} 
		else if (((casilla_01 == 'x' && casilla_02 == 'x') || (casilla_01 == 'x' && casilla_03 == 'x')) && casilla_03 == '3') 
		{
        casilla_03 = '0'; 
		}
		else if (((casilla_04 == 'x' && casilla_05 == 'x') || (casilla_04 == 'x' && casilla_06 == 'x')) && casilla_04 == '4') 
		{
			casilla_04 = '0';
		} 
		else if (((casilla_05 == 'x' && casilla_06 == 'x') || (casilla_05 == 'x' && casilla_04 == 'x')) && casilla_05 == '5') 
		{
			casilla_05 = '0';
		}
		else if (((casilla_04 == 'x' && casilla_05 == 'x') || (casilla_04 == 'x' && casilla_06 == 'x')) && casilla_06 == '6') 
		{
			casilla_06 = '0';
		} 
		else if (((casilla_07 == 'x' && casilla_08 == 'x') || (casilla_07 == 'x' && casilla_09 == 'x')) && casilla_07 == '7') 
		{
			casilla_07 = '0';
		} 
		else if (((casilla_08 == 'x' && casilla_09 == 'x') || (casilla_08 == 'x' && casilla_07 == 'x')) && casilla_08 == '8') 
		{
			casilla_08 = '0';
		} 
		else if (((casilla_07 == 'x' && casilla_08 == 'x') || (casilla_07 == 'x' && casilla_09 == 'x')) && casilla_09 == '9') 
		{
			casilla_09 = '0';
		} 
		
		// Condiciones de ganar
		
		else if (((casilla_01 == '0' && casilla_02 == '0') || (casilla_01 == '0' && casilla_03 == '0') || (casilla_02 == '0' && casilla_03 == '0')) && casilla_01 == '1') 
		{
			casilla_01 = '0';
		} 
		else if (((casilla_04 == '0' && casilla_05 == '0') || (casilla_04 == '0' && casilla_06 == '0')) && casilla_05 == '5') 
		{
			casilla_05 = '0';
		}
		else if (((casilla_07 == '0' && casilla_08 == '0') || (casilla_07 == '0' && casilla_09 == '0')) && casilla_09 == '9') 
		{
			casilla_09 = '0';
		}
		
		// seleccion aleatoria
			
		else 
		{
			switch (indice_aleatorio) 
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
			}
		}
	}	

	return;
}
int main() {
    char casilla_01 = '1', casilla_02 = '2', casilla_03 = '3';
    char casilla_04 = '4', casilla_05 = '5', casilla_06 = '6';
    char casilla_07 = '7', casilla_08 = '8', casilla_09 = '9';

    bool jugada_realizada = false;

    std::cout << "Seleccione modo de juego: " << std::endl;
    std::cout << "1. Jugar vs Jugador 2" << std::endl;
    std::cout << "2. Jugar vs Maquina" << std::endl;
    int modo;
    std::cin >> modo;
    int dificultad;

    if (modo == 1) 
	{
        while (true) {
            imprimir_tablero(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09);

            jugador_1(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09);

            if (verificar_ganador(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09)) {
                std::cout << "Jugador 1 gana!" << std::endl;
                break; // Aquí está correcto
            }

            if (verificar_empate(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09)) {
                std::cout << "Es un empate!" << std::endl;
                break; // Aquí también está correcto
            }

            // Lógica para el segundo jugador
            imprimir_tablero(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09);
            jugador_2(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09);

            if (verificar_ganador(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09)) {
                std::cout << "Jugador 2 gana!" << std::endl;
                break; // Aquí también está correcto
            }

            if (verificar_empate(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09)) {
                std::cout << "Es un empate!" << std::endl;
                break; // Aquí también está correcto
            }
        }
	}
	else if (modo == 2) 
	{
		std::cout << "Seleccione dificultad: " << std::endl;
		std::cout << "1. Facil " << std::endl;
		std::cout << "2. Medio" << std::endl;
		std::cout << "3. Dificil" << std::endl;
		std::cin >> dificultad;

		imprimir_tablero(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09);
		std::cout << "-------------------------------------" << std::endl;

		while (true) {
			jugador_1(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09);

			// Asegúrate de que la máquina juegue
			dificultad_maquina(jugada_realizada, dificultad, casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09);

			imprimir_tablero(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09);

			if (verificar_ganador(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09)) {
				std::cout << "Jugador 1 gana!" << std::endl;
				break;
			}

			if (verificar_empate(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09)) {
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
/*
void jugador_1(char jug_01,int cont,char casilla_01, char casilla_02,char casilla_03,char casilla_04,char casilla_05,char casilla_06,char casilla_07,char casilla_08,char casilla_09)
{

	

	while(cont <= 5)
	{		
		
		std::cout << "jugador uno escoja casilla" << std::endl;
		std::cin >> jug_01;

		do
		{
			if(jug_01 == '1' && casilla_01 != 'x' && casilla_01 != '0')
			{
				casilla_01 = 'x';		
			}
			else if (jug_01 == '2' && casilla_02 != 'x' && casilla_02 != '0')
			{
				casilla_02 = 'x';
			}
			else if (jug_01 == '3' && casilla_03 != 'x' && casilla_03 != '0')
			{
				casilla_03 = 'x';
			}
			else if (jug_01 == '4' && casilla_04 != 'x' && casilla_04 != '0')
			{
				casilla_04 = 'x';
			}
			else if (jug_01 == '5' && casilla_05 != 'x' && casilla_05 != '0')
			{
				casilla_05 = 'x';
			}
			else if (jug_01 == '6' && casilla_06 != 'x' && casilla_06 != '0')
			{
				casilla_06 = 'x';
			}
			else if (jug_01 == '7' && casilla_07 != 'x' && casilla_07 != '0')
			{
				casilla_07 = 'x';
			}
			else if (jug_01 == '8' && casilla_08 != 'x' && casilla_08 != '0')
			{
				casilla_08 = 'x';
			}
			else if (jug_01 == '9' && casilla_09 != 'x' && casilla_09 != '0')
			{
				casilla_09 = 'x';
			}
			else 
			{
				std::cout << "tenias inestrucciones claras por que lo hiciste?" << std::endl;
			}
		}while(cont <=3);
	}
}

void jugador_2(char A_1,char A_2, char A_3, int cont_2,char casilla_01, char casilla_02,char casilla_03,char casilla_04,char casilla_05,char casilla_06,char casilla_07,char casilla_08,char casilla_09)
{
while (cont_2 <= 9)
{
	std::cout << "jugador dos ingrese la fila " << std::endl;
	std::cin >> A_1;
	std::cout << "jugador dos ingrese columna "<< std::endl;
	std::cin >> A_2;
	int cont_2 = {};
	
	switch(A_1)
		do 
		{
			case 'A':
			case 'a':
			
				if (A_1 == 'A' || A_1 == 'a' || A_3 == '1','2','3' )
				{
					if ((A_2 == '1'&& ((casilla_01 != 'x') && (casilla_01 != '0'))) || A_3 =='1')
					{
						casilla_01 = 'x';
						break;
					}
					else if (A_2 == '2'&& ((casilla_02 != 'x') && (casilla_02 != '0')))
					{
						casilla_02 = 'x';
						break;
					}
					else if (A_2 == '3'&& ((casilla_03 != 'x') && (casilla_03 != '0')))
					{
						casilla_03 = 'x';	
						break;
					}
					else 
					{
						std::cout << "no esta dentro del rango de numeros" << std::endl;
					}
				}
			case 'B':
			case 'b':
			
				if (A_1 == 'B' || A_1 == 'b')
				{
					if (A_2 == '1'&& ((casilla_04 != 'x') && (casilla_04 != '0')))
					{
						casilla_04 = 'x';
						break;
					}
					else if (A_2 == '2'&& ((casilla_05 != 'x') && (casilla_05 != '0')))
					{
						casilla_05 = 'x';
						break;
					}
					else if (A_2 == '3'&& ((casilla_06 != 'x') && (casilla_06 != '0')))
					{
						casilla_06 = 'x';	
						break;
					}
					else 
					{
						std::cout << "no esta dentro del rango de numeros" << std::endl;
					}
				}
			case 'c':
			case 'C':
			
				if (A_1 == 'C' || A_1 == 'c')
				{
					if (A_2 == '1'&& ((casilla_07 != 'x') && (casilla_07 != '0')))
					{
						casilla_07 = 'x';
						break;
					}
					else if (A_2 == '2'&& ((casilla_08 != 'x') && (casilla_08 != '0')))
					{
						casilla_08 = 'x';
						break;
					}
					else if (A_2 == '3' && ((casilla_09 != 'x') && (casilla_09 != '0')))
					{
						casilla_09 = 'x';	
						break;
					}
					else 
					{
						std::cout << "no esta dentro del rango de numeros" << std::endl;
					}
				}
				else
				{
					std::cout << "ingresaste mal el valor vuelve a intentarlo" <<std::endl;
				}	
		}while(cont_2 <=3);
	}
}
void tablero_imprimir(char casilla_01, char casilla_02,char casilla_03,char casilla_04,char casilla_05,char casilla_06,char casilla_07,char casilla_08,char casilla_09)
{
		std::cout <<"      1   2   3" << std::endl;
		std::cout <<"  A | "<< casilla_01 << " | "<< casilla_02 << " | " << casilla_03 <<" |" << std::endl;
		std::cout <<"------------------"<< std::endl;
		std::cout <<"  B | "<< casilla_04 << " | "<< casilla_05 << " | " << casilla_06 <<" |" << std::endl;
		std::cout <<"------------------"<< std::endl;
		std::cout <<"  C | "<< casilla_07 << " | "<< casilla_08 << " | " << casilla_09 <<" |" << std::endl;
	return;
}
bool verificar_ganador(char fin_juego,char casilla_01, char casilla_02,char casilla_03,char casilla_04,char casilla_05,char casilla_06,char casilla_07,char casilla_08,char casilla_09)
{
	 if (casilla_01=='x' && casilla_02=='x'&& casilla_03=='x')
        {
            fin_juego = true;
        }
        else if (casilla_01=='x' && casilla_04=='x' && casilla_07=='x')
        {
            fin_juego = true;
        }
        else if (casilla_02=='x' && casilla_05=='x' && casilla_08=='x')
        {
            fin_juego = true;
        }
        else if (casilla_03=='x' && casilla_06=='x' && casilla_09=='x')
        {
            fin_juego = true;
        }
        else if (casilla_04=='x' && casilla_05=='x' && casilla_06=='x')
        {
            fin_juego = true;
        }
        else if (casilla_07=='x' && casilla_08=='x' && casilla_09=='x')
        {
            fin_juego = true;
        }
        else if (casilla_01=='x' && casilla_05=='x' && casilla_09=='x')
        {
            fin_juego = true;
        }
        else if (casilla_07=='x' && casilla_05=='x' && casilla_03=='x')
        {
            fin_juego = true;
        }
        else if (casilla_01=='0' && casilla_02=='0' && casilla_03=='0')
        {
            fin_juego = true;
        }
        else if (casilla_01=='0' && casilla_04=='0' && casilla_07=='0')
        {
            fin_juego = true;
        }
        else if (casilla_02=='0' && casilla_05=='0' && casilla_08=='0')
        {
            fin_juego = true;
        }
        else if (casilla_03=='0' && casilla_06=='0' && casilla_09=='0')
        {
            fin_juego = true;
        }
        else if (casilla_04=='0' && casilla_05=='0' && casilla_06=='0')
        {
            fin_juego = true;
        }
        else if (casilla_07=='0' && casilla_08=='0' && casilla_09=='0')
        {
            fin_juego = true;
        }
        else if (casilla_01=='0' && casilla_05=='0' && casilla_09=='0')
        {
            fin_juego = true;
        }
        else if (casilla_07=='0' && casilla_05=='0' && casilla_03=='0')
        {
            fin_juego = true;
        }
        else if ((casilla_01=='0' || casilla_01=='x') && (casilla_02=='0' || casilla_02=='x') && (casilla_02=='0' || casilla_02=='x') && (casilla_04=='0' || casilla_04=='x') && (casilla_05=='0' || casilla_05=='x') && (casilla_06=='0' || casilla_06=='x') && (casilla_07=='0' || casilla_07=='x') && (casilla_08=='0' || casilla_08=='x') && (casilla_09=='0' || casilla_09=='x'))
        {
          
            std::cout<<"Empate"<<std::endl;
        }
        else
        {
            fin_juego = false;
        } 

	return 0;
}
void dificuldad_robot_1(char jug_01,int cont,char casilla_01, char casilla_02,char casilla_03,char casilla_04,char casilla_05,char casilla_06,char casilla_07,char casilla_08,char casilla_09)
{
}
int main()
{

//bolaneo fin de juego

	bool fin_juego ={};

//jugadores
	char A_1 = {};
	char A_2 = {};
	char A_3 = {};

//jugadores	
	char jug_01 = {'X'};
	char jug_02 = {'0'};

//contador
	int i ={0};
	int cont ={0};
//numeradas por cordenadas
	char casilla_01{'1'};
	char casilla_02{'2'};
	char casilla_03{'3'};
	char casilla_04{'4'};
	char casilla_05{'5'};
	char casilla_06{'6'};
	char casilla_07{'7'};
	char casilla_08{'8'};
	char casilla_09{'9'};
	
//presentacion entrada 
	presentacion();
	

//mode de juego
	char modo_juego{};
	
	std::cout << "ingrese 1 si quiere jugar versus" << std::endl;
	std::cout << "ingrese 2 si quiere jugar maquina " << std::endl;
	std::cin >> modo_juego;
	
	int intentos{0};
	char difi_robot{0}; 
	int intentarlo{0};
	int conta_vs{0};
	do
	{
		if(modo_juego == 1)
		{
			do 
			{
				tablero_imprimir(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09);
				jugador_1(jug_01, cont, casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09);
				if (verificar_ganador(fin_juego, casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09)) 
				{
				fin_juego = true;
				}
				tablero_imprimir(casilla_01, casilla_02, casilla_03, casilla_04, casilla_05, casilla_06, casilla_07, casilla_08, casilla_09);
				intentarlo++;
			} while(intentarlo <= 3);
    
		}

		else if(modo_juego == 2)
		{
			std::cout << "ingrese 1 para dificultad facil" << std::endl;
			std::cout << "ingrese 2 para difficultad intermedia" << std::endl;
			std::cout << "ingrese 3 para dificultad dificil" << std::endl;
			std::cin >> difi_robot;
			do
			{
				if(difi_robot == 1)
				{
					
				}
				else if(difi_robot == 2)
				{
					
				}
				else if(difi_robot == 3)
				{
					
				}
				else
				{
					std::cout << "ese valor no esta dentro del rango" << std::endl;
					intentarlo++;
				}
			}while(intentarlo <= 3);

		}
		else
		{
			 std::cout<<"ese caracter no estaba en el rango"<< std::endl;
			 intentos++;
		}
		
		
		
	}while(intentos<=3);

}
/*
bolaneo fin de juego

	bool fin_juego ={};

//jugadores
	char A_1 = {};
	char A_2 = {};
	char A_3 = {};

//jugadores	
 char jug_01 = {'X'};
 char jug_02 = {'0'};

//contador
	int i ={};
	
//numeradas por cordenadas
	
	char casilla_01{'1'};
	char casilla_02{'2'};
	char casilla_03{'3'};
	char casilla_04{'4'};
	char casilla_05{'5'};
	char casilla_06{'6'};
	char casilla_07{'7'};
	char casilla_08{'8'};
	char casilla_09{'9'};
	
		std::cout <<"      1   2   3" << std::endl;
		std::cout <<"  A | "<< casilla_01 << " | "<< casilla_02 << " | " << casilla_03 <<" |" << std::endl;
		std::cout <<"------------------"<< std::endl;
		std::cout <<"  B | "<< casilla_04 << " | "<< casilla_05 << " | " << casilla_06 <<" |" << std::endl;
		std::cout <<"------------------"<< std::endl;
		std::cout <<"  C | "<< casilla_07 << " | "<< casilla_08 << " | " << casilla_09 <<" |" << std::endl;
		
	
	//char tipo_juego{}; ya no se escoje ahora es por jugador
	
	std::cout << "el jugador 1 va a jugar por numeros y el jugador 2 por cordenadas" << std::endl;
	std::cout << "a continuacion se les mostrara un tablero con numeros Y cordenadas" << std::endl;

	while(i <= 10){
		
		//variables entrada jugador 1

		std::cout << "jugador uno escoja casilla" << std::endl;
		std::cin >> A_3;
		//cambios en el tablero
	
		switch(A_3)
		{
			case '1':
			case '2':
			case '3':
				do 
				{
					int cont = {0};
					if (A_3 == '1' || A_3 == '2' || A_3 == '3')
					{
						if ((A_3 == '1'&& ((casilla_01 != 'x') && (casilla_01 != '0'))))
						{
							casilla_01 = '0';
							break;
						}
						else if (A_3 == '2'&& ((casilla_02 != 'x') && (casilla_02 != '0')))
						{
							casilla_02 = '0';
							break;
						}
						else if (A_3 == '3'&& ((casilla_03 != 'x') && (casilla_03 != '0')))
						{
							casilla_03 = '0';	
							break;
						}
					
						else 
						{
							std::cout << "no esta dentro del rango de numeros o la casilla esta ocupada
							" << std::endl;
							cont++
						}
						
					}
				}while(cont <= 3);
			
				case '4':
				case '5':
				case '6':
				
					if (A_3 == '4' || A_3 == '5' || A_3 == '6')
					{
						if (A_3 == '4'&& ((casilla_04 != 'x') && (casilla_04 != '0')))
						{
							casilla_04 = '0';
							break;
						}
						else if (A_3 == '5'&& ((casilla_05 != 'x') && (casilla_05 != '0')))
						{
							casilla_05 = '0';
							break;
						}
						else if (A_3 == '6'&& ((casilla_06 != 'x') && (casilla_06 != '0')))
						{
							casilla_06 = '0';	
							break;
						}
						else 
						{
							std::cout << "no esta dentro del rango de numeros" << std::endl;
						}
					}
				case '7':
				case '8':
				case '9':
				
					if (A_3 == '7' || A_3 == '8' || A_3 == '9')
					{
						if (A_3 == '7'&& ((casilla_07 != 'x') && (casilla_07 != '0')))
						{
							casilla_07 = '0';
							break;
						}
						else if (A_3 == '8'&& ((casilla_08 != 'x') && (casilla_08 != '0')))
						{
							casilla_08 = '0';
							break;
						}
						else if (A_3 == '9' && ((casilla_09 != 'x') && (casilla_09 != '0')))
						{
							casilla_09 = '0';	
							break;
						}
						else 
						{
							std::cout << "no esta dentro del rango de numeros" << std::endl;
						}
					}
					else
					{
						std::cout << "ingresaste mal el valor vuelve a intentarlo" <<std::endl;
					}	
		}
	
				std::cout <<"      1   2   3" << std::endl;
				std::cout <<"  A | "<< casilla_01 << " | "<< casilla_02 << " | " << casilla_03 <<" |" << std::endl;
				std::cout <<"------------------"<< std::endl;
				std::cout <<"  B | "<< casilla_04 << " | "<< casilla_05 << " | " << casilla_06 <<" |" << std::endl;
				std::cout <<"------------------"<< std::endl;
				std::cout <<"  C | "<< casilla_07 << " | "<< casilla_08 << " | " << casilla_09 <<" |" << std::endl;
	}
	//jugador 2		

		std::cout << "jugador dos ingrese la fila " << std::endl;
		std::cin >> A_1;
		std::cout << "jugador dos ingrese columna "<< std::endl;
		std::cin >> A_2;
		
		
		switch(A_1)
			{
				case 'A':
				case 'a':
				
					if (A_1 == 'A' || A_1 == 'a' || A_3 == '1','2','3' )
					{
						if ((A_2 == '1'&& ((casilla_01 != 'x') && (casilla_01 != '0'))) || A_3 =='1')
						{
							casilla_01 = 'x';
							break;
						}
						else if (A_2 == '2'&& ((casilla_02 != 'x') && (casilla_02 != '0')))
						{
							casilla_02 = 'x';
							break;
						}
						else if (A_2 == '3'&& ((casilla_03 != 'x') && (casilla_03 != '0')))
						{
							casilla_03 = 'x';	
							break;
						}
						else 
						{
							std::cout << "no esta dentro del rango de numeros" << std::endl;
						}
					}
				case 'B':
				case 'b':
				
					if (A_1 == 'B' || A_1 == 'b')
					{
						if (A_2 == '1'&& ((casilla_04 != 'x') && (casilla_04 != '0')))
						{
							casilla_04 = 'x';
							break;
						}
						else if (A_2 == '2'&& ((casilla_05 != 'x') && (casilla_05 != '0')))
						{
							casilla_05 = 'x';
							break;
						}
						else if (A_2 == '3'&& ((casilla_06 != 'x') && (casilla_06 != '0')))
						{
							casilla_06 = 'x';	
							break;
						}
						else 
						{
							std::cout << "no esta dentro del rango de numeros" << std::endl;
						}
					}
				case 'c':
				case 'C':
				
					if (A_1 == 'C' || A_1 == 'c')
					{
						if (A_2 == '1'&& ((casilla_07 != 'x') && (casilla_07 != '0')))
						{
							casilla_07 = 'x';
							break;
						}
						else if (A_2 == '2'&& ((casilla_08 != 'x') && (casilla_08 != '0')))
						{
							casilla_08 = 'x';
							break;
						}
						else if (A_2 == '3' && ((casilla_09 != 'x') && (casilla_09 != '0')))
						{
							casilla_09 = 'x';	
							break;
						}
						else 
						{
							std::cout << "no esta dentro del rango de numeros" << std::endl;
						}
					}
					else
					{
						std::cout << "ingresaste mal el valor vuelve a intentarlo" <<std::endl;
					}	
			}
			
				std::cout <<"      1   2   3" << std::endl;
				std::cout <<"  A | "<< casilla_01 << " | "<< casilla_02 << " | " << casilla_03 <<" |" << std::endl;
				std::cout <<"------------------"<< std::endl;
				std::cout <<"  B | "<< casilla_04 << " | "<< casilla_05 << " | " << casilla_06 <<" |" << std::endl;
				std::cout <<"------------------"<< std::endl;
				std::cout <<"  C | "<< casilla_07 << " | "<< casilla_08 << " | " << casilla_09 <<" |" << std::endl;

	
	    if (casilla_01=='x' && casilla_02=='x'&& casilla_03=='x')
        {
            fin_juego = true;
        }
        else if (casilla_01=='x' && casilla_04=='x' && casilla_07=='x')
        {
            fin_juego = true;
        }
        else if (casilla_02=='x' && casilla_05=='x' && casilla_08=='x')
        {
            fin_juego = true;
        }
        else if (casilla_03=='x' && casilla_06=='x' && casilla_09=='x')
        {
            fin_juego = true;
        }
        else if (casilla_04=='x' && casilla_05=='x' && casilla_06=='x')
        {
            fin_juego = true;
        }
        else if (casilla_07=='x' && casilla_08=='x' && casilla_09=='x')
        {
            fin_juego = true;
        }
        else if (casilla_01=='x' && casilla_05=='x' && casilla_09=='x')
        {
            fin_juego = true;
        }
        else if (casilla_07=='x' && casilla_05=='x' && casilla_03=='x')
        {
            fin_juego = true;
        }
        else if (casilla_01=='0' && casilla_02=='0' && casilla_03=='0')
        {
            fin_juego = true;
        }
        else if (casilla_01=='0' && casilla_04=='0' && casilla_07=='0')
        {
            fin_juego = true;
        }
        else if (casilla_02=='0' && casilla_05=='0' && casilla_08=='0')
        {
            fin_juego = true;
        }
        else if (casilla_03=='0' && casilla_06=='0' && casilla_09=='0')
        {
            fin_juego = true;
        }
        else if (casilla_04=='0' && casilla_05=='0' && casilla_06=='0')
        {
            fin_juego = true;
        }
        else if (casilla_07=='0' && casilla_08=='0' && casilla_09=='0')
        {
            fin_juego = true;
        }
        else if (casilla_01=='0' && casilla_05=='0' && casilla_09=='0')
        {
            fin_juego = true;
        }
        else if (casilla_07=='0' && casilla_05=='0' && casilla_03=='0')
        {
            fin_juego = true;
        }
        else if ((casilla_01=='0' || casilla_01=='x') && (casilla_02=='0' || casilla_02=='x') && (casilla_02=='0' || casilla_02=='x') && (casilla_04=='0' || casilla_04=='x') && (casilla_05=='0' || casilla_05=='x') && (casilla_06=='0' || casilla_06=='x') && (casilla_07=='0' || casilla_07=='x') && (casilla_08=='0' || casilla_08=='x') && (casilla_09=='0' || casilla_09=='x'))
        {
          
            std::cout<<"Empate"<<std::endl;
        }
        else
        {
            fin_juego = false;
        } 
		
		i++;
	}
	
	
	
	
	/*
	std::cout << "desea jugar con cordenadas o con posiciones " << std::endl;
	std::cout << "ingrese una letra a minuscula si desea jugar por posiciones" << std::endl;
	std::cout << "ingrese una letra b minuscula si desea jugar por cordenadas" << std::endl;
	std::cin >> tipo_juego;
	*/
/*
	if(tipo_juego == 'a' || tipo_juego =='A')
	{
		*/
/*
	//salida inicial de indicaciones 
			
	//tablero de indicacion de cordenadas 		 
		/*
			std::cout <<"      1   2   3" << std::endl;
			std::cout <<"  A | "<< cel_01 << " | "<< cel_02 << " | " << cel_03 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  B | "<< cel_04 << " | "<< cel_05 << " | " << cel_06 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  C | "<< cel_07 << " | "<< cel_08 << " | " << cel_09 <<" |" << std::endl;
		
	//tablero funcional juego 
		/*
			std::cout <<"      1   2   3" << std::endl;
			std::cout <<"  A | "<< casilla_01 << " | "<< casilla_02 << " | " << casilla_03 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  B | "<< casilla_04 << " | "<< casilla_05 << " | " << casilla_06 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  C | "<< casilla_07 << " | "<< casilla_08 << " | " << casilla_09 <<" |" << std::endl;
		*/
/*	 
		std::cout << "jugador uno escoja casilla" << std::endl;
		std::cin >> jug_01;
		
		if(cel_01 == jug_01)
		{
			casilla_01 = 'x';		
		}
		else if(cel_02 == jug_01)
		{
			casilla_02 = 'x';		
		}		
		else if(cel_03 == jug_01)
		{
			casilla_03 = 'x';		
		}
		else if(cel_04 == jug_01)
		{
			casilla_04 = 'x';		
		}
		else if(cel_05 == jug_01)
		{
			casilla_05 = 'x';		
		 }
		else if(cel_06 == jug_01)
		{
			casilla_06 = 'x';		
		}
		else if(cel_07 == jug_01)
		{
			casilla_07 = 'x';		
		}
		else if(cel_08 == jug_01)
		{
			casilla_08 = 'x';		
		}
		else if(cel_09 == jug_01)
		{
			 casilla_09 = 'x';
		}
		else 
		{
			std::cout << "tenias inestrucciones claras por que lo hiciste?" << std::endl;

		}
		
		//cambios en el tablero
		
			std::cout <<"      1   2   3" << std::endl;
			std::cout <<"  A | "<< casilla_01 << " | "<< casilla_02 << " | " << casilla_03 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  B | "<< casilla_04 << " | "<< casilla_05 << " | " << casilla_06 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  C | "<< casilla_07 << " | "<< casilla_08 << " | " << casilla_09 <<" |" << std::endl;
		
		//jugador 2
			
		std::cout << "jugador dos escoja casilla" << std::endl;
		std::cin >> jug_02;
		
		if(jug_02 == '1' && casilla_01 != 'x')
		{
			casilla_01 = '0';
		}
		else if (jug_02 == '2' && casilla_02 != 'x')
		{
			casilla_02 = '0';
		}
		else if (jug_02 == '3' && casilla_03 != 'x')
		{
			casilla_03 = '0';
		}
		else if (jug_02 == '4' && casilla_04 != 'x')
		{
			casilla_04 = '0';
		}
		else if (jug_02 == '5' && casilla_05 != 'x')
		{
			casilla_05 = '0';
		}
		else if (jug_02 == '6' && casilla_06 != 'x')
		{
			casilla_06 = '0';
		}
		else if (jug_02 == '7' && casilla_07 != 'x')
		{
			casilla_07 = '0';
		}
		else if (jug_02 == '8' && casilla_08 != 'x')
		{
			casilla_08 = '0';
		}
		else if (jug_02 == '9' && casilla_09 != 'x')
		{
			casilla_09 = '0';
		}
		else 
		{
			std::cout << "tenias inestrucciones claras por que lo hiciste?" << std::endl;
		}
		
		//cambios en el tablero
		
			std::cout <<"      1   2   3" << std::endl;
			std::cout <<"  A | "<< casilla_01 << " | "<< casilla_02 << " | " << casilla_03 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  B | "<< casilla_04 << " | "<< casilla_05 << " | " << casilla_06 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  C | "<< casilla_07 << " | "<< casilla_08 << " | " << casilla_09 <<" |" << std::endl;
		
		//jugador 1
		
		std::cout << "jugador uno escoja casilla" << std::endl;
		std::cin >> jug_01;
		
		if(jug_01 == '1' && casilla_01 != 'x' && casilla_01 != '0')
		{
			casilla_01 = 'x';		
		}
		else if (jug_01 == '2' && casilla_02 != 'x' && casilla_01 != '0')
		{
			casilla_02 = 'x';
		}
		else if (jug_01 == '3' && casilla_03 != 'x' && casilla_01 != '0')
		{
			casilla_03 = 'x';
		}
		else if (jug_01 == '4' && casilla_04 != 'x' && casilla_01 != '0')
		{
			casilla_04 = 'x';
		}
		else if (jug_01 == '5' && casilla_05 != 'x' && casilla_01 != '0')
		{
			casilla_05 = 'x';
		}
		else if (jug_01 == '6' && casilla_06 != 'x' && casilla_01 != '0')
		{
			casilla_06 = 'x';
		}
		else if (jug_01 == '7' && casilla_07 != 'x' && casilla_01 != '0')
		{
			casilla_07 = 'x';
		}
		else if (jug_01 == '8' && casilla_08 != 'x' && casilla_01 != '0')
		{
			casilla_08 = 'x';
		}
		else if (jug_01 == '9' && casilla_09 != 'x' && casilla_01 != '0')
		{
			casilla_09 = 'x';
		}
		else 
		{
			std::cout << "tenias inestrucciones claras por que lo hiciste?" << std::endl;
		}
		
		//cambios en el tablero
		
			std::cout <<"      1   2   3" << std::endl;
			std::cout <<"  A | "<< casilla_01 << " | "<< casilla_02 << " | " << casilla_03 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  B | "<< casilla_04 << " | "<< casilla_05 << " | " << casilla_06 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  C | "<< casilla_07 << " | "<< casilla_08 << " | " << casilla_09 <<" |" << std::endl;
		
		//jugador 2
		
		std::cout << "jugador dos escoja casilla" << std::endl;
		std::cin >> jug_02;
		
		if(jug_02 == '1' && casilla_01 != 'x')
		{
			casilla_01 = '0';		
		}
		else if (jug_02 == '2' && casilla_02 != 'x' && casilla_01 != '0')
		{
			casilla_02 = '0';
		}
		else if (jug_02 == '3' && casilla_03 != 'x' && casilla_01 != '0')
		{
			casilla_03 = '0';
		}
		else if (jug_02 == '4' && casilla_04 != 'x' && casilla_01 != '0')
		{
			casilla_04 = '0';
		}
		else if (jug_02 == '5' && casilla_05 != 'x' && casilla_01 != '0')
		{
			casilla_05 = '0';
		}
		else if (jug_02 == '6' && casilla_06 != 'x' && casilla_01 != '0')
		{
			casilla_06 = '0';
		}
		else if (jug_02 == '7' && casilla_07 != 'x' && casilla_01 != '0')
		{
			casilla_07 = '0';
		}
		else if (jug_02 == '8' && casilla_08 != 'x' && casilla_01 != '0')
		{
			casilla_08 = '0';
		}
		else if (jug_02 == '9' && casilla_09 != 'x' && casilla_01 != '0')
		{
			casilla_09 = '0';
		}
		else 
		{
			std::cout << "tenias inestrucciones claras por que lo hiciste?" << std::endl;
		}
		
		//cambios en el tablero
		
			std::cout <<"      1   2   3" << std::endl;
			std::cout <<"  A | "<< casilla_01 << " | "<< casilla_02 << " | " << casilla_03 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  B | "<< casilla_04 << " | "<< casilla_05 << " | " << casilla_06 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  C | "<< casilla_07 << " | "<< casilla_08 << " | " << casilla_09 <<" |" << std::endl;
		
		//jugador 1
		
		std::cout << "jugador uno escoja casilla" << std::endl;
		std::cin >> jug_01;
		
		if(jug_01 == '1' && casilla_01 != 'x' && casilla_01 != '0')
		{
			casilla_01 = 'x';		
		}
		else if (jug_01 == '2' && casilla_02 != 'x' && casilla_01 != '0')
		{
			casilla_02 = 'x';
		}
		else if (jug_01 == '3' && casilla_03 != 'x' && casilla_01 != '0')
		{
			casilla_03 = 'x';
		}
		else if (jug_01 == '4' && casilla_04 != 'x' && casilla_01 != '0')
		{
			casilla_04 = 'x';
		}
		else if (jug_01 == '5' && casilla_05 != 'x' && casilla_01 != '0')
		{
			casilla_05 = 'x';
		}
		else if (jug_01 == '6' && casilla_06 != 'x' && casilla_01 != '0')
		{
			casilla_06 = 'x';
		}
		else if (jug_01 == '7' && casilla_07 != 'x' && casilla_01 != '0')
		{
			casilla_07 = 'x';
		}
		else if (jug_01 == '8' && casilla_08 != 'x' && casilla_01 != '0')
		{
			casilla_08 = 'x';
		}
		else if (jug_01 == '9' && casilla_09 != 'x' && casilla_01 != '0')
		{
			casilla_09 = 'x';
		}
		else 
		{
			std::cout << "tenias inestrucciones claras por que lo hiciste?" << std::endl;
		}
		
		//cambios en el tablero
		
			std::cout <<"      1   2   3" << std::endl;
			std::cout <<"  A | "<< casilla_01 << " | "<< casilla_02 << " | " << casilla_03 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  B | "<< casilla_04 << " | "<< casilla_05 << " | " << casilla_06 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  C | "<< casilla_07 << " | "<< casilla_08 << " | " << casilla_09 <<" |" << std::endl;
		
		//jugador 2
		
		std::cout << "jugador dos escoja casilla" << std::endl;
		std::cin >> jug_02;
		
		if(jug_02 == '1' && casilla_01 != 'x')
		{
			casilla_01 = '0';		
		}
		else if (jug_02 == '2' && casilla_02 != 'x' && casilla_01 != '0')
		{
			casilla_02 = '0';
		}
		else if (jug_02 == '3' && casilla_03 != 'x' && casilla_01 != '0')
		{
			casilla_03 = '0';
		}
		else if (jug_02 == '4' && casilla_04 != 'x' && casilla_01 != '0')
		{
			casilla_04 = '0';
		}
		else if (jug_02 == '5' && casilla_05 != 'x' && casilla_01 != '0')
		{
			casilla_05 = '0';
		}
		else if (jug_02 == '6' && casilla_06 != 'x' && casilla_01 != '0')
		{
			casilla_06 = '0';
		}
		else if (jug_02 == '7' && casilla_07 != 'x' && casilla_01 != '0')
		{
			casilla_07 = '0';
		}
		else if (jug_02 == '8' && casilla_08 != 'x' && casilla_01 != '0')
		{
			casilla_08 = '0';
		}
		else if (jug_02 == '9' && casilla_09 != 'x' && casilla_01 != '0')
		{
			casilla_09 = '0';
		}
		else 
		{
			std::cout << "tenias inestrucciones claras por que lo hiciste?" << std::endl;
		}
		
		//cambios en el tablero
		
			std::cout <<"      1   2   3" << std::endl;
			std::cout <<"  A | "<< casilla_01 << " | "<< casilla_02 << " | " << casilla_03 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  B | "<< casilla_04 << " | "<< casilla_05 << " | " << casilla_06 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  C | "<< casilla_07 << " | "<< casilla_08 << " | " << casilla_09 <<" |" << std::endl;
		
		//jugador 1
		
		std::cout << "jugador uno escoja casilla" << std::endl;
		std::cin >> jug_01;
		
		if(jug_01 == '1' && casilla_01 != 'x' && casilla_01 != '0')
		{
			casilla_01 = 'x';		
		}
		else if (jug_01 == '2' && casilla_02 != 'x' && casilla_01 != '0')
		{
			casilla_02 = 'x';
		}
		else if (jug_01 == '3' && casilla_03 != 'x' && casilla_01 != '0')
		{
			casilla_03 = 'x';
		}
		else if (jug_01 == '4' && casilla_04 != 'x' && casilla_01 != '0')
		{
			casilla_04 = 'x';
		}
		else if (jug_01 == '5' && casilla_05 != 'x' && casilla_01 != '0')
		{
			casilla_05 = 'x';
		}
		else if (jug_01 == '6' && casilla_06 != 'x' && casilla_01 != '0')
		{
			casilla_06 = 'x';
		}
		else if (jug_01 == '7' && casilla_07 != 'x' && casilla_01 != '0')
		{
			casilla_07 = 'x';
		}
		else if (jug_01 == '8' && casilla_08 != 'x' && casilla_01 != '0')
		{
			casilla_08 = 'x';
		}
		else if (jug_01 == '9' && casilla_09 != 'x' && casilla_01 != '0')
		{
			casilla_09 = 'x';
		}
		else 
		{
			std::cout << "tenias inestrucciones claras por que lo hiciste?" << std::endl;
		}
		
		//cambios en el tablero
		
			std::cout <<"      1   2   3" << std::endl;
			std::cout <<"  A | "<< casilla_01 << " | "<< casilla_02 << " | " << casilla_03 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  B | "<< casilla_04 << " | "<< casilla_05 << " | " << casilla_06 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  C | "<< casilla_07 << " | "<< casilla_08 << " | " << casilla_09 <<" |" << std::endl;
		
		//jugador 2 caso 8 
		
		std::cout << "jugador dos escoja casilla" << std::endl;
		std::cin >> jug_02;
		
		if(jug_02 == '1' && casilla_01 != 'x' && casilla_01 != '0')
		{
			casilla_01 = '0';		
		}
		else if (jug_02 == '2' && casilla_02 != 'x' && casilla_01 != '0')
		{
			casilla_02 = '0';
		}
		else if (jug_02 == '3' && casilla_03 != 'x' && casilla_01 != '0')
		{
			casilla_03 = '0';
		}
		else if (jug_02 == '4' && casilla_04 != 'x' && casilla_01 != '0')
		{
			casilla_04 = '0';
		}
		else if (jug_02 == '5' && casilla_05 != 'x' && casilla_01 != '0')
		{
			casilla_05 = '0';
		}
		else if (jug_02 == '6' && casilla_06 != 'x' && casilla_01 != '0')
		{
			casilla_06 = '0';
		}
		else if (jug_02 == '7' && casilla_07 != 'x' && casilla_01 != '0')
		{
			casilla_07 = '0';
		}
		else if (jug_02 == '8' && casilla_08 != 'x' && casilla_01 != '0')
		{
			casilla_08 = '0';
		}
		else if (jug_02 == '9' && casilla_09 != 'x' && casilla_01 != '0')
		{
			casilla_09 = '0';
		}
		else 
		{
			std::cout << "tenias inestrucciones claras por que lo hiciste?" << std::endl;
		}
		
		//cambios en el tablero
		
			std::cout <<"      1   2   3" << std::endl;
			std::cout <<"  A | "<< casilla_01 << " | "<< casilla_02 << " | " << casilla_03 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  B | "<< casilla_04 << " | "<< casilla_05 << " | " << casilla_06 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  C | "<< casilla_07 << " | "<< casilla_08 << " | " << casilla_09 <<" |" << std::endl;
		
		//jugador 1 caso 9
		
		std::cout << "jugador uno escoja casilla" << std::endl;
		std::cin >> jug_01;
		
		if(jug_01 == '1' && casilla_01 != 'x' && casilla_01 != '0')
		{
			casilla_01 = 'x';		
		}
		else if (jug_01 == '2' && casilla_02 != 'x' && casilla_01 != '0')
		{
			casilla_02 = 'x';
		}
		else if (jug_01 == '3' && casilla_03 != 'x' && casilla_01 != '0')
		{
			casilla_03 = 'x';
		}
		else if (jug_01 == '4' && casilla_04 != 'x' && casilla_01 != '0')
		{
			casilla_04 = 'x';
		}
		else if (jug_01 == '5' && casilla_05 != 'x' && casilla_01 != '0')
		{
			casilla_05 = 'x';
		}
		else if (jug_01 == '6' && casilla_06 != 'x' && casilla_01 != '0')
		{
			casilla_06 = 'x';
		}
		else if (jug_01 == '7' && casilla_07 != 'x' && casilla_01 != '0')
		{
			casilla_07 = 'x';
		}
		else if (jug_01 == '8' && casilla_08 != 'x' && casilla_01 != '0')
		{
			casilla_08 = 'x';
		}
		else if (jug_01 == '9' && ((casilla_09 != 'x') && (casilla_01 != '0')))
		{
			casilla_09 = 'x';
		}
		else 
		{
			std::cout << "tenias inestrucciones claras por que lo hiciste?" << std::endl;
		}
		
		//cambios en el tablero
		
			std::cout <<"      1   2   3" << std::endl;
			std::cout <<"  A | "<< casilla_01 << " | "<< casilla_02 << " | " << casilla_03 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  B | "<< casilla_04 << " | "<< casilla_05 << " | " << casilla_06 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  C | "<< casilla_07 << " | "<< casilla_08 << " | " << casilla_09 <<" |" << std::endl;
		
		//caso dos ingresar fila columna
	}
	else if (tipo_juego == 'b' || tipo_juego =='B')
	{
		//INICIO DE JUEGO INDICACIONES
		
			std::cout <<"      1   2   3" << std::endl;
			std::cout <<"  A | "<< cel_01 << " | "<< cel_02 << " | " << cel_03 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  B | "<< cel_04 << " | "<< cel_05 << " | " << cel_06 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  C | "<< cel_07 << " | "<< cel_08 << " | " << cel_09 <<" |" << std::endl;
		
		
		char A_1 = {};
		char A_2 = {};
		
		std::cout << "ingrese la fila " << std::endl;
		std::cin >> A_1;
		std::cout << "ingrese columna "<< std::endl;
		std::cin >> A_2;
		*/	
/*
	switch(A_1)
		{
			case 'A':
			case 'a':
			
				if (A_1 == 'A' || A_1 == 'a')
				{
					if (A_2 == '1'&& ((casilla_09 != 'x') && (casilla_01 != '0')))
					{
						casilla_01 = 'x';
						break;
					}
					else if (A_2 == '2'&& ((casilla_09 != 'x') && (casilla_01 != '0')))
					{
						casilla_02 = 'x';
						break;
					}
					else if (A_2 == '3'&& ((casilla_09 != 'x') && (casilla_01 != '0')))
					{
						casilla_03 = 'x';	
						break;
					}
					else 
					{
						std::cout << "no esta dentro del rango de numeros" << std::endl;
					}
				}
			case 'B':
			case 'b':
			
				if (A_1 == 'B' || A_1 == 'b')
				{
					if (A_2 == '1'&& ((casilla_09 != 'x') && (casilla_01 != '0')))
					{
						casilla_04 = 'x';
						break;
					}
					else if (A_2 == '2'&& ((casilla_09 != 'x') && (casilla_01 != '0')))
					{
						casilla_05 = 'x';
						break;
					}
					else if (A_2 == '3'&& ((casilla_09 != 'x') && (casilla_01 != '0')))
					{
						casilla_06 = 'x';	
						break;
					}
					else 
					{
						std::cout << "no esta dentro del rango de numeros" << std::endl;
					}
				}
			case 'c':
			case 'C':
			
				if (A_1 == 'C' || A_1 == 'c')
				{
					if (A_2 == '1'&& ((casilla_09 != 'x') && (casilla_01 != '0')))
					{
						casilla_07 = 'x';
						break;
					}
					else if (A_2 == '2'&& ((casilla_09 != 'x') && (casilla_01 != '0')))
					{
						casilla_08 = 'x';
						break;
					}
					else if (A_2 == '3' && ((casilla_09 != 'x') && (casilla_01 != '0')))
					{
						casilla_09 = 'x';	
						break;
					}
					else 
					{
						std::cout << "no esta dentro del rango de numeros" << std::endl;
					}
				}
				else
				{
					std::cout << "ingresaste mal el valor vuelve a intentarlo" <<std::endl;
				}	
		}
	/*
	}	
	else 
	{
	std::cout << "vuelve a ejecutar el codigo ingresaste mal la letra" << std::endl;	
	}
	*/






