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
void caracteres_tabla_ACCI(int m,int n)
{
	char ejem{'\0'};
	
	srand(static_cast<unsigned int>(time(0)));
    int indice_aleatorio;
	bool tablero_completo = false;
	
	while (!tablero_completo)
        {
            indice_aleatorio = rand() % 2; 

            switch(indice_aleatorio)
            {
                case 0: 
                    if( int i = 97; i < 122)
					{
						ejem = static_cast<char>(i);
						tablero_completo = false;
					};
                    break;
                case 1: 
                    if( int i = 65; i < 90)
					{
						ejem = static_cast<char>(i);
						tablero_completo = false;
					};
                    break;
                case 2: 
                    if( int i = 48; i < 57)
					{
						ejem = static_cast<char>(i);
						tablero_completo = false;
					};
				default:
					tablero_completo = true;
			}
		}
}

void imprimir_tablero( char **tablero[m][n]) 
{

    for (int fila = 0; fila < m; fila++) 
	{
        std::cout <<"  "<< "\x1B[38;5;51m" << fila + 1 << " "; 
		
        for (int columna = 0; columna < n; columna++) 
		{
            std::cout << "\x1B[38;5;86m" << "| " << "\x1B[m" << tablero[fila][columna] << "\x1B[38;5;86m" << " |";
        }
        std::cout << "\x1B[m" << std::endl;
    }
}


int main() 
{   
	int m{0};
	int n{0};
	
	char **tablero{nullptr};
	
	std::cout << "ingrese cuantas filas desea" << std::endl;
	std::cin >> m;
	ptr_tablero = new int[m];
	std::cout << "ingrese cuantas columnas" << std::endl;
	std::cin >> n;
	ptr_tablero = new int[n];


	return 0;
}














