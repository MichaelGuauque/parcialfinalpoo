#ifndef ALMACEN_H
#define ALMACEN_H
#include "compra.h"
#include "prenda.h"
#include "excepcion.h"

class Almacen{
	private:
		list<Compra*> * compras;
		list<Prenda*> * prendas;
	public:
		Almacen();
		~Almacen();
		
		//agregar elementos a las listas
		void agregarCompra(Compra * compra);
		void agregarPrenda(Prenda * prenda);
		
		//buscar prenda
		Prenda * buscarPrenda(int codigo);
};

#endif
