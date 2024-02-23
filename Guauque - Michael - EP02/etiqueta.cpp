#include "etiqueta.h"

Etiqueta::Etiqueta(){
	this->color ="";
	this->porcentajeDescuento = 0;
}

Etiqueta::Etiqueta(string color, float porcentajeDescuento){
	this->color = color;
	this->porcentajeDescuento = porcentajeDescuento;
}

string Etiqueta::getColor(){
	return this->color;
}

float Etiqueta::getPorcentajeDescuento(){
	return this->porcentajeDescuento;
}

Etiqueta::~Etiqueta()
{
}
