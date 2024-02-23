#include "almacen.h"

Almacen::Almacen(){
	this->compras = new list<Compra*>();
	this->prendas = new list<Prenda*>();
}

void Almacen::agregarCompra(Compra * compra){
	compras->push_back(compra);
}

void Almacen::agregarPrenda(Prenda * prenda){
	prendas-> push_back(prenda);
}

Prenda * Almacen::buscarPrenda(int codigo){
	list<Prenda*>::iterator it; 
	Prenda * unaPrenda;
	for(it = this->prendas->begin(); it != this->prendas->end();it++){
		unaPrenda = *it;
		if(unaPrenda->getCodigo() == codigo)
			return unaPrenda;
	}throw new Excepcion("Error: no se encontro la prenda con el codigo ingresado.");
}

Almacen::~Almacen()
{
}
