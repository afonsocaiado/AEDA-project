#include "prova.h"
#include "funcionario.h"

#include <vector>
#include <string>

using namespace std;

Prova::Prova() {}

Prova::Prova(string nome):nome(nome){}

Data Prova::getData()
{
    return data;
}

string Prova::getNome() const {
    return nome;
}

void Prova::setData(int dia, int mes, int ano)
{
    data.setDia(dia);
    data.setMes(mes);
    data.setAno(ano);
}


