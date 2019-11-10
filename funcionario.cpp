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

bool Funcionario::criarFuncionario(Funcionario funcionario)
{
    //A Implementar
}

bool Funcionario::eliminarFuncionario(Funcionario funcionario)
{
    //A Implementar
}

bool Funcionario::operator== (const Funcionario funcionario) const
{
    return this->passaporte == funcionario.passaporte;
}

Atleta::Atleta(string nome, char sexo, Data dataNascimento, int passaporte, string funcao, Data dataChegada, Data dataPartida, double custoDiario, string modalidade, double peso, double altura, int ranking):modalidade(modalidade), peso(peso), altura(altura), ranking(ranking), Funcionario(nome, sexo, dataNascimento, passaporte, funcao, dataChegada, dataPartida, custoDiario)
{}

Atleta::~Atleta()
{
    //Jogosol::atletas.erase()
}

void Atleta::addCompeticao(Competicao competicao)
{
    competicoes.push_back(competicao);
}

void Atleta::addResultado(Resultado resultado)
{
    resultados.push_back(resultado);
}

ostream &operator<<(ostream & o, const Funcionario &f)
{
    o << f.nome << ";" << f.sexo << ";" << f.dataNascimento << ";" << f.passaporte << ";" << f.funcao << ";" << f.dataPartida << ";" << f.dataChegada << ";" << f.custoDiario << ";";
}

ostream &operator<<(ostream & o, const Atleta &a);
{
    o << a.nome << ";" << a.sexo << ";" << a.dataNascimento << ";" << a.passaporte << ";" << a.funcao << ";" << a.dataPartida << ";" << a.dataChegada << ";" << a.custoDiario << ";" << a.modalidade << ";" << a.peso << ";" << a.altura << ";" << a.ranking << ";" << endl;
}
