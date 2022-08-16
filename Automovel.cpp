#include "Automovel.h"
#include <iostream>
using namespace std;

Automovel::Automovel(string novaMarca, string novoModelo, int novoAno, string novaPlaca) {
	this->marca = novaMarca;
	this->modelo = novoModelo;
	this->ano = novoAno;
	this->placa = novaPlaca;
}

void Automovel::setMARCA(string novaMarca) {
	this->marca = novaMarca;
}

string Automovel::getMARCA() {
	return this->marca;
}

void Automovel::setMODELO(string novoModelo) {
	this->modelo = novoModelo;
}

string Automovel::getMODELO() {
	return this->modelo;
}

void Automovel::setANO(int novoAno) {
	this->ano = novoAno;
}

int Automovel::getANO() {
	return this->ano;
}

void Automovel::setPLACA(string novaPlaca) {
	this->placa = novaPlaca;
}

string Automovel::getPLACA() {
	return this->placa;
}
