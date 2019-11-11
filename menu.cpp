#include "menu.h"
#include "jogosol.h"

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

    int choice;
    cout << endl << "  Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            funcionariosEAtletas();
            break;
        case 2:
            listaModalidades();
            break;
        case 3:
            programacaoDiaria();
            break;
        case 4:
            tabelaDeMedalhados();
            break;
        case 5:
            return;
    }
}

//--------------------------------------------------------------------------

void Menu::funcionariosEAtletas() {
    cout << endl << "________ ATLETAS E FUNCIONARIOS ________" << endl << "|" << setw(40) << "|" << endl;
    cout << "|   1 - Atletas                         |" << endl;
    cout << "|   2 - Restantes Funcionarios          |" << endl;
    cout << "|   3 - Lista com Todos                 |" << endl;
    cout << "|   4 - Voltar                          |" << endl;
    cout << "|_______________________________________|" << endl;

    int choice;
    cout << endl << "  Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            atletas();
            break;
        case 2:
            funcionario();
            break;
        case 3:
            //Lista de todos
            continuar();
            int choice;
            cout << endl << "  Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    funcionariosEAtletas();
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 4:
            return;
    }
}

//--------------------------------------------

void Menu::atletas() {
    cout << endl << "________________ ATLETAS _______________" << endl << "|" << setw(40) << "|" << endl;
    cout << "|   1 - Visualizar Informacao           |" << endl;
    cout << "|   2 - Editar Informacoes              |" << endl;
    cout << "|   3 - Voltar                          |" << endl;
    cout << "|_______________________________________|" << endl;

    int choice;
    cout << endl << "  Enter your choice: ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            visualizarAtletas();
            break;
        case 2:
            editarAtleta();
            break;
        case 3:
            funcionariosEAtletas();
            break;
    }
}

void Menu::visualizarAtletas() {
    cout << endl << "______________ VISUALIZAR ______________" << endl << "|" << setw(40) << "|" << endl;
    cout << "|   1 - Informacao pessoal              |" << endl;
    cout << "|   2 - Resultados                      |" << endl;
    cout << "|   3 - Historico                       |" << endl;
    cout << "|   4 - Voltar                          |" << endl;
    cout << "|_______________________________________|" << endl;

    int choice;
    cout << endl << "  Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            //Visualizar Info Pessoal
            continuar();
            int choice;
            cout << endl << "  Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    visualizarAtletas();
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 2:
            //Resultados do Atleta
            continuar();
            int choice1;
            cout << endl << "  Enter your choice: ";
            cin >> choice1;

            switch (choice1) {
                case 1:
                    visualizarAtletas();
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 3:
            //Historico
            continuar();
            int choice2;
            cout << endl << "  Enter your choice: ";
            cin >> choice2;

            switch (choice2) {
                case 1:
                    visualizarAtletas();
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 4:
            atletas();
            break;
    }


}

void Menu::editarAtleta() {
    cout << endl << "________________ EDITAR ________________" << endl << "|" << setw(40) << "|" << endl;
    cout << "|   1 - Acrescentar                     |" << endl;
    cout << "|   2 - Modificar                       |" << endl;
    cout << "|   3 - Eliminar                        |" << endl;
    cout << "|   4 - Voltar                          |" << endl;
    cout << "|_______________________________________|" << endl;

    int choice;
    cout << endl << "  Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            //Acrescentar Atleta
            continuar();
            int choice1;
            cout << endl << "  Enter your choice: ";
            cin >> choice1;

            switch (choice1) {
                case 1:
                    editarAtleta();
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 2:
        {
            listaAtletasEscolhe();

            int choice2;
            cout << endl << "  Enter your choice: ";
            cin >> choice2;

            Atleta atleta1 = Jogosol::vatletas.at(choice2-1);
            modificarAtleta(atleta1);
            break;
        }
        case 3:
        {
            listaAtletasEscolhe();

            int choice3;
            cout << endl << "  Enter your choice: ";
            cin >> choice3;

            Atleta atleta2 = Jogosol::vatletas.at(choice3-1);

            //Eliminar atleta2

            continuar();
            int choice4;
            cout << endl << "  Enter your choice: ";
            cin >> choice4;

            switch (choice4) {
                case 1:
                    editarAtleta();
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        }
        case 4:
            atletas();
            break;
    }
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

void Menu::listaAtletasEscolhe() {
    cout << endl << "_______________ ATLETAS ________________" << endl << "|" << setw(40) << "|" << endl;
    //Lista com Atletas para escolher um
}

void Menu::modificarAtleta(Atleta atleta) {
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


void Menu::editarFuncionario() {
    cout << endl << "________________ EDITAR ________________" << endl << "|" << setw(40) << "|" << endl;
    cout << "|   1 - Acrescentar                     |" << endl;
    cout << "|   2 - Modificar                       |" << endl;
    cout << "|   3 - Eliminar                        |" << endl;
    cout << "|   4 - Voltar                          |" << endl;
    cout << "|_______________________________________|" << endl;
}

//--------------------------------------------------------------------------

void Menu::listaModalidades() {
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

void Menu::diasAnteriores() {
    //Lista com dias passados, nao sei, e dificil
}

//--------------------------------------------------------------------------

void Menu::tabelaDeMedalhados() {
    cout << endl << "_________ TABELA DE MEDALHADOS _________" << endl << "|" << setw(40) << "|" << endl;
    cout << "|   1 - Por Medalhas de Ouro            |" << endl;
    cout << "|   2 - Por Total de Medalhas           |" << endl;
    cout << "|   3 - Voltar                          |" << endl;
    cout << "|_______________________________________|" << endl;
}

//--------------------------------------------------------------------------

void Menu::continuar() {
    cout << endl << "______________________________________________"   << endl << "|" << setw(40) << "|" << endl;
    cout << "|   1 - Voltar Atras                    |" << endl;
    cout << "|   2 - Main Menu                       |" << endl;
    cout << "|   3 - Sair do Programa                |" << endl;
    cout << "|_______________________________________|" << endl;
}

//--------------------------------------------------------------------------


