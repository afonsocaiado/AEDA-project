#include "funcionario.h"
#include <iostream>

using namespace std;

Atleta::Atleta(string nome, Data dataNascimento, int passaporte, string funcao, Data dataChegada, Data dataPartida, double custoDiario, string modalidade, double peso, double altura, int ranking):modalidade(modalidade), peso(peso), altura(altura), ranking(ranking), Funcionario(nome, dataNascimento, passaporte, funcao, dataChegada, dataPartida, custoDiario)
{}

Atleta::~Atleta()
{}