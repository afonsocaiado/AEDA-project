#pragma once
#ifndef TRABALHOAEDAPARTE1_JOGOSOL_H
#define TRABALHOAEDAPARTE1_JOGOSOL_H

#include <fstream>
#include <vector>
#include <string>

#include "funcionario.h"

using namespace std;

class Jogosol {
public:
    vector<vector<string>> medalhas;
    static vector<Modalidade> modalidades;
    static vector<Funcionario> funcionarios;
    static vector<Atleta> vatletas;
    void readFuncionarios();
    static bool addFuncionario();
    static bool deleteFuncionario();
};

#endif //TRABALHOAEDAPARTE1_JOGOSOL_H
