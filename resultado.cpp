#include "resultado.h"

Resultado::Resultado(){}

Resultado::Resultado(Prova prova, int classificacao, bool passou)
{
    this->prova = prova;
    this->classificacao = classificacao;
    this->passou = passou;
}

Prova Resultado::getProva()
{
    return prova;
}

int Resultado::getClassificacao()
{
    return classificacao;
}

bool Resultado::getPassou()
{
    return passou;
}

void Resultado::setProva(Prova prova)
{
    this->prova = prova;
}

void Resultado::setClassificacao(int classificacao)
{
    this->classificacao = classificacao;
}

void Resultado::setPassou(bool passou)
{
    this->passou = passou;
}