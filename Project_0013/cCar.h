#ifndef CCAR_H
#define CCAR_H

class cCar
{
	private:
	
	char* Modelo;
	char* Marca;
	char* Placa;
	
	public:
	
	cCar();
	void setModelo( const char* in_Modelo);
	void setMarca( const char* in_Marca);
	void setPlaca( const char* in_Placa);
	const char* getModelo();
	const char* getMarca();
	const char* getPlaca();
	
	void operator=(cCar const& obj);
	
	void print();
	~cCar();
	
};
#endif
