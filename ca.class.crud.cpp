#include <iostream>
#include <string>
#include "Automovel.h"
#include "Carro.h"
#include "Detran.h"
#include "Moto.h"

using namespace std;
int main()
{
    //criação objeto
    string novaMarca = "Honda", novoModelo = "Trail", novaPlaca = "783xhk";
    int novoAno = 2018;
    double novasCilindradas = 1084;
    Moto moto1 = Moto(novaMarca, novoModelo, novoAno, novaPlaca, novasCilindradas);

    //adicionando objeto no vetor
    Detran detran1;
    detran1.adicionaMotoApreendida(moto1);
    detran1.mostrarListaMoto();

    //adicionando novo objeto
    string novaMarca1 = "Honda", novoModelo1 = "Big Trail", novaPlaca1 = "tye234";
    int novoAno1 = 2015;
    double novasCilindradas1 = 1250;
    Moto moto2 = Moto(novaMarca1, novoModelo1, novoAno1, novaPlaca1, novasCilindradas1);
    detran1.adicionaMotoApreendida(moto2);
    detran1.mostrarListaMoto();

    //removendo objeto no vetor
    detran1.removeMotoApreendida();
    detran1.mostrarListaMoto();

    //editar moto apreendida
    detran1.editaMotoApreendida(moto1);
    detran1.mostrarListaMoto();

}

