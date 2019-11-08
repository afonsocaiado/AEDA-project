#include "menu.h"

#include <iostream>
#include <iomanip>

using namespace std;

void Menu::mainMenu() {
    cout << endl << "_________________ MENU _________________" << endl << "|" << setw(40) << "|" << endl;
    cout << "|   1 - Funcionarios e Atletas          |" << endl;
    cout << "|   2 - Modalidades                     |" << endl;
    cout << "|   3 - Programaçao Diaria              |" << endl;
    cout << "|   4 - Tabela de Medalhados            |" << endl;
    cout << "|   5 - Exit Program                    |" << endl;
    cout << "|_______________________________________|" << endl;
}

//--------------------------------------------------------------------------

void Menu::funcionariosEAtletas() {
    cout << endl << "________ ATLETAS E FUNCIONARIOS ________" << endl << "|" << setw(40) << "|" << endl;
    cout << "|   1 - Atletas                         |" << endl;
    cout << "|   2 - Restantes Funcionarios          |" << endl;
    cout << "|   3 - Lista com Todos                 |" << endl;
    cout << "|   4 - Voltar                          |" << endl;
    cout << "|_______________________________________|" << endl;
}

//--------------------------------------------

void Menu::atletas() {
    cout << endl << "________________ ATLETAS _______________" << endl << "|" << setw(40) << "|" << endl;
    cout << "|   1 - Visualizar Informacao           |" << endl;
    cout << "|   2 - Editar Informacoes              |" << endl;
    cout << "|   3 - Voltar                          |" << endl;
    cout << "|_______________________________________|" << endl;
}

void Menu::visualizarAtletas() {
    cout << endl << "______________ VISUALIZAR ______________" << endl << "|" << setw(40) << "|" << endl;
    cout << "|   1 - Informacao pessoal              |" << endl;
    cout << "|   2 - Resultados                      |" << endl;
    cout << "|   3 - Historico                       |" << endl;
    cout << "|   4 - Voltar                          |" << endl;
    cout << "|_______________________________________|" << endl;
}

void Menu::resultados() {
    cout << endl << "________________ EDITAR ________________" << endl << "|" << setw(40) << "|" << endl;
    //Lista competicoes que participa
}

void Menu::modificarInfoPessoalAtleta() {
    cout << endl << "_______________ MODIFICAR ______________" << endl << "|" << setw(40) << "|" << endl;
    cout << "|   1 - Nome                            |" << endl;
    cout << "|   2 - Data de Nascimento              |" << endl;
    cout << "|   3 - Numero de Passaporte            |" << endl;
    cout << "|   4 - Data Estadia                    |" << endl;
    cout << "|   5 - Peso                            |" << endl;
    cout << "|   6 - Altura                          |" << endl;
    cout << "|   7 - Ranking Mundial                 |" << endl;
    cout << "|   8 - Voltar                          |" << endl;
    cout << "|_______________________________________|" << endl;
}

void Menu::listaAtletas() {
    cout << endl << "_______________ ATLETAS ________________" << endl << "|" << setw(40) << "|" << endl;
    //Lista com Atletas para escolher um
}

void Menu::modificarAtleta() {
    cout << endl << "_______________ MODIFICAR ______________" << endl << "|" << setw(40) << "|" << endl;
    cout << "|   1 - Informacao pessoal              |" << endl;
    cout << "|   2 - Resultados                      |" << endl;
    cout << "|   3 - Historico                       |" << endl;
    cout << "|   4 - Voltar                          |" << endl;
    cout << "|_______________________________________|" << endl;
}

//--------------------------------------------

void Menu::funcionario() {
    cout << endl << "_____________ FUNCIONARIO ___________" << endl << "|" << setw(40) << "|" << endl;
    cout << "|   1 - Visualizar Informacao           |" << endl;
    cout << "|   2 - Editar Informacoes              |" << endl;
    cout << "|   3 - Voltar                          |" << endl;
    cout << "|_______________________________________|" << endl;
}

void Menu::modificarInfoPessoalFuncionario() {
    cout << endl << "_______________ MODIFICAR ______________" << endl << "|" << setw(40) << "|" << endl;
    cout << "|   1 - Nome                            |" << endl;
    cout << "|   2 - Data de Nascimento              |" << endl;
    cout << "|   3 - Numero de Passaporte            |" << endl;
    cout << "|   4 - Data Estadia                    |" << endl;
    cout << "|   5 - Voltar                          |" << endl;
    cout << "|_______________________________________|" << endl;
}

void Menu::listaFuncionarios() {
    cout << endl << "_____________ FUNCIONARIOS _____________" << endl << "|" << setw(40) << "|" << endl;
    //Lista com Funcionarios para escolher um
}

//--------------------------------------------

void Menu::editar() {
    cout << endl << "________________ EDITAR ________________" << endl << "|" << setw(40) << "|" << endl;
    cout << "|   1 - Acrescentar                     |" << endl;
    cout << "|   2 - Modificar                       |" << endl;
    cout << "|   3 - Eliminar                        |" << endl;
    cout << "|   4 - Voltar                          |" << endl;
    cout << "|_______________________________________|" << endl;
}

//--------------------------------------------------------------------------

void Menu::listamodalidades() {
    cout << endl << "_____________ MODALIDADES ______________" << endl << "|" << setw(40) << "|" << endl;
    cout << "|   1  - Atletismo                      |" << endl;
    cout << "|   2  - Badminton                      |" << endl;
    cout << "|   3  - Canoagem                       |" << endl;
    cout << "|   4  - Ciclismo                       |" << endl;
    cout << "|   5  - Futebol                        |" << endl;
    cout << "|   6  - Ginastica                      |" << endl;
    cout << "|   7  - Golfe                          |" << endl;
    cout << "|   8  - Hipismo                        |" << endl;
    cout << "|   9  - Judo                           |" << endl;
    cout << "|   10 - Natacao                        |" << endl;
    cout << "|   11 - Taekwondo                      |" << endl;
    cout << "|   12 - Tenis                          |" << endl;
    cout << "|   13 - Tenis de Mesa                  |" << endl;
    cout << "|   14 - Tiro                           |" << endl;
    cout << "|   15 - Triatlo                        |" << endl;
    cout << "|   16 - Vela                           |" << endl;
    cout << "|   17 - Voltar                         |" << endl;
    cout << "|_______________________________________|" << endl;
}

void Menu::modalidade() {
    cout << endl << "_____________ MODALIDADE _______________" << endl << "|" << setw(40) << "|" << endl;  //Implementar ainda
    cout << "|   1  - Visualizar                     |" << endl;
    cout << "|   2  - Modificar                      |" << endl;
    cout << "|   3  - Voltar                         |" << endl;
    cout << "|_______________________________________|" << endl;
}

void Menu::listaCompeticoes() {
    //Depende de cada Modalidade, nao sei
}

void Menu::competicao() {
    cout << endl << "_____________ COMPETICAO _______________" << endl << "|" << setw(40) << "|" << endl;  //Implementar ainda
    cout << "|   1  - Provas                         |" << endl;
    cout << "|   2  - Historial                      |" << endl;
    cout << "|   3  - Atletas Inscritos              |" << endl;
    cout << "|   4  - Medalhados                     |" << endl;
    cout << "|   5  - Informacao Competicao          |" << endl;
    cout << "|   6  - Voltar                         |" << endl;
    cout << "|_______________________________________|" << endl;
}

//--------------------------------------------------------------------------

void Menu::programacaoDiaria() {
    cout << endl << "__________ PROGRAMACAO DIARIA __________" << endl << "|" << setw(40) << "|" << endl;
    cout << "|   1 - Hoje                            |" << endl;
    cout << "|   2 - Dias Anteriores                 |" << endl;
    cout << "|   3 - Voltar                          |" << endl;
    cout << "|_______________________________________|" << endl;
}

//--------------------------------------------------------------------------

void Menu::tabelaDeMedalhados() {
    cout << endl << "_________ TABELA DE MEDALHADOS _________" << endl << "|" << setw(40) << "|" << endl;
    cout << "|   1 - Por Medalhas de Ouro            |" << endl;
    cout << "|   2 - Por Total de Medalhas           |" << endl;
    cout << "|   3 - Voltar                          |" << endl;
    cout << "|_______________________________________|" << endl;
}



