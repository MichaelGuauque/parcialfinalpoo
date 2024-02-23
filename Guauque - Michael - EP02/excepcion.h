/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exception.h
 * Author: ajvelez
 *
 * Created on 12 de mayo de 2022, 3:38 p. m.
 */

#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <string>
using namespace std;


class Excepcion {
public:
    Excepcion(string message) ;
    ~Excepcion();
    string getMensaje() ;

private:
    string message;

};

#endif /* EXCEPTION_H */

