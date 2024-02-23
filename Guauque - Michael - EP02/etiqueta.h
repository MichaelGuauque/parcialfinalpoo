#ifndef ETIQUETA_H
#define ETIQUETA_H
#include <string>
using namespace std;

class Etiqueta{
	private:
		string color;
		float porcentajeDescuento;
	public:
		Etiqueta();
		Etiqueta(string color, float porcentajeDescuento);
		~Etiqueta();
		
		string getColor();
		float getPorcentajeDescuento();
};

#endif
