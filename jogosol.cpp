#include "jogosol.h"

using namespace std;

bool Jogosol::addFuncionario()
{
    string nome, funcao;
    char sexo;
    Data dataNascimento, dataChegada, dataPartida;
    int passaporte;
    double custoDiario;

    cout << "Nome: ";
    getline(cin, nome);
    cin.ignore();
    cout << endl << "Sexo (H/M): ";
    cin >> sexo;
    cin.ignore(1000, '\n');
    cout << "Data de nascimento (dd/mm/aaaa): ";
    cin >> dataNascimento;
    cout << "Numero de passaporte: ";
    cin >> passaporte;
    cout << "Funcao: ";
    getline(cin, funcao);
    cin.ignore();
    cout << "Data de chegada (dd/mm/aaaa): ";
    cin >> dataChegada;
    cout << "Data de partida (dd/mm/aaaa): ";
    cin >> dataPartida;
    cout << "Custo diario: ";
    cin >> custoDiario;

    //falta ver se e atleta e se for meter os parametros que faltam

}