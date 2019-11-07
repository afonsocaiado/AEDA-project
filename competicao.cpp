#include "competicao.h"
#include "prova.h"

#include <vector>
#include <string>

using namespace std;

Competicao::Competicao()
{

}

vector <*prova> Competicao::getProvas()
{
    return provas;
}
bool Competicao::getIndividual()
{
    return individual;
}
vector<*atleta> Competicao::getAtletasInscritos()
{
    return atletasinscritos;
}
vector<string> Competicao::getMedalhados()
{
    return medalhados;
}

void Competicao::setProvas(vector<*prova> provas)
{
    this->provas = provas;
}
void Competicao::setIndividual(bool individual)
{
    this->individual = individual;
}
void Competicao::setAtletasInscritos(vector<*atleta> atletas)
{
    atletasinscritos = atletas;
}
void Competicao::setMedalhados(vector<string> medalhados)
{
    this->medalhados = medalhados;
}