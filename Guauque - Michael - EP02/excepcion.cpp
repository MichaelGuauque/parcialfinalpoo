/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Excepcion.cpp
 * Author: ajvelez
 * 
 * Created on 12 de mayo de 2022, 3:38 p. m.
 */

#include "excepcion.h"

Excepcion::Excepcion(string message) {
	this->message = message;
}

Excepcion::~Excepcion() {
}

string Excepcion::getMensaje() {
	return this->message;
}
