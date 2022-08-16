#include "Carro.h"
#include <iostream>
using namespace std;

Carro::Carro(string novaMarca, string novoModelo, int novoAno, string novaPlaca, int novasPortas, string novoTipoDeMala) :
	Automovel(novaMarca, novoModelo, novoAno, novaPlaca) {
	this->portas = novasPortas;
	this->tipoDeMala = novoTipoDeMala;
}

void Carro::setPORTAS(int novasPortas) {
	this->portas = novasPortas;
}

int Carro::getPORTAS() {
	return this->portas;
}

void Carro::setTIPODEMALA(string novoTipoDeMala) {
	this->tipoDeMala = novoTipoDeMala;
}

string Carro::getTIPODEMALA() {
	return this->tipoDeMala;
}

