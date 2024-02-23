/*
Parcial 02
Michael Alejandro Guauque Portilla - 2022505
05/12/2023

*/


#include <iostream>
#include "almacen.h"

int main() {
	try{
		Almacen * falabella = new Almacen();
		//creacion de objetos tipo Prenda 10,25,35
		Prenda * camisa = new Prenda(1020,"Camisa manga corta negra","L",45000,NULL);
		Prenda * camisilla = new Prenda(1020,"Camisilla blanca","XL",40000,new Etiqueta());
		Prenda * blusa = new Prenda(1021,"Camisa manga corta blanca","M",68900,new Etiqueta("azul",0.1));
		Prenda * pantalon = new Prenda(1030,"Pantalon jean azul","32",105000,new Etiqueta("rojo",0.25));
		Prenda * pantalonShort = new Prenda(1035,"Pantalon corto azul mujer","12",95000,new Etiqueta("verde",0.35));
		
		//agregar prendas al almacen
		falabella -> agregarPrenda(camisa);
		falabella -> agregarPrenda(camisilla);
		falabella -> agregarPrenda(blusa);
		falabella -> agregarPrenda(pantalon);
		falabella -> agregarPrenda(pantalonShort);
		
		Compra * unaCompra = new Compra("05/12/2023");
		falabella -> agregarCompra(unaCompra);
		
		//registrar compras
		short opcion = 1;
		while(opcion == 1){
			try{
				int codigoPrenda;
				cout << "Digite el codigo de la prenda: ";
				cin >> codigoPrenda;
				Prenda * laPrenda = falabella->buscarPrenda(codigoPrenda);
				cout << "Codigo: "<< laPrenda->getCodigo()<<"\nDescripcion: "<<laPrenda->getDescripcion()
				<<"\nValor sin descuento: "<<laPrenda->getValorSinDescuento()<<"\nValor descuento: "
				<<laPrenda->calcularValorDescuento()<<"\nValor con descuento: "<<laPrenda->calcularPrecioVenta()<<endl;
				//agregar la prenda a la compra
				unaCompra -> agregarPrenda(laPrenda);
				//mostrar el valor de la compra
				cout<<"Total a pagar: "<<unaCompra->calcularValorTotal()<<endl;
			}catch (Excepcion * exc){ //si no encuentra la prenda muestra el error y pregunta si desea continuar comprando
				cout << exc->getMensaje();
			}
			//continuar compra
			cout<<"\nDesea continuar comprando 1: Si. / 0: No.  :";
			cin >> opcion;
		}
	delete falabella, camisa, camisilla, blusa, pantalon, pantalonShort, unaCompra;	
	}catch (Excepcion * exc){
		cout << exc->getMensaje();
	}
	
	
	
	return 0;
}
