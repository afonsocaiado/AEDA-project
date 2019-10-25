#include "competicao.h"
#include "prova.h"

#include <vector>
#include <string>

using namespace std;

competicao::competicao()
{

}

vector <*prova> competicao::getProvas()
{
    return provas;
}
bool competicao::getIndividual()
{
    return individual;
}
vector<*atleta> competicao::getAtletasInscritos()
{
    return atletasinscritos;
}
vector<string> competicao::getMedalhados()
{
    return medalhados;
}

void competicao::setProvas(vector<*prova> provas)
{
    this->provas = provas;
}
void competicao::setIndividual(bool individual)
{
    this->individual = individual;
}
void competicao::setAtletasInscritos(vector<*atleta> atletas)
{
    atletasinscritos = atletas;
}
void competicao::setMedalhados(vector<string> medalhados)
{
    this->medalhados = medalhados;
}