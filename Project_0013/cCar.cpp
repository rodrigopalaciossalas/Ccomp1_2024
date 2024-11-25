#include "cCar.h"
#include <iostream>

cCar::cCar()
{
	Modelo = nullptr;
	Marca = nullptr;
	Placa = nullptr;
}

void cCar::setModelo( const char* in_Modelo)
{
	if(in_Modelo!= nullptr)
	{
		unsigned int nro_char = 0;
		while(in_Modelo[nro_char]!='\0')
		{
			nro_char++;
		}
		if(Modelo!=nullptr)
		{
			delete[] Modelo;
			Modelo = nullptr;
		}
		
		Modelo = new char[nro_char+1];
		for(unsigned int i=0;i<nro_char;i++)
		{
			Modelo[i] = in_Modelo[i];
		}
		Modelo[nro_char++]='\0';
	}
	else
	{
		std::cout<<"\nBad char* parameter";
	}
}	

void cCar::setMarca( const char* in_Marca)
{
	if(in_Marca!= nullptr)
	{
		unsigned int nro_char = 0;
		while(in_Marca[nro_char]!='\0')
		{
			nro_char++;
		}
		if(Marca!=nullptr)
		{
			delete[] Marca;
			Marca = nullptr;
		}
		
		Marca = new char[nro_char+1];
		for(unsigned int i=0;i<nro_char;i++)
		{
			Marca[i] = in_Marca[i];
		}
		Marca[nro_char++]='\0';
	}
	else
	{
		std::cout<<"\nBad char* parameter";
	}
}	

void cCar::setPlaca( const char* in_Placa)
{
	if(in_Placa!= nullptr)
	{
		unsigned int nro_char = 0;
		while(in_Placa[nro_char]!='\0')
		{
			nro_char++;
		}
		if(Placa!=nullptr)
		{
			delete[] Placa;
			Placa = nullptr;
		}
		
		Placa = new char[nro_char+1];
		for(unsigned int i=0;i<nro_char;i++)
		{
			Placa[i] = in_Placa[i];
		}
		Placa[nro_char++]='\0';
	}
	else
	{
		std::cout<<"\nBad char* parameter";
	}
}

const char* cCar::getModelo()
{
	return Modelo;
}

const char* cCar::getMarca()
{
	return Marca;
}

const char* cCar::getPlaca()
{
	return Placa;
}

void cCar::print()
{
	std::cout<<"\nModelo: "<<getModelo();
	std::cout<<"\nMarca: "<<getMarca();
	std::cout<<"\nPlaca: "<<getPlaca();
	
	return;
}

void cCar::operator=(cCar const& obj)
{
    if(obj.Modelo!=nullptr )
	{
		setModelo(obj.Modelo);
	}
	
	if(obj.Marca!=nullptr )
	{
		setMarca(obj.Marca);
	}
	
	if(obj.Placa!=nullptr )
	{
		setPlaca(obj.Placa);
	}
    return;
}

cCar::~cCar()
{
	if(Modelo != nullptr)
	{
		delete[] Modelo;
	}
	
	if( Marca != nullptr)
	{
		delete[] Marca;
	}
	
	if( Placa != nullptr)
	{
		delete[] Placa;
	}
	Modelo=nullptr;
	Marca=nullptr;
	Placa=nullptr;
}
