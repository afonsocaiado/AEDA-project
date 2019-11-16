#pragma once
#ifndef TRABALHOAEDAPARTE1_FUNCIONARIO_H
#define TRABALHOAEDAPARTE1_FUNCIONARIO_H

#include <iostream>
#include <string>
#include <vector>

#include "modalidade.h"

using namespace std;
/// Classe Funcionario.
/// Permite representar todos os funcionarios.
class Funcionario {

protected:
    string nome;
    char sexo;
    Data dataNascimento;
    int passaporte;
    string funcao;
    Data dataChegada;
    Data dataPartida;
    int custoDiario;

public:
    /// Construtor vazio do Funcionário.
    Funcionario();
    /// Construtor do Funcionário
    ///
    /// @param nome Nome do funcionário
    /// @param sexo Sexo do funcionário
    /// @param dataNascimento Data de nascimento do funcionário
    /// @param passaporte Número do passaporte do funcionário
    /// @param funcao Função do funcionário
    /// @param dataChegada Data de chegada do funcionário aos Jogos Olímpicos
    /// @param dataPartida Data de partida do funcionário aos Jogos Olímpicos
    /// @param custoDiario Custo diário do funcionário
    Funcionario(string nome, char sexo, Data dataNascimento, int passaporte, string funcao, Data dataChegada, Data dataPartida, int custoDiario);
    /// Destrutor do funcionário.
    virtual ~Funcionario();
    /// Operador de atribuição.
    ///
    /// @return Retorna ???
    Funcionario& operator=(const Funcionario&);
    /// Método get do nome.
    string getNome();
    /// Método get da função.
    string getFuncao();
    /// Método get da data de nascimento.
    Data getDataNascimento();
    /// Método get da data de chegada.
    Data getDataChegada();
    /// Método get da data de partida.
    Data getDataPartida();
    /// Método get do número de passaporte.
    int getPassaporte();
    /// Método get do custo diário do funcionário.
    int getCustoDiario();
    /// Método set do nome do funcionário.
    void setNome(string nome);
    /// Método set da função do funcionário.
    void setFuncao(string funcao);
    /// Método set da data de chegada do funcionário.
    void setDataChegada(Data dataChegada);
    /// Método set da data de partida do funcionário.
    void setDataPartida(Data dataPartida);
    /// Método set da data de nascimento do funcionário.
    void setDataNascimento(Data nascimento);
    /// Método set do passaporte.
    void setPassaporte(int pass);
    /// Permite visualizar a informação pessoal do Funcionário.
    virtual void viewInfo();
    /// Operador de verificação da igualdade entre dois funcionários.
    bool operator== (Funcionario funcionario);
    /// Operador de escrita de um objeto Funcionário.
    friend ostream &operator<<(ostream & o, const Funcionario &f);
    /// Operador de leitura dos dados para a construção de um Funcionário.
    virtual istream& input(istream& i);
};

/// Classe Atleta.
/// Derivada da classe Funcionario, permite representar os Funcionários que são atletas
class Atleta:public Funcionario{
private:
    string modalidade;
    int peso;
    int altura;
    int ranking;
    vector<Competicao> competicoes;
    vector<Resultado> resultados;
public:
    /// Construtor vazio do Atleta.
    Atleta();
    /// Construtor do Atleta
    ///
    /// @param nome Nome do atleta
    /// @param sexo Sexo do atleta
    /// @param dataNascimento Data de nascimento do atleta
    /// @param passaporte Número do passaporte do atleta
    /// @param funcao Função do atleta
    /// @param dataChegada Data de chegada do atleta aos Jogos Olímpicos
    /// @param dataPartida Data de partida do atleta aos Jogos Olímpicos
    /// @param custoDiario Custo diário do atleta
    /// @param modalidade Modalidade do atleta
    /// @param peso Peso do atleta
    /// @param altura Altura do atleta
    /// @param ranking Ranking do atleta
    Atleta(string nome, char sexo, Data dataNascimento, int passaporte, string funcao, Data dataChegada, Data dataPartida, int custoDiario, string modalidade, int peso, int altura, int ranking);
    /// Destrutor do Atleta.
    ~Atleta();
    /// Método get do vetor de Resultado do atleta.
    vector<Resultado> getResultados();
    /// Permite adicionar uma competição ao vetor de Competicao do atleta.
    void addCompeticao(Competicao competicao);
    /// Permite adicionar um resultado ao vetor de Resultado do atleta.
    void addResultado(Resultado resultado);
    /// Permite visualizar a informação pessoal do atleta.
    void viewInfo();
    /// Permite visualizar os resultados do atleta.
    void viewResultados();
    /// Permite eliminar um atleta.
    void elimAtleta();
    /// Método set do Peso.
    ///
    /// @param novo Peso cujo valor deve ser atribuído ao peso do atleta
    void setPeso(int novo);
    /// Método set da Altura.
    ///
    /// @param novo Altura cujo valor deve ser atribuído ao altura do atleta
    void setAltura(int novo);
    /// Método set do Ranking.
    ///
    /// @param novo Ranking cujo valor deve ser atribuído ao ranking do atleta
    void setRanking(int novo);
    /// Método get do Ranking do atleta.
    int getRanking();
    /// Método get da Altura do atleta.
    int getAltura();
    /// Método get do Peso do atleta.
    int getPeso();
    /// Operador de verificação de igualdade entre 2 atletas
    ///
    /// @param atleta Atleta a ser comparado com o atleta antes do operador
    /// @return Retorna true se os dois atletas forem iguais (número de passaporte igual)
    bool operator== (Atleta atleta);
    /// Operador de escrita da informação do Atleta.
    ///
    /// @param o Stream de output
    /// @param a Atleta a ser escrito
    /// @return Retorna a stream de output o
    friend ostream &operator<<(ostream & o, const Atleta &a);
    /// Operador de leitura do Atleta.
    ///
    /// @param i Stream de input
    /// @return Retorna a stream de input i
    virtual istream& input(istream& i);


};

#endif //TRABALHOAEDAPARTE1_FUNCIONARIO_H
