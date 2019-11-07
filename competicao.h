#ifndef TRABALHOAEDAPARTE1_COMPETICAO_H
#define TRABALHOAEDAPARTE1_COMPETICAO_H

#include "prova.h"

#include <vector>

class Competicao {

private:
    vector <*prova> provas;
    bool individual;
    vector<*atleta> atletasinscritos;
    vector<string> medalhados;

public:
    Competicao();
    vector <*prova> getProvas();
    bool getIndividual();
    vector<*atleta> getAtletasInscritos();
    vector<string> getMedalhados();
    void setProvas(vector<*prova> provas);
    void setIndividual(bool individual);
    void setAtletasInscritos(vector<*atleta> atletas);
    void setMedalhados(vector<string> medalhados);

};
#endif //TRABALHOAEDAPARTE1_COMPETICAO_H
