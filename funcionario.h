#ifndef TRABALHOAEDAPARTE1_FUNCIONARIO_H
#define TRABALHOAEDAPARTE1_FUNCIONARIO_H

#include <iostream>
#include <string>
#include <vector>
#include "data.h"
#include "competicao.h"
#include "resultado.h"

using namespace std;

class Funcionario {

protected:
    string nome;
    data datanascimento;
    int passaporte;
    string funcao;
    data datachegada;
    data datapartida;
    double custodiário;

public:
    Funcionario();

};

class atleta:public funcionario {

    string modalidade;
    double peso, altura;
    int ranking;
    vector<competicao> competicoes;
    vector<vector<string>> historico;
    vector<resultado> resultados;

};

#endif //TRABALHOAEDAPARTE1_FUNCIONARIO_H
