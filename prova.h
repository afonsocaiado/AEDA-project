#pragma once
#ifndef TRABALHOAEDAPARTE1_PROVA_H
#define TRABALHOAEDAPARTE1_PROVA_H

#include "data.h"
#include "funcionario.h"

#include <vector>

class Prova {
private:
    const string nome;
    Data data;
    vector<Atleta> atletasParticipantes;
public:
    Prova();
    explicit Prova(string nome);
    Data getData();
    string getNome() const;
    void setData(int dia, int mes, int ano);
    void addAtleta(Atleta &a);
    bool removeAtleta(Atleta &a);
};

#endif //TRABALHOAEDAPARTE1_PROVA_H
