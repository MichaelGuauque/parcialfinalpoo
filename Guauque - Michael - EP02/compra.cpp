#include "compra.h"

Compra::Compra(string fecha){
	this->fecha = fecha;
	this->prendas = new list<Prenda*>();
}

//metodo de acceso
string Compra::getFecha(){
	return this->fecha;
}

//agregar prenda a la lista
void Compra::agregarPrenda(Prenda * prenda){
	prendas->push_back(prenda);
}

//calcula la suma del valor final de todas las prendas
long Compra::calcularValorTotal(){
	long total = 0;
	list<Prenda*>::iterator it;
	Prenda * unaPrenda;
	for(it=this->prendas->begin(); it != this->prendas->end(); it++){
		unaPrenda = *it;
		total += unaPrenda->calcularPrecioVenta();
	}
	return total;
}

Compra::~Compra()
{
}
