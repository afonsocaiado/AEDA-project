#pragma once
#ifndef TRABALHOAEDAPARTE1_JOGOSOL_H
#define TRABALHOAEDAPARTE1_JOGOSOL_H

#include "funcionario.h"
#include "util.h"

#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Jogosol {
private:
    vector<vector<string>> medalhas;
    static vector<Funcionario> funcionarios;

public:
    bool addFuncionario();
};

#endif //TRABALHOAEDAPARTE1_JOGOSOL_H
