#ifndef CPARKING_H
#define CPARKING_H

#include "cCar.h"

class cParking
{

	private:
	cCar *carList;
	int *enterHour;
	int *outHour;
	int nro_cars;

	public:

	cParking();
	void insertCar();
	void findCar(const char* in_Placa);
	void printPark();


	~cParking();

};

#endif




int x = 10;
int *ptr = &x; // ptr ahora apunta a la dirección de x
cout << *ptr;  // Imprime 10, porque *ptr accede al valor de x
