#include "Detran.h"
#include "Moto.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
 
Detran::Detran(){
	this->listaMotosApreendidas = {};
}

vector<Moto> Detran::adicionaMotoApreendida(Moto novaMoto) {
	this->listaMotosApreendidas.push_back(novaMoto);
	cout << "\n*Moto adicionada com sucesso*\n" << endl;
	return this->listaMotosApreendidas;
}

vector<Moto> Detran::removeMotoApreendida() {
	this->listaMotosApreendidas.pop_back();
	cout << "\n*Moto removida com sucesso*\n" << endl;
	return listaMotosApreendidas;
}

vector<Moto> Detran::editaMotoApreendida(Moto novaMoto) {
	int escolha;
	string atualizacao2;
	cout << "Edite os dados das motos: " << endl;
	cout << "1 - Placa\n2 - Marca\n3 - Modelo\n4 - Ano\n5 - Cilindradas" << endl;
	cin >> escolha;
	for (Moto i : this->listaMotosApreendidas) {
		if (escolha == 1) {
			if (i.placa == novaMoto.placa) {
				cout << "Digite a nova placa: ";
				cin >> atualizacao2;
				novaMoto.setPLACA(atualizacao2);
				replace(this->listaMotosApreendidas.begin(), this->listaMotosApreendidas.end(), i.placa, novaMoto.getPLACA());
			}
		}
	}
	return this->listaMotosApreendidas;
}

void Detran::mostrarListaMoto() {
	if (this->listaMotosApreendidas.size() == 0) {
		cout << "Opa! Nao ha nada aqui" << endl;
	}
	else {
		cout << "Lista de motos apreendidas:\n" << endl;
		for (Moto i : this->listaMotosApreendidas) {
			cout << "Placa: " << i.placa << endl;
			cout << "Marca: " << i.marca << endl;
			cout << "Modelo: " << i.modelo << endl;
			cout << "Ano: " << i.ano << endl;
			cout << "Cilindradas: " << i.cilindradas << "\n" << endl;
		}
	}
}

