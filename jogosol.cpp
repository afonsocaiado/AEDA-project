#include "jogosol.h"

using namespace std;

bool Jogosol::addFuncionario()
{
    ofstream file;

    file.open("funcionarios.txt", ios::app);

    string nome, funcao, modalidade;
    char sexo;
    Data dataNascimento, dataChegada, dataPartida;
    int passaporte, altura, ranking;
    double custoDiario, peso;

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

    if(to_lower(funcao) == "atleta")
    {
        cout << "Modalidade: ";
        getline(cin, modalidade);
        cin.ignore();
        cout << "Peso (kg): ";
        cin >> peso;
        cout << "Altura (cm):";
        cin >> altura;
        cout << "Ranking: ";
        cin >> ranking;

        Atleta a(nome, sexo, dataNascimento, passaporte, funcao, dataChegada, dataPartida, custoDiario, modalidade, peso, altura, ranking);
        funcionarios.push_back(a);

        file << a;
    }

    else
    {
        Funcionario f(nome, sexo, dataNascimento, passaporte, funcao, dataChegada, dataPartida, custoDiario);
        funcionarios.push_back(f);

        file << f;
    }

    file.close();

    return true;

    //falta verificar erros (que fariam a funcao retornar false)
}