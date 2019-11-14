#pragma once
#ifndef TRABALHOAEDAPARTE1_COMPETICAO_H
#define TRABALHOAEDAPARTE1_COMPETICAO_H


#include <vector>

#include "prova.h"

using namespace std;


class Competicao {

private:
    vector<Prova> provas;
    bool individual;
    vector<string> medalhados;

public:
    string nome;
    Competicao();
    Competicao(string nome, bool individual);
    vector <Prova> getProvas();
    bool getIndividual();
    vector<string> getMedalhados();
    void setProvas(vector<Prova> provas);
    void setMedalhados(vector<string> medalhados);
    bool addProva();

    friend istream &operator>>(istream & i, Competicao &c);
};
#endif //TRABALHOAEDAPARTE1_COMPETICAO_H
