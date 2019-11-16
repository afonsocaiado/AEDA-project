#pragma once
#ifndef TRABALHOAEDAPARTE1_JOGOSOL_H
#define TRABALHOAEDAPARTE1_JOGOSOL_H

#include <fstream>
#include <vector>
#include <string>
#include <map>

#include "funcionario.h"
#include "pais.h"

using namespace std;

class Jogosol {
private:
    static vector<Modalidade*> modalidades;
    static vector<Funcionario> funcionarios;
    static vector<Atleta> vatletas;
    static vector<Pais*> paises;
    map<string,vector<int>> medalhas;
public:
    Jogosol();
    static vector<Pais*> getPaises();
    static vector<Atleta> getVAtletas();
    static vector<Funcionario> getFuncionarios();
    static vector<Modalidade*> getModalidades();
    void readFuncionarios();
    void readAtletas();
    void readPaises();
    static bool addFuncionario();
    static bool deleteFuncionario();
};

#endif //TRABALHOAEDAPARTE1_JOGOSOL_H
