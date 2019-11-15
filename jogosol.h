#pragma once
#ifndef TRABALHOAEDAPARTE1_JOGOSOL_H
#define TRABALHOAEDAPARTE1_JOGOSOL_H

#include <fstream>
#include <vector>
#include <string>

#include "funcionario.h"

using namespace std;

class Jogosol {
private:
    static vector<vector<string>> medalhas;
    static vector<Modalidade*> modalidades;
    static vector<Funcionario> funcionarios;
    static vector<Atleta> vatletas;
public:
    Jogosol();
    static vector<Atleta> getVAtletas();
    static vector<Funcionario> getFuncionarios();
    static vector<Modalidade*> getModalidades();
    void readFuncionarios();
    void readAtletas();
    static bool addFuncionario();
    static bool deleteFuncionario();
};

#endif //TRABALHOAEDAPARTE1_JOGOSOL_H
