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

string Resultado::getMedalha(int classificacao)
{
    switch (classificacao)
    {
        case 1:
            return "Ouro";
            break;

        case 2:
            return "Prata";
            break;

        case 3:
            return "Bronze";
            break;

        default:
            return "Nao Medalhado";
            break;
    }
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

ostream & operator<<(ostream &o, Resultado resultado)
{
    o << "Prova: " << resultado.prova.getNome() << endl;
    o << "Classificacao: " << resultado.classificacao << endl;
    if ((resultado.prova.getNome() == "Final") || (resultado.prova.getNome() == "final"))
    {
        if ((resultado.classificacao > 0) && (resultado.classificacao <= 3))
            o << "Medalha de ";

        o << resultado.getMedalha(resultado.classificacao) << endl;
    }
}


