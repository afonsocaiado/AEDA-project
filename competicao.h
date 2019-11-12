#pragma once
#ifndef TRABALHOAEDAPARTE1_COMPETICAO_H
#define TRABALHOAEDAPARTE1_COMPETICAO_H


#include <string>
#include <vector>
#include "resultado.h"

using namespace std;


class Competicao {

private:
    vector<Prova> provas;
    bool individual;
    vector<string> medalhados;

public:
    const string nome;
    Competicao(string nome, bool individual);
    vector <Prova> getProvas();
    bool getIndividual();
    vector<string> getMedalhados();
    void setProvas(vector<Prova> provas);
    void setMedalhados(vector<string> medalhados);

    bool addProva();

};
#endif //TRABALHOAEDAPARTE1_COMPETICAO_H
