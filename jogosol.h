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

/// Classe Jogosol.
/// Classe relativa ao objeto que representa os Jogos Olímpicos
class Jogosol {
private:
    static vector<vector<string>> medalhas;
    /// Vetor de apontadores para objetos Modalidade.
    /// Permite guardar todas as modalidades dos Jogos Olímpicos
    static vector<Modalidade*> modalidades;
    /// Vetor de objetos Funcionario.
    /// Permite guardar os funcionários (não atletas) portugueses dos Jogos Olímpicos
    static vector<Funcionario> funcionarios;
    /// Vetor de objetos Atleta.
    /// Permite guardar os atletas portugueses dos Jogos Olímpicos
    static vector<Atleta> vatletas;
    static vector<Pais*> paises;
    map<string,vector<int>> medalhas;
public:
    /// Construtor vazio de Jogosol.
    Jogosol();
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
