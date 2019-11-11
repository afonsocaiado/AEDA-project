#pragma once
#ifndef TRABALHOAEDAPARTE1_JOGOSOL_H
#define TRABALHOAEDAPARTE1_JOGOSOL_H

#include <fstream>
#include <vector>
#include <string>

#include "funcionario.h"
#include "util.h"
#include "modalidade.h"

using namespace std;

class Jogosol {
public:
    vector<vector<string>> medalhas;
    vector<Modalidade> modalidades;
    static vector<Funcionario> funcionarios;
    static vector<Atleta> vatletas;
    void readFuncionarios();
    bool addFuncionario();
    bool deleteFuncionario();
};

#endif //TRABALHOAEDAPARTE1_JOGOSOL_H
