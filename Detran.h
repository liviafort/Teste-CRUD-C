#ifndef DETRAN_H
#define DETRAN_H

#include "Moto.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Detran {
	public:
		//parametros
		//listaCarrosApreendidos
		vector<Moto> listaMotosApreendidas;

		//construtor
		Detran();

		//metodos - Crud_Moto
		vector<Moto> adicionaMotoApreendida(Moto novaMoto);
		vector<Moto> removeMotoApreendida();
		vector<Moto> editaMotoApreendida(Moto novaMoto);
		void mostrarListaMoto();

		//metodos - Crud_Carro
};
#endif

