#include "prenda.h"

Prenda::Prenda(int codigo, string descripcion, string talla, long valorSinDescuento, Etiqueta * etiqueta){
	if (etiqueta == NULL){
		this->etiqueta = new Etiqueta();
	}else{
		this->etiqueta = etiqueta;
	}
	this->codigo = codigo;
	this->descripcion = descripcion;
	this->talla = talla;
	this->valorSinDescueto = valorSinDescuento;
}

//metodos de acceso

int Prenda::getCodigo(){
	return this->codigo;
}

string Prenda::getDescripcion(){
	return this->descripcion;
}

string Prenda::getTalla(){
	return this->talla;
}

long Prenda::getValorSinDescuento(){
	return this->valorSinDescueto;
}

Etiqueta * Prenda::getEtiqueta(){
	return this->etiqueta;
}

long Prenda::calcularValorDescuento(){
	return this->etiqueta->getPorcentajeDescuento() * this->valorSinDescueto;
}

long Prenda::calcularPrecioVenta(){
	return this->valorSinDescueto - calcularValorDescuento();
}

Prenda::~Prenda(){
}
