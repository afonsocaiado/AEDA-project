#include "funcionario.h"

#include <iostream>

using namespace std;

Funcionario::Funcionario(string nome, char sexo, Data dataNascimento, int passaporte, string funcao, Data dataChegada, Data dataPartida, double custoDiario):nome(nome), sexo(sexo), dataNascimento(dataNascimento), passaporte(passaporte), funcao(funcao), custoDiario(custoDiario)
{
    this->dataChegada = dataChegada;
    this->dataPartida = dataPartida;
}

Data Funcionario::getDataChegada()
{
    return dataChegada;
}

Data Funcionario::getDataPartida()
{
    return dataPartida;
}

void Funcionario::setDataChegada(Data dataChegada)
{
    this->dataChegada = dataChegada;
}

void Funcionario::setDataPartida(Data dataPartida)
{
    this->dataPartida = dataPartida;
}

Atleta::Atleta(string nome, Data dataNascimento, int passaporte, string funcao, Data dataChegada, Data dataPartida, double custoDiario, string modalidade, double peso, double altura, int ranking):modalidade(modalidade), peso(peso), altura(altura), ranking(ranking), Funcionario(nome, dataNascimento, passaporte, funcao, dataChegada, dataPartida, custoDiario)
{}

Atleta::~Atleta()
{
    //Jogosol::atletas.erase()
}

bool Atleta::operator== (const Atleta atleta) const
{
    return this->passaporte == atleta.passaporte;
}
