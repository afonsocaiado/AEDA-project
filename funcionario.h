#pragma once
#ifndef TRABALHOAEDAPARTE1_FUNCIONARIO_H
#define TRABALHOAEDAPARTE1_FUNCIONARIO_H

#include "data.h"
#include "competicao.h"
#include "resultado.h"
#include "jogosol.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Funcionario {

protected:
    const string nome;
    const char sexo;
    const Data dataNascimento;
    const int passaporte;
    const string funcao;
    Data dataChegada;
    Data dataPartida;
    const double custoDiario;

public:
    Funcionario(string nome, char sexo, Data dataNascimento, int passaporte, string funcao, Data dataChegada, Data dataPartida, double custoDiario);
    bool criarFuncionario(Funcionario funcionario);
    bool eliminarFuncionario(Funcionario funcionario);
    Data getDataChegada();
    Data getDataPartida();
    void setDataChegada(Data dataChegada);
    void setDataPartida(Data dataPartida);

    bool operator== (const Funcionario funcionario) const;
};

class Atleta:public Funcionario{
private:
    const string modalidade;
    const double peso, altura;
    int ranking;
    vector<Competicao> competicoes;
    vector<vector<string>> historico;
    vector<Resultado> resultados;
public:
    Atleta(string nome, Data dataNascimento, int passaporte, string funcao, Data dataChegada, Data dataPartida, double custoDiario, string modalidade, double peso, double altura, int ranking);
    ~Atleta();
    void addCompeticao(Competicao competicao);
    void addResultado(Resultado resultado);

};

#endif //TRABALHOAEDAPARTE1_FUNCIONARIO_H
