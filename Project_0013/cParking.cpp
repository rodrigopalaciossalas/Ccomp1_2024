#include "cParking.hpp"
#include <iostream>

cParking::cParking()
{
	carList = nullptr;
	enterHour = nullptr;
	outHour = nullptr;
	nro_cars = 0;
}

void cParking::insertCar()
{
	cCar *tmp_list{nullptr};
	tmp_list = new cCar[nro_cars+1];
	
	int *tmp_enterHour;
	tmp_enterHour = new int[nro_cars+1];
	
	int *tmp_outHour;
	tmp_outHour = new int[nro_cars+1];
	
	for(int i=0;i<nro_cars;i++)
	{
		tmp_list[i] = carList[i];
		tmp_enterHour[i] = enterHour[i];
		tmp_outHour[i] = outHour[i];
	}
	
	char tmp_str_00[40];
	std::cout<<"\nEnter marca of car: ";
	std::cin>>tmp_str_00;
	tmp_list[nro_cars].setMarca(tmp_str_00);
	
	char tmp_str_01[40];
	std::cout<<"Enter modelo of car: ";
	std::cin>>tmp_str_01;
	tmp_list[nro_cars].setModelo(tmp_str_01);
	
	char tmp_str_02[40];
	std::cout<<"Enter placa of car: ";
	std::cin>>tmp_str_02;
	tmp_list[nro_cars].setPlaca(tmp_str_02);
	
	int tmp_int_00{-1};
	std::cout<<"Enter hora entrada: ";
	std::cin>>tmp_int_00;
	tmp_enterHour[nro_cars]=tmp_int_00;
	
	int tmp_int_01{-1};
	std::cout<<"Enter hora salida: ";
	std::cin>>tmp_int_01;
	tmp_outHour[nro_cars]=tmp_int_01;
	std::cout<<std::endl;	
	
	nro_cars++;
	delete[] carList;
	delete[] enterHour;
	delete[] outHour;
	
	carList = tmp_list;
	enterHour = tmp_enterHour;
	outHour = tmp_outHour;
	
	return;
}

void cParking::findCar(const char* in_Placa)
{
	if(in_Placa!=nullptr)
	{
		int count;
		for(int i=0; i < nro_cars;i++)
		{	
			count = 0;
			bool isEqual{true};
			do
			{
				if(in_Placa[count]!= carList[i].getPlaca()[count])
				{
					isEqual = false;
					break;
				}
				++count;
			}while( in_Placa[count]!='\0' && 
			carList[i].getPlaca()[count]!='\0');
			
			if(isEqual)
			{
				std::cout<<"\nEl carro " << i << " esta en el estacionamiento y es: ";
				carList[i].print();
			}
		}		
	}
	else
	{
		std::cout<<"No hay una placa valida para buscar";
	}
	
	return;
}

void cParking::printPark()
{
	std::cout<<std::endl;
	for(int i=0;i<nro_cars;i++)
	{
		carList[i].print();
		std::cout<<"\nHora entrada: "<<enterHour[i];
		std::cout<<"\nHora salida: "<<outHour[i];
	}
	std::cout<<std::endl;
	return;
}

cParking::~cParking()
{
	if( carList != nullptr)
	{
		delete[] carList;
	}
	
	if( enterHour != nullptr)
	{
		delete[] enterHour;
	}
	
	if( outHour != nullptr)
	{
		delete[] outHour;
	}
	
	carList=nullptr;
	enterHour=nullptr;
	outHour=nullptr;
	nro_cars = -1;
}