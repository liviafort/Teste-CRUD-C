#include "Moto.h"
#include <iostream>
using namespace std;

Moto::Moto(string novaMarca, string novoModelo, int novoAno, string novaPlaca, double novasCilindradas) :
	Automovel(novaMarca, novoModelo, novoAno, novaPlaca) {
	this->cilindradas = novasCilindradas;
}

void Moto::setCILINDRADAS(double novasCilindradas) {
	this->cilindradas = novasCilindradas;
}

double Moto::getCILINDRADAS() {
	return this->cilindradas;
}

