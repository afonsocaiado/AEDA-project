#include "competicao.h"

#include <vector>
#include <string>

using namespace std;

Competicao::Competicao() {}

Competicao::Competicao(string nome, bool individual):nome(nome), individual(individual){}

vector<Prova> Competicao::getProvas()
{
    return provas;
}
bool Competicao::getIndividual()
{
    return individual;
}

vector<string> Competicao::getMedalhados()
{
    return medalhados;
}

void Competicao::setProvas(vector<Prova> provas)
{
    this->provas = provas;
}

void Competicao::setMedalhados(vector<string> medalhados)
{
    this->medalhados = medalhados;
}

bool Competicao::addProva()
{
    return true;
}