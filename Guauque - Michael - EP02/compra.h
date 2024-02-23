#ifndef COMPRA_H
#define COMPRA_H
#include "prenda.h"
#include <list>

class Compra{
	private:
		string fecha;
		list<Prenda*> * prendas;
	public:
		Compra(string fecha);
		~Compra();
		
		//metodo de acceso
		string getFecha();
		
		//agregar la prenda a la lista
		void agregarPrenda(Prenda * prenda);
		
		//calcular el valor de la compra
		long calcularValorTotal();
};

#endif
