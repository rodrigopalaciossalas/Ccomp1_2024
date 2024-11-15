#include <iostream>

#ifdef _WIN32
    #include <windows.h>
    #define CLEAR_COMMAND "cls"
#elif defined(__APPLE__) || defined(__MACH__) || defined(__linux__)
    #include <unistd.h>
    #include <termios.h>
    #define CLEAR_COMMAND "clear"
#endif
//funciones

//imrprimir caratula
//imprimir tablero
//verificar ganador



    do
    {
        if (difficultad==1){
             r= std::rand()%9;
        }
        else if (difficultad==2){
            if((((casilla_04==x && casilla_07==x)||(casilla_07==x && casilla_04==x))&& casilla_01==' ')||(((casilla_02==x && casilla_03==x)||(casilla_03==x && casilla_02==x))&& casilla_01==' ')||(((casilla_05==x && casilla_09==x)||(casilla_09==x && casilla_05==x))&& casilla_01==' ')){
                r= 0;
            }
            else if((((casilla_01==x && casilla_03==x)||(casilla_03==x && casilla_01==x))&& casilla_02==' ')||(((casilla_05==x && casilla_08==x)||(casilla_08==x && casilla_05==x))&& casilla_02==' ')){
                r= 1;
            }
            else if((((casilla_01==x && casilla_02==x)||(casilla_02==x && casilla_01==x))&& casilla_03==' ')||(((casilla_05==x && casilla_07==x)||(casilla_07==x && casilla_05==x))&& casilla_03==' ')||(((casilla_06==x && casilla_09==x)||(casilla_09==x && casilla_06==x))&& casilla_03)){
                r= 2;
            }
            else if((((casilla_01==x && casilla_07==x)||(casilla_07==x && casilla_01==x))&& casilla_04==' ')||(((casilla_05==x && casilla_06==x)||(casilla_06==x && casilla_05==x))&& casilla_04)){
                r= 3;
            }
            else if((((casilla_01==x && casilla_09==x)||(casilla_09==x && casilla_01==x))&& casilla_05==' ')||(((casilla_02==x && casilla_08==x)||(casilla_08==x && casilla_02==x))&& casilla_05==' ')||(((casilla_03==x && casilla_07==x)||(casilla_07==x && casilla_03==x))&& casilla_05==' ')||(((casilla_04==x && casilla_06==x)||(casilla_06==x && casilla_04==x))&& casilla_05==' ')){
                r= 4;
            }
            else if((((casilla_03==x && casilla_09==x)||(casilla_09==x && casilla_03==x))&& casilla_06==' ')||(((casilla_04==x && casilla_05==x)||(casilla_05==x && casilla_04==x))&& casilla_06==' ')){
                r= 5;
            }
            else if((((casilla_01==x && casilla_04==x)||(casilla_04==x && casilla_01==x))&& casilla_07==' ')||(((casilla_05==x && casilla_03==x)||(casilla_03==x && casilla_05==x))&& casilla_07==' ')||(((casilla_08==x && casilla_09==x)||(casilla_09==x && casilla_08==x))&& casilla_07==' ')){
                r= 6;
            }
            else if((((casilla_07==x && casilla_09==x)||(casilla_09==x && casilla_07==x))&& casilla_08==' ')||(((casilla_02==x && casilla_05==x)||(casilla_05==x && casilla_02==x))&& casilla_08==' ')){
                r= 7;
            }
            else if((((casilla_07==x && casilla_08==x)||(casilla_08==x && casilla_07==x))&& casilla_09==' ')||(((casilla_05==x && casilla_01==x)||(casilla_01==x && casilla_05==x))&& casilla_09==' ')||(((casilla_03==x && casilla_06==x)||(casilla_06==x && casilla_03==x))&& casilla_09==' ')){
                r= 8;
            }
            if((((casilla_04==o && casilla_07==o)||(casilla_07==o && casilla_04==o))&& casilla_01==' ')||(((casilla_02==o && casilla_03==o)||(casilla_03==o && casilla_02==o))&& casilla_01==' ')||(((casilla_05==o && casilla_09==o)||(casilla_09==o && casilla_05==o))&& casilla_01==' ')){
                r= 0;
            }
            else if((((casilla_01==o && casilla_03==o)||(casilla_03==o && casilla_01==o))&& casilla_02==' ')||(((casilla_05==o && casilla_08==o)||(casilla_08==o && casilla_05==o))&& casilla_02==' ')){
                r= 1;
            }
            else if((((casilla_01==o && casilla_02==o)||(casilla_02==o && casilla_01==o))&& casilla_03==' ')||(((casilla_05==o && casilla_07==o)||(casilla_07==o && casilla_05==o))&& casilla_03==' ')||(((casilla_06==o && casilla_09==o)||(casilla_09==o && casilla_06==o))&& casilla_03==' ')){
                r= 2;
            }
            else if((((casilla_01==o && casilla_07==o)||(casilla_07==o && casilla_01==o))&& casilla_04==' ')||(((casilla_05==o && casilla_06==o)||(casilla_06==o && casilla_05==o))&& casilla_04==' ')){
                r= 3;
            }
            else if((((casilla_01==o && casilla_09==o)||(casilla_09==o && casilla_01==o))&& casilla_05==' ')||(((casilla_02==o && casilla_08==o)||(casilla_08==o && casilla_02==o))&& casilla_05==' ')||(((casilla_03==o && casilla_07==o||(casilla_07==o && casilla_03==o))&& casilla_05==' ')||(((casilla_04==o && casilla_06==o)||(casilla_06==o && casilla_04==o))&& casilla_05==' '))){
                r= 4;
            }
            else if((((casilla_03==o && casilla_09==o)||(casilla_09==o && casilla_03==o))&& casilla_06==' ')||(((casilla_04==o && casilla_05==o)||(casilla_05==o && casilla_04==o))&& casilla_06==' ')){
                r= 5;
            }
            else if((((casilla_01==o && casilla_04==o)||(casilla_04==o && casilla_01==o))&& casilla_07==' ')||(((casilla_05==o && casilla_03==o)||(casilla_03==o && casilla_05==o))&& casilla_07==' ')||(((casilla_08==o && casilla_09==o)||(casilla_09==o && casilla_08==o))&& casilla_07==' ')){
                r= 6;
            }
            else if((((casilla_07==o && casilla_09==o)||(casilla_09==o && casilla_07==o))&& casilla_08==' ')||(((casilla_02==o && casilla_05==o)||(casilla_05==o && casilla_02==o))&& casilla_08==' ')){
                r= 7;
            }
            else if((((casilla_07==o && casilla_08==o)||(casilla_08==o && casilla_07==o))&& casilla_09==' ')||(((casilla_05==o && casilla_01==o)||(casilla_01==o && casilla_05==o))&& casilla_09==' ')||(((casilla_03==o && casilla_06==o)||(casilla_06==o && casilla_03==o))&& casilla_09==' ')){
                r= 8;
            }
            else{
                r= std::rand()%9;
            }
        }
        else if(difficultad==3){
            if(((casilla_01==o)&&casilla_05==' ')||((casilla_03==o)&&casilla_05==' ')||((casilla_07==o)&&casilla_05==' ')||((casilla_09==o)&&casilla_05==' ')){
                r=4;
            }
            else if(((casilla_08==o)&&casilla_01==' ')){
                r=0;
            }
            else if(((casilla_06==o)&&casilla_03==' ')){
                r=2;
            }
            else if(((casilla_04==o)&&casilla_07==' ')){
                r=6;
            } 
            else if(((casilla_02==o)&&casilla_09==' ')){
                r=8;
            }
            else if(casilla_01==o||casilla_01==x||casilla_02==o||casilla_02==x||casilla_03==o||casilla_03==x||casilla_04==o||casilla_04==x||casilla_05==o||casilla_05==x||casilla_06==o||casilla_06==x||casilla_07==o||casilla_07==x||casilla_08==o||casilla_08==x||casilla_09==o||casilla_09==x){
                r= std::rand()%9;
            }   
            else if((((casilla_04==x && casilla_07==x)||(casilla_07==x && casilla_04==x))&& casilla_01==' ')||(((casilla_02==x && casilla_03==x)||(casilla_03==x && casilla_02==x))&& casilla_01==' ')||(((casilla_05==x && casilla_09==x)||(casilla_09==x && casilla_05==x))&& casilla_01==' ')){
                r= 0;
            }
            else if((((casilla_01==x && casilla_03==x)||(casilla_03==x && casilla_01==x))&& casilla_02==' ')||(((casilla_05==x && casilla_08==x)||(casilla_08==x && casilla_05==x))&& casilla_02==' ')){
                r= 1;
            }
            else if((((casilla_01==x && casilla_02==x)||(casilla_02==x && casilla_01==x))&& casilla_03==' ')||(((casilla_05==x && casilla_07==x)||(casilla_07==x && casilla_05==x))&& casilla_03==' ')||(((casilla_06==x && casilla_09==x)||(casilla_09==x && casilla_06==x))&& casilla_03==' ')){
                r= 2;
            }
            else if((((casilla_01==x && casilla_07==x)||(casilla_07==x && casilla_01==x))&& casilla_04==' ')||(((casilla_05==x && casilla_06==x)||(casilla_06==x && casilla_05==x))&& casilla_04==' ')){
                r= 3;
            }
            else if((((casilla_01==x && casilla_09==x)||(casilla_09==x && casilla_01==x))&& casilla_05==' ')||(((casilla_02==x && casilla_08==x)||(casilla_08==x && casilla_02==x))&& casilla_05==' ')||(((casilla_03==x && casilla_07==x)||(casilla_07==x && casilla_03==x))&& casilla_05==' ')||(((casilla_04==x && casilla_06==x)||(casilla_06==x && casilla_04==x))&& casilla_05==' ')){
                r= 4;
            }
            else if((((casilla_03==x && casilla_09==x)||(casilla_09==x && casilla_03==x))&& casilla_06==' ')||(((casilla_04==x && casilla_05==x)||(casilla_05==x && casilla_04==x))&& casilla_06==' ')){
                r= 5;
            }
            else if((((casilla_01==x && casilla_04==x)||(casilla_04==x && casilla_01==x))&& casilla_07==' ')||(((casilla_05==x && casilla_03==x)||(casilla_03==x && casilla_05==x))&& casilla_07==' ')||(((casilla_08==x && casilla_09==x)||(casilla_09==x && casilla_08==x))&& casilla_07==' ')){
                r= 6;
            }
            else if((((casilla_07==x && casilla_09==x)||(casilla_09==x && casilla_07==x))&& casilla_08==' ')||(((casilla_02==x && casilla_05==x)||(casilla_05==x && casilla_02==x))&& casilla_08==' ')){
                r= 7;
            }
            else if((((casilla_07==x && casilla_08==x)||(casilla_08==x && casilla_07==x))&& casilla_09==' ')||(((casilla_05==x && casilla_01==x)||(casilla_01==x && casilla_05==x))&& casilla_09==' ')||(((casilla_03==x && casilla_06==x)||(casilla_06==x && casilla_03==x))&& casilla_09==' ')){
                r= 8;
            }
            if((((casilla_04==o && casilla_07==o)||(casilla_07==o && casilla_04==o))&& casilla_01==' ')||(((casilla_02==o && casilla_03==o)||(casilla_03==o && casilla_02==o))&& casilla_01==' ')||(((casilla_05==o && casilla_09==o)||(casilla_09==o && casilla_05==o))&& casilla_01==' ')){
                r= 0;
            }
            else if((((casilla_01==o && casilla_03==o)||(casilla_03==o && casilla_01==o))&& casilla_02==' ')||(((casilla_05==o && casilla_08==o)||(casilla_08==o && casilla_05==o))&& casilla_02==' ')){
                r= 1;
            }
            else if((((casilla_01==o && casilla_02==o)||(casilla_02==o && casilla_01==o))&& casilla_03==' ')||(((casilla_05==o && casilla_07==o)||(casilla_07==o && casilla_05==o))&& casilla_03==' ')||(((casilla_06==o && casilla_09==o)||(casilla_09==o && casilla_06==o))&& casilla_03==' ')){
                r= 2;
            }
            else if((((casilla_01==o && casilla_07==o)||(casilla_07==o && casilla_01==o))&& casilla_04==' ')||(((casilla_05==o && casilla_06==o)||(casilla_06==o && casilla_05==o))&& casilla_04==' ')){
                r= 3;
            }
            else if((((casilla_01==o && casilla_09==o)||(casilla_09==o && casilla_01==o))&& casilla_05==' ')||(((casilla_02==o && casilla_08==o)||(casilla_08==o && casilla_02==o))&& casilla_05==' ')||(((casilla_03==o && casilla_07==o||(casilla_07==o && casilla_03==o))&& casilla_05==' ')||(((casilla_04==o && casilla_06==o)||(casilla_06==o && casilla_04==o))&& casilla_05==' '))){
                r= 4;
            }
            else if((((casilla_03==o && casilla_09==o)||(casilla_09==o && casilla_03==o))&& casilla_06==' ')||(((casilla_04==o && casilla_05==o)||(casilla_05==o && casilla_04==o))&& casilla_06==' ')){
                r= 5;
            }
            else if((((casilla_01==o && casilla_04==o)||(casilla_04==o && casilla_01==o))&& casilla_07==' ')||(((casilla_05==o && casilla_03==o)||(casilla_03==o && casilla_05==o))&& casilla_07==' ')||(((casilla_08==o && casilla_09==o)||(casilla_09==o && casilla_08==o))&& casilla_07==' ')){
                r= 6;
            }
            else if((((casilla_07==o && casilla_09==o)||(casilla_09==o && casilla_07==o))&& casilla_08==' ')||(((casilla_02==o && casilla_05==o)||(casilla_05==o && casilla_02==o))&& casilla_08==' ')){
                r= 7;
            }
            else if((((casilla_07==o && casilla_08==o)||(casilla_08==o && casilla_07==o))&& casilla_09==' ')||(((casilla_05==o && casilla_01==o)||(casilla_01==o && casilla_05==o))&& casilla_09==' ')||(((casilla_03==o && casilla_06==o)||(casilla_06==o && casilla_03==o))&& casilla_09==' ')){
                r= 8;
            }

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
	while(i<= 3)
	{
		
		//variables entrada jugador 1

		std::cout << "jugador uno escoja casilla" << std::endl;
		std::cin >> A_3;
		//cambios en el tablero
		int cont = {0};
		switch(A_3)
		{
			do
			{
				case '1':
				case '2':
				case '3':
					
					if (A_3 == '1' || A_3 == '2' || A_3 == '3')
					{
						if ((A_3 == '1'&& ((casilla_01 != 'x') && (casilla_01 != '0'))))
						{
							casilla_01 = '0';
							i++;
							break;
						}
						else if (A_3 == '2'&& ((casilla_02 != 'x') && (casilla_02 != '0')))
						{
							casilla_02 = '0';
							i++;
							break;
						}
						else if (A_3 == '3'&& ((casilla_03 != 'x') && (casilla_03 != '0')))
						{
							casilla_03 = '0';	
							i++;
							break;
						}
					
						else 
						{
							std::cout << "no esta dentro del rango de numeros o la casilla esta ocupada" << std::endl;
							cont++;
						}
						
					}
				
			
			case '4':
			case '5':
			case '6':
				
					if (A_3 == '4' || A_3 == '5' || A_3 == '6')
					{
						if (A_3 == '4'&& ((casilla_04 != 'x') && (casilla_04 != '0')))
						{
							casilla_04 = '0';
							i++;
							break;
						}
						else if (A_3 == '5'&& ((casilla_05 != 'x') && (casilla_05 != '0')))
						{
							casilla_05 = '0';
							i++;
							break;
						}
						else if (A_3 == '6'&& ((casilla_06 != 'x') && (casilla_06 != '0')))
						{
							casilla_06 = '0';	
							i++;
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
							i++;
							break;
						}
						else if (A_3 == '8'&& ((casilla_08 != 'x') && (casilla_08 != '0')))
						{
							casilla_08 = '0';
							i++;
							break;
						}
						else if (A_3 == '9' && ((casilla_09 != 'x') && (casilla_09 != '0')))
						{
							casilla_09 = '0';	
							break;
							i++;
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
			}while(cont <= 3);
		}
	
		
		
	
				std::cout <<"      1   2   3" << std::endl;
				std::cout <<"  A | "<< casilla_01 << " | "<< casilla_02 << " | " << casilla_03 <<" |" << std::endl;
				std::cout <<"------------------"<< std::endl;
				std::cout <<"  B | "<< casilla_04 << " | "<< casilla_05 << " | " << casilla_06 <<" |" << std::endl;
				std::cout <<"------------------"<< std::endl;
				std::cout <<"  C | "<< casilla_07 << " | "<< casilla_08 << " | " << casilla_09 <<" |" << std::endl;
	
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

	}
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
	return 0;
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
	//salida inicial de indicaciones 
			
	//tablero de indicacion de cordenadas 		 
		/*
			std::cout <<"      1   2   3" << std::endl;
			std::cout <<"  A | "<< cel_01 << " | "<< cel_02 << " | " << cel_03 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  B | "<< cel_04 << " | "<< cel_05 << " | " << cel_06 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  C | "<< cel_07 << " | "<< cel_08 << " | " << cel_09 <<" |" << std::endl;
		*/
	//tablero funcional juego 
		/*
			std::cout <<"      1   2   3" << std::endl;
			std::cout <<"  A | "<< casilla_01 << " | "<< casilla_02 << " | " << casilla_03 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  B | "<< casilla_04 << " | "<< casilla_05 << " | " << casilla_06 <<" |" << std::endl;
			std::cout <<"------------------"<< std::endl;
			std::cout <<"  C | "<< casilla_07 << " | "<< casilla_08 << " | " << casilla_09 <<" |" << std::endl;
		*/
	//variables entrada
/*if y else 
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
	

/*	switch(A_1)
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





