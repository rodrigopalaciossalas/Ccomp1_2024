// Numeros primos
#ifdef __has_include
  #if __has_include(<bits/stdc++.h>)
    #include <bits/stdc++.h>
  #else
    #include <iostream>
    #include <vector>
    #include <cmath>
    #include <algorithm>
  #endif
#else
  #include <iostream>
  #include <vector>
  #include <cmath>
  #include <algorithm>
#endif

using namespace std;

int main() 
{
	int n{0};
	std::cout<<"\nIngrese un numero: "<<std::endl;
	cin>> n;
	
	if ( n < 2  )
	{
		std::cout <<"\nNo tenemos numeros primos !!!\n"; 
	}
	else
	{
		std::cout <<"\nTenemos los siguientes numeros primos: \n"; 
		while( n >= 2 )
		{
			int nTmp = n-1;
			int contador{0};
			
			while( nTmp >= 2 )
			{
				if( ((n%nTmp) == 0))
				{
					contador++;
				}
				
				if( contador > 0 )
				{
					break;
				}
				
				nTmp--;
			}
			
			if(contador == 0 )
			{
				std::cout<<"\a\nPrimo = " << n;
			}
			
			n--;
		} 
	}
			
	return 0;
}