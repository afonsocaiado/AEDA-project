#include "funcionario.h"

#include <iostream>

using namespace std;

Funcionario::Funcionario():nome(""), sexo(), dataNascimento(), passaporte(0), funcao(""), custoDiario(0)
{
    //importancia do construtor vazio?
}

Funcionario::Funcionario(string nome, char sexo, Data dataNascimento, int passaporte, string funcao, Data dataChegada, Data dataPartida, double custoDiario):nome(nome), sexo(sexo), dataNascimento(dataNascimento), passaporte(passaporte), funcao(funcao), custoDiario(custoDiario)
{

    this->dataChegada = dataChegada;
    this->dataPartida = dataPartida;
}

Funcionario::~Funcionario()= default;

Funcionario &Funcionario::operator=(const Funcionario &f)
{
    if(this != &f)
    {
        this->nome = f.nome;
        this->sexo = f.sexo;
        this->dataNascimento = f.dataNascimento;
        this->passaporte = f.passaporte;
        this->funcao = f.funcao;
        this->dataChegada = f.dataChegada;
        this->dataPartida = f.dataPartida;
        this->custoDiario = f.custoDiario;
    }
    return *this;
}

string Funcionario::getNome()
{
    return nome;
}

string Funcionario::getFuncao()
{
    return funcao;
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

void Funcionario::setNome(string nome)
{
    this->nome = nome;
}

void Funcionario::setFuncao(string funcao)
{
    this->funcao = funcao;
}

void Funcionario::setDataPartida(Data dataPartida)
{
    this->dataPartida = dataPartida;
}

bool Funcionario::operator== (const Funcionario funcionario) const
{
    return this->passaporte == funcionario.passaporte;
}

void Funcionario::viewInfo() {
    cout << endl << "Nome: " << nome << endl;
    cout << endl << "Data de Nascimento: " << dataNascimento << endl;
    cout << endl << "Numero de Passaporte: " << passaporte << endl;
    cout << endl << "Estadia: " << dataChegada << " - " << dataPartida << endl;
}

Atleta::Atleta(string nome, char sexo, Data dataNascimento, int passaporte, string funcao, Data dataChegada, Data dataPartida, double custoDiario, string modalidade, double peso, int altura, int ranking):modalidade(modalidade), peso(peso), altura(altura), ranking(ranking), Funcionario(nome, sexo, dataNascimento, passaporte, funcao, dataChegada, dataPartida, custoDiario) {}

Atleta::~Atleta() = default;

void Atleta::addCompeticao(Competicao competicao)
{
    competicoes.push_back(competicao);
}

void Atleta::addResultado(Resultado resultado)
{
    resultados.push_back(resultado);
}

void Atleta::viewInfo() {
    cout << endl << "Nome: " << nome << endl;
    cout << endl << "Data de Nascimento: " << dataNascimento << endl;
    cout << endl << "Numero de Passaporte: " << passaporte << endl;
    cout << endl << "Estadia: " << dataChegada << " - " << dataPartida << endl;
    cout << endl << "Peso: " << peso << endl;
    cout << endl << "Altura: " << altura << endl;
    cout << endl << "Ranking: " << ranking << endl;
}

void Atleta::viewResultados() {

}

ostream &operator<<(ostream & o, const Funcionario &f)
{
    o << f.nome << ";" << f.sexo << ";" << f.dataNascimento << ";" << f.passaporte << ";" << f.funcao << ";" << f.dataPartida << ";" << f.dataChegada << ";" << f.custoDiario << ";";
    return o;
}

istream &operator>>(istream &i, Funcionario &f)
{
    string custoDiario;
    getline(i, f.nome, ';');
    i >> f.sexo;
    i.ignore();
    i >> f.dataNascimento;
    i.ignore();
    i >> f.passaporte;
    i.ignore();
    getline(i, f.funcao, ';');
    i >> f.dataChegada;
    i.ignore();
    i >> f.dataPartida;
    i.ignore();
    getline(i, custoDiario, ';');
    f.custoDiario = stod(custoDiario);
    i.ignore();
    return i;
}

ostream &operator<<(ostream & o, const Atleta &a)
{
    o << a.nome << ";" << a.sexo << ";" << a.dataNascimento << ";" << a.passaporte << ";" << a.funcao << ";" << a.dataPartida << ";" << a.dataChegada << ";" << a.custoDiario << ";" << a.modalidade << ";" << a.peso << ";" << a.altura << ";" << a.ranking << ";" << endl;
    return o;
}

istream &operator>>(istream &i, Atleta &a)
{
    string temp;
    getline(i, a.nome, ';');
    i >> a.sexo;
    i.ignore();
    i >> a.dataNascimento;
    i.ignore();
    i >> a.passaporte;
    i.ignore();
    getline(i, a.funcao, ';');
    i >> a.dataChegada;
    i.ignore();
    i >> a.dataPartida;
    i.ignore();
    getline(i, temp, ';');
    a.custoDiario = stod(temp);
    getline(i, a.modalidade, ';');
    getline(i, temp, ';');
    a.peso = stod(temp);
    i >> a.altura;
    i.ignore();
    i >> a.ranking;
    i.ignore(2, '\n');
    return i;
}
