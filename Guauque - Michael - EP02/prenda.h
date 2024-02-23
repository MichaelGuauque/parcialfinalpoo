#ifndef PRENDA_H
#define PRENDA_H
#include "etiqueta.h"

class Prenda{
	private:
		int codigo;
		string descripcion;
		string talla;
		long valorSinDescueto;
		Etiqueta * etiqueta;
		
	public:
		Prenda(int codigo, string descripcion, string talla, long valorSinDescuento, Etiqueta * etiqueta);
		~Prenda();
		//metodos de acceso
		int getCodigo();
		string getDescripcion();
		string getTalla();
		long getValorSinDescuento();
		Etiqueta * getEtiqueta();
		
		//otros metodos
		long calcularValorDescuento();
		long calcularPrecioVenta();
};

#endif
