#include "competicao.h"

#include <vector>
#include <string>

using namespace std;

Competicao::Competicao() {}

Competicao::Competicao(string nome, bool individual):nome(nome), individual(individual){}

vector<Prova*> Competicao::getProvas()
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

void Competicao::setMedalhados(vector<string> medalhados)
{
    this->medalhados = medalhados;
}

bool Competicao::addProva()
{
    //Falta aqui
    return true;
}

istream &operator>>(istream & i, Competicao &c)
{
    string temp, nome;
    Data dtemp;
    int passaporte;
    getline(i, c.nome, ';');
    getline(i, temp, ';');

    if(temp == "individual")
        c.individual = true;
    else
        c.individual = false;

    while(i.get() != ';')
    {
        getline(i, nome, ',');
        i >> dtemp;
        i.ignore();
        Prova* p = new Prova(temp);
        p->setData(dtemp);
        c.provas.push_back(p);
    }

    i >> passaporte;
    i.ignore(2, '\n');

     //procurar por passaporte no vetor de atletas para adicionar as competicoes ao atleta
}
