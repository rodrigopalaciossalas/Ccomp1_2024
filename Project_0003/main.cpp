// ASCII codes

#include <iostream>

#ifdef _WIN32
    #include <windows.h>
    #define CLEAR_COMMAND "cls"
#elif defined(__APPLE__) || defined(__MACH__) || defined(__linux__)
    #include <unistd.h>
    #include <termios.h>
    #define CLEAR_COMMAND "clear"
#endif

int main() 
{    
	std::system(CLEAR_COMMAND);
	std::cout<<"\x1B[2J";
	std::cout<<"\x1B[=4h";

	std::cout<<"\x1B[1;37;46m";		
	std::cout<<"/**************************************************/\n";
	std::cout<<"Profesor: D.Sc. Manuel Eduardo Loaiza Fernandez\n";
	std::cout<<"/**************************************************/\n";
	std::cout<<"\x1B[m";

	char ejem{'\0'};
	
	std::cout<<"ASCII codes and characters \n";
	for( int i = 32; i < 127 ; i++)
	{
		ejem = static_cast<char>(i);
		std::cout<<"char = " << ejem << " - int = " << i << "\n";
	};
	 char tablero[m][n];
	return 0;
}
