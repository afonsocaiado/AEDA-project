#include "prova.h"

#include <vector>
#include <string>

using namespace std;

Prova::Prova(Data data)
{
    this->data = data;
}

Data Prova::getData()
{
    return data;
}

void Prova::setData(int dia, int mes, int ano)
{
    data.setDia(dia);
    data.setMes(mes);
    data.setAno(ano);
}
