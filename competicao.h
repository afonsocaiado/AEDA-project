#pragma once
#ifndef TRABALHOAEDAPARTE1_COMPETICAO_H
#define TRABALHOAEDAPARTE1_COMPETICAO_H

#include "prova.h"
#include "funcionario.h"

#include <vector>

using namespace std;

class Competicao {

private:
    vector<Prova> provas;
    bool individual;
    vector<Atleta> atletasInscritos;
    vector<string> medalhados;

public:
    Competicao();
    vector <Prova> getProvas();
    bool getIndividual();
    vector<Atleta> getAtletasInscritos();
    vector<string> getMedalhados();
    void setProvas(vector<Prova*> provas);
    void setIndividual(bool individual);
    void setAtletasInscritos(vector<Atleta*> atletas);
    void setMedalhados(vector<string> medalhados);

};
#endif //TRABALHOAEDAPARTE1_COMPETICAO_H
