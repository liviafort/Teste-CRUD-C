#ifndef CARRO_H
#define CARRO_H

#include <iostream>
#include "Automovel.h"
#include <string>
using namespace std;

class Carro : public Automovel {
public:
    //parametros
    int portas;
    string tipoDeMala;

    //construtor
    Carro(string novaMarca, string novoModelo, int novoAno, string novaPlaca, int portas, string tipoDeMala);

    //métodos
    void setPORTAS(int portas);
    int getPORTAS();
    void setTIPODEMALA(string tipoDeMala);
    string getTIPODEMALA();
};
#endif

