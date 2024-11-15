#include <iostream>

#ifdef _WIN32
    #include <windows.h>
    #define CLEAR_COMMAND "cls"
#elif defined(__APPLE__) || defined(__MACH__) || defined(__linux__)
    #include <unistd.h>
    #include <termios.h>
    #define CLEAR_COMMAND "clear"
#endif
	bool a_1a = true;
	char a_1b = 1;
	int  a_1c = {1};
	float a_1d = {1.223222};
	double a_1e = {1.2232};
	
int main() 
{   //tamaño de bts
	std::cout << sizeof a_1a << std::endl;
	std::cout << sizeof a_1b << std::endl;
	std::cout << sizeof a_1c << std::endl;
	std::cout << sizeof a_1d << std::endl;
	std::cout << sizeof a_1e << std::endl;
	// donde esta la memoria
	std::cout << &a_1a << std::endl;
	std::cout << &a_1b << std::endl;
	std::cout << &a_1c << std::endl;
	std::cout << &a_1d << std::endl;
	std::cout << &a_1e << std::endl;
	// condicional
	int aa = 1;
	std::cout << "ingrse primera variable";
	std::cin >> aa;
	
	int bb = 1;
	std::cout << "ingrse segunda variable";
	std::cin >> bb;
	
	if (aa > bb)
	{
		std::cout << "el primer valor es mayor" << aa << std::endl;	
	}
	else if (aa == bb)
	{
		std::cout << "los valores son iguales" << std::endl;
	}
	else if (aa < bb)
	{
		std::cout << " el segundo valor es mayor" << std::endl;	
	}
	else
	{
		std::cout << "no es un numero" << std::endl;
	}
	return 0;

}