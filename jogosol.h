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
private:
    vector<vector<string>> medalhas;
    vector<Funcionario> funcionarios;
    vector<Modalidade> modalidades;

public:
    void readFuncionarios();
    bool addFuncionario();

};

#endif //TRABALHOAEDAPARTE1_JOGOSOL_H
