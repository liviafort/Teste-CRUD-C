#ifndef MOTO_H
#define MOTO_H

#include "Automovel.h"
#include <iostream>
#include <string>
using namespace std;

class Moto : public Automovel{
public:
    //parametros
    double cilindradas;

    //construtor
    Moto(string novaMarca, string novoModelo, int novoAno, string novaPlaca, double cilindradas);
    
    //metodos
    void setCILINDRADAS(double cilindradas);
    double getCILINDRADAS();
};

#endif