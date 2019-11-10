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
    friend ostream &operator<<(ostream & o, const Funcionario &f);
    friend istream &operator>>(istream &i, Funcionario &f);
};

class Atleta:public Funcionario{
private:
    const string modalidade;
    const double peso;
    const int altura;
    int ranking;
    vector<Competicao> competicoes;
    vector<vector<string>> historico;
    vector<Resultado> resultados;
public:
    Atleta(string nome, char sexo, Data dataNascimento, int passaporte, string funcao, Data dataChegada, Data dataPartida, double custoDiario, string modalidade, double peso, int altura, int ranking);
    ~Atleta();
    void addCompeticao(Competicao competicao);
    void addResultado(Resultado resultado);

    friend ostream &operator<<(ostream & o, const Atleta &a);
    friend istream &operator>>(istream &i, Atleta &a);

};

#endif //TRABALHOAEDAPARTE1_FUNCIONARIO_H
