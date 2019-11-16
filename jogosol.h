#pragma once
#ifndef TRABALHOAEDAPARTE1_JOGOSOL_H
#define TRABALHOAEDAPARTE1_JOGOSOL_H

#include <fstream>
#include <vector>
#include <string>
#include <map>

#include "funcionario.h"

using namespace std;

class Jogosol {
private:
    static vector<Modalidade*> modalidades;
    static vector<Funcionario> funcionarios;
    static vector<Atleta> vatletas;
    multimap<string,int> medalhas;
public:
    Jogosol();
    multimap<string,int> getMedalhas();
    static vector<Atleta> getVAtletas();
    static vector<Funcionario> getFuncionarios();
    static vector<Modalidade*> getModalidades();
    void readFuncionarios();
    void readAtletas();
    void readMedalhas();
    static bool addFuncionario();
    static bool deleteFuncionario();
};

#endif //TRABALHOAEDAPARTE1_JOGOSOL_H
