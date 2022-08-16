#ifndef AUTOMOVEL_H
#define AUTOMOVEL_H

#include <iostream>
#include <string>
using namespace std;

class Automovel {
public:
    //parametros
    string marca;
    string modelo;
    int ano;
    string placa;

    //construtor
    Automovel(string marca, string modelo, int ano, string placa);
    //métodos
    void setMARCA(string marca);
    string getMARCA();
    void setMODELO(string modelo);
    string getMODELO();
    void setANO(int ano);
    int getANO();
    void setPLACA(string placa);
    string getPLACA();
};
#endif
