#pragma once
#ifndef TRABALHOAEDAPARTE1_MENU_H
#define TRABALHOAEDAPARTE1_MENU_H

#include <iostream>

#include "funcionario.h"
#include "jogosol.h"

using namespace std;

class Menu {
public:
    void mainMenu();
    void funcionariosEAtletas();
    void atletas();
    void funcionario();
    void visualizarAtletas();
    void editarAtleta();
    void editarFuncionario();
    void listaAtletasEscolhe();
    void listaFuncionarios();
    void modificarAtleta(Atleta atleta);
    void modificarInfoPessoalFuncionario();
    void modificarInfoPessoalAtleta();
    void listaModalidades();
    void modalidade();
    void listaCompeticoes();
    void competicao();
    void programacaoDiaria();
    void diasAnteriores();
    void tabelaDeMedalhados();
    void continuar();
};


#endif //TRABALHOAEDAPARTE1_MENU_H
