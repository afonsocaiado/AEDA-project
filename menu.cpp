#include "menu.h"
#include "jogosol.h"
#include "modalidade.h"

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
        {
            listaModalidades();

            int choice;
            cout << endl << "  Enter your choice: ";
            cin >> choice;

            Modalidade modalidade = Jogosol::getModalidades().at(choice-1);
            modalidadeMenu(modalidade);
            break;
        }
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
        case 1: {
            listaAtletasEscolhe();

            int choice1;
            cout << endl << "  Enter your choice: ";
            cin >> choice1;

            Atleta atleta = Jogosol::getVAtletas().at(choice1 - 1);
            atletas(atleta);
            break;
        }
        case 2: {
            listaFuncionariosEscolhe();

            int choice2;
            cout << endl << "  Enter your choice: ";
            cin >> choice2;

            Funcionario funcionario = Jogosol::getFuncionarios().at(choice2 - 1);
            funcionarios(funcionario);
            break;
        }
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

void Menu::atletas(Atleta &atleta) {
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
            visualizarAtletas(atleta);
            break;
        case 2:
            editarAtleta(atleta);
            break;
        case 3:
            funcionariosEAtletas();
            break;
    }
}

void Menu::visualizarAtletas(Atleta &atleta) {
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
            atleta.viewInfo();
            continuar();
            int choice;
            cout << endl << "  Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    visualizarAtletas(atleta);
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
                    visualizarAtletas(atleta);
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
                    visualizarAtletas(atleta);
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 4:
            atletas(atleta);
            break;
    }


}

void Menu::editarAtleta(Atleta &atleta) {
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
            Jogosol::addFuncionario();

            continuar();
            int choice1;
            cout << endl << "  Enter your choice: ";
            cin >> choice1;

            switch (choice1) {
                case 1:
                    editarAtleta(atleta);
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

            Atleta atleta = Jogosol::getVAtletas().at(choice2-1);
            modificarAtleta(atleta);
            break;
        }
        case 3:
        {
            listaAtletasEscolhe();

            int choice3;
            cout << endl << "  Enter your choice: ";
            cin >> choice3;

            Atleta atleta2 = Jogosol::getVAtletas().at(choice3-1);

            //Eliminar atleta2

            continuar();
            int choice4;
            cout << endl << "  Enter your choice: ";
            cin >> choice4;

            switch (choice4) {
                case 1:
                    editarAtleta(atleta);
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
            atletas(atleta);
            break;
    }
}

void Menu::modificarAtleta(Atleta &atleta) {
    cout << endl << "_______________ MODIFICAR ______________" << endl << "|" << setw(40) << "|" << endl;
    cout << "|   1 - Informacao pessoal              |" << endl;
    cout << "|   2 - Historico                       |" << endl;
    cout << "|   3 - Voltar                          |" << endl;
    cout << "|_______________________________________|" << endl;

    int choice;
    cout << endl << "  Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            modificarInfoPessoalAtleta(atleta);
            break;
        case 2:
            //Modificar Historico Atleta

            continuar();
            int choice4;
            cout << endl << "  Enter your choice: ";
            cin >> choice4;

            switch (choice4) {
                case 1:
                    modificarAtleta(atleta);
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 3:
            editarAtleta(atleta);
            break;
    }
}

void Menu::modificarInfoPessoalAtleta(Atleta &atleta) {
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

    int choice;
    cout << endl << "  Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            //Funcao Modificar nome
            continuar();
            int choice1;
            cout << endl << "  Enter your choice: ";
            cin >> choice1;

            switch (choice1) {
                case 1:
                    modificarInfoPessoalAtleta(atleta);
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 2:
            //Funcao Modificar Data Nascimento
            continuar();
            int choice2;
            cout << endl << "  Enter your choice: ";
            cin >> choice2;

            switch (choice2) {
                case 1:
                    modificarInfoPessoalAtleta(atleta);
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 3:
            //Funcao Modificar Num Passaporte
            continuar();
            int choice3;
            cout << endl << "  Enter your choice: ";
            cin >> choice3;

            switch (choice3) {
                case 1:
                    modificarInfoPessoalAtleta(atleta);
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 4:
            //Funcao Modificar Data Estadia
            continuar();
            int choice4;
            cout << endl << "  Enter your choice: ";
            cin >> choice4;

            switch (choice4) {
                case 1:
                    modificarInfoPessoalAtleta(atleta);
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 5:
            //Funcao Modificar Peso
            continuar();
            int choice5;
            cout << endl << "  Enter your choice: ";
            cin >> choice5;

            switch (choice5) {
                case 1:
                    modificarInfoPessoalAtleta(atleta);
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 6:
            //Funcao Modificar Altura
            continuar();
            int choice6;
            cout << endl << "  Enter your choice: ";
            cin >> choice6;

            switch (choice6) {
                case 1:
                    modificarInfoPessoalAtleta(atleta);
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 7:
            //Funcao Modificar Ranking
            continuar();
            int choice7;
            cout << endl << "  Enter your choice: ";
            cin >> choice7;

            switch (choice7) {
                case 1:
                    modificarInfoPessoalAtleta(atleta);
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 8:
            editarAtleta(atleta);
            break;
    }
}

void Menu::listaAtletasEscolhe() {
    cout << endl << "_______________ ATLETAS ________________" << endl << "|" << setw(40) << "|" << endl;
    for (int i  = 0; i < Jogosol::getVAtletas().size(); i++)  {
        cout << "|   " << i+1 << " - " << Jogosol::getVAtletas().at(i).getNome() << setw(34-Jogosol::getVAtletas().at(i).getNome().size()) << "|" << endl;
    }
    cout << "|_______________________________________|" << endl;
}


//--------------------------------------------

void Menu::funcionarios(Funcionario &funcionario) {
    cout << endl << "_____________ FUNCIONARIO ___________" << endl << "|" << setw(40) << "|" << endl;
    cout << "|   1 - Visualizar Informacao           |" << endl;
    cout << "|   2 - Editar Informacoes              |" << endl;
    cout << "|   3 - Voltar                          |" << endl;
    cout << "|_______________________________________|" << endl;

    int choice;
    cout << endl << "  Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            funcionario.viewInfo();
            continuar();
            int choice4;
            cout << endl << "  Enter your choice: ";
            cin >> choice4;

            switch (choice4) {
                case 1:
                    funcionarios(funcionario);
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 2:
            editarFuncionario(funcionario);
            break;
        case 3:
            funcionariosEAtletas();
            break;
    }
}

void Menu::editarFuncionario(Funcionario &funcionario) {
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
            //Add Funcionario

            continuar();
            int choice1;
            cout << endl << "  Enter your choice: ";
            cin >> choice1;

            switch (choice1) {
                case 1:
                    editarFuncionario(funcionario);
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
            listaFuncionariosEscolhe();

            int choice2;
            cout << endl << "  Enter your choice: ";
            cin >> choice2;

            Funcionario funcionario = Jogosol::getFuncionarios().at(choice2-1);
            modificarInfoPessoalFuncionario(funcionario);
            break;
        }
        case 3:
        {
            listaFuncionariosEscolhe();

            int choice3;
            cout << endl << "  Enter your choice: ";
            cin >> choice3;

            Funcionario funcionario1 = Jogosol::getFuncionarios().at(choice3-1);

            //Eliminar funcionario1
            continuar();
            int choice4;
            cout << endl << "  Enter your choice: ";
            cin >> choice4;

            switch (choice4) {
                case 1:
                    editarFuncionario(funcionario);
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
            funcionarios(funcionario);
            break;
    }
}

void Menu::modificarInfoPessoalFuncionario(Funcionario &funcionario) {
    cout << endl << "_______________ MODIFICAR ______________" << endl << "|" << setw(40) << "|" << endl;
    cout << "|   1 - Nome                            |" << endl;
    cout << "|   2 - Data de Nascimento              |" << endl;
    cout << "|   3 - Numero de Passaporte            |" << endl;
    cout << "|   4 - Data Estadia                    |" << endl;
    cout << "|   5 - Voltar                          |" << endl;
    cout << "|_______________________________________|" << endl;

    int choice;
    cout << endl << "  Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            //Funcao Modificar nome
            continuar();
            int choice1;
            cout << endl << "  Enter your choice: ";
            cin >> choice1;

            switch (choice1) {
                case 1:
                    modificarInfoPessoalFuncionario(funcionario);
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 2:
            //Funcao Modificar Data Nascimento
            continuar();
            int choice2;
            cout << endl << "  Enter your choice: ";
            cin >> choice2;

            switch (choice2) {
                case 1:
                    modificarInfoPessoalFuncionario(funcionario);
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 3:
            //Funcao Modificar Num Passaporte
            continuar();
            int choice3;
            cout << endl << "  Enter your choice: ";
            cin >> choice3;

            switch (choice3) {
                case 1:
                    modificarInfoPessoalFuncionario(funcionario);
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 4:
            //Funcao Modificar Data Estadia
            continuar();
            int choice4;
            cout << endl << "  Enter your choice: ";
            cin >> choice4;

            switch (choice4) {
                case 1:
                    modificarInfoPessoalFuncionario(funcionario);
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 5:
            editarFuncionario(funcionario);
            break;
    }
}

void Menu::listaFuncionariosEscolhe() {
    cout << endl << "_____________ FUNCIONARIOS _____________" << endl << "|" << setw(40) << "|" << endl;
    for (int i  = 0; i < Jogosol::getFuncionarios().size(); i++)  {
        cout << "|   " << i+1 << " - " << Jogosol::getFuncionarios().at(i).getNome() << setw(34-Jogosol::getFuncionarios().at(i).getNome().size()) << "|" << endl;
    }
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
    cout << "|_______________________________________|" << endl;
}

void Menu::modalidadeMenu(Modalidade &modalidade) {
    cout << endl << "_____________ MODALIDADE _______________" << endl << "|" << setw(40) << "|" << endl;  //Implementar ainda
    cout << "|   1  - Visualizar                     |" << endl;
    cout << "|   2  - Modificar                      |" << endl;
    cout << "|   3  - Voltar                         |" << endl;
    cout << "|_______________________________________|" << endl;

    int choice;
    cout << endl << "  Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
        {
            listaCompeticoes(modalidade);

            int choice;
            cout << endl << "  Enter your choice: ";
            cin >> choice;

            Competicao competicao = modalidade.competicoes.at(choice-1);
            competicaoMenuVis(competicao, modalidade);
            break;
        }
        case 2:
        {
            listaCompeticoes(modalidade);

            int choice;
            cout << endl << "  Enter your choice: ";
            cin >> choice;

            Competicao competicao = modalidade.competicoes.at(choice-1);
            competicaoMenuMod(competicao, modalidade);
            break;
        }
        case 3:
            mainMenu();
            break;
    }
}

void Menu::listaCompeticoes(Modalidade &modalidade) {
    cout << endl << "______________ COMPETICOES _____________" << endl << "|" << setw(40) << "|" << endl;
    for (int i  = 0; i < modalidade.competicoes.size(); i++)  {
        cout << "|   " << i+1 << " - " << modalidade.competicoes.at(i).nome << setw(34-modalidade.competicoes.at(i).nome.size()) << "|" << endl;
    }
    cout << "|_______________________________________|" << endl;
}

void Menu::competicaoMenuVis(Competicao &competicao, Modalidade &modalidade) {
    cout << endl << "_____________ COMPETICAO _______________" << endl << "|" << setw(40) << "|" << endl;  //Implementar ainda
    cout << "|   1  - Provas                         |" << endl;
    cout << "|   2  - Historial                      |" << endl;
    cout << "|   3  - Atletas Inscritos              |" << endl;
    cout << "|   4  - Medalhados                     |" << endl;
    cout << "|   5  - Voltar                         |" << endl;
    cout << "|_______________________________________|" << endl;

    int choice;
    cout << endl << "  Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            //Visualizar Provas

            continuar();
            int choice1;
            cout << endl << "  Enter your choice: ";
            cin >> choice1;

            switch (choice1) {
                case 1:
                    competicaoMenuVis(competicao, modalidade);
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 2:
            //Visualizar Historial

            continuar();
            int choice2;
            cout << endl << "  Enter your choice: ";
            cin >> choice2;

            switch (choice2) {
                case 1:
                    competicaoMenuVis(competicao, modalidade);
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 3:
            //Visualizar Atletas Inscritos

            continuar();
            int choice3;
            cout << endl << "  Enter your choice: ";
            cin >> choice3;

            switch (choice3) {
                case 1:
                    competicaoMenuVis(competicao, modalidade);
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 4:
            //Visualizar Modalidades

            continuar();
            int choice4;
            cout << endl << "  Enter your choice: ";
            cin >> choice4;

            switch (choice4) {
                case 1:
                    competicaoMenuVis(competicao, modalidade);
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 5:
            modalidadeMenu(modalidade);
            break;
    }
}

void Menu::competicaoMenuMod(Competicao &competicao, Modalidade &modalidade) {
    cout << endl << "_____________ COMPETICAO _______________" << endl << "|" << setw(40) << "|" << endl;  //Implementar ainda
    cout << "|   1  - Provas                         |" << endl;
    cout << "|   2  - Historial                      |" << endl;
    cout << "|   3  - Atletas Inscritos              |" << endl;
    cout << "|   4  - Medalhados                     |" << endl;
    cout << "|   5  - Voltar                         |" << endl;
    cout << "|_______________________________________|" << endl;

    int choice;
    cout << endl << "  Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            //Modificar Provas

            continuar();
            int choice1;
            cout << endl << "  Enter your choice: ";
            cin >> choice1;

            switch (choice1) {
                case 1:
                    competicaoMenuMod(competicao, modalidade);
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 2:
            //Modificar Historial

            continuar();
            int choice2;
            cout << endl << "  Enter your choice: ";
            cin >> choice2;

            switch (choice2) {
                case 1:
                    competicaoMenuMod(competicao, modalidade);
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 3:
            //Modificar Atletas Inscritos

            continuar();
            int choice3;
            cout << endl << "  Enter your choice: ";
            cin >> choice3;

            switch (choice3) {
                case 1:
                    competicaoMenuMod(competicao, modalidade);
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 4:
            //Modificar Medalhados

            continuar();
            int choice4;
            cout << endl << "  Enter your choice: ";
            cin >> choice4;

            switch (choice4) {
                case 1:
                    competicaoMenuMod(competicao, modalidade);
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 5:
            modalidadeMenu(modalidade);
            break;
    }
}
//--------------------------------------------------------------------------

void Menu::programacaoDiaria() {
    cout << endl << "__________ PROGRAMACAO DIARIA __________" << endl << "|" << setw(40) << "|" << endl;
    cout << "|   1 - Hoje                            |" << endl;
    cout << "|   2 - Dias Anteriores                 |" << endl;
    cout << "|   3 - Voltar                          |" << endl;
    cout << "|_______________________________________|" << endl;

    int choice;
    cout << endl << "  Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            //Programacao Diaria
            continuar();
            int choice1;
            cout << endl << "  Enter your choice: ";
            cin >> choice1;

            switch (choice1) {
                case 1:
                    programacaoDiaria();
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 2:
            diasAnteriores();
            break;
        case 3:
            mainMenu();
            break;
    }
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

    int choice;
    cout << endl << "  Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            //Por Ouro
            continuar();
            int choice1;
            cout << endl << "  Enter your choice: ";
            cin >> choice1;

            switch (choice1) {
                case 1:
                    tabelaDeMedalhados();
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 2:
            //Por total
            continuar();
            int choice2;
            cout << endl << "  Enter your choice: ";
            cin >> choice2;

            switch (choice2) {
                case 1:
                    tabelaDeMedalhados();
                    break;
                case 2:
                    mainMenu();
                    break;
                case 3:
                    return;
            }
            break;
        case 3:
            mainMenu();
            break;
    }
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


