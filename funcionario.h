#ifndef TRABALHOAEDAPARTE1_FUNCIONARIO_H
#define TRABALHOAEDAPARTE1_FUNCIONARIO_H

#include <iostream>
#include <string>
#include "data.h"

using namespace std;

class funcionario {

protected:
    string nome;
    data datanascimento;
    int passaporte;
    string funcao;
    data datachegada;
    data datapartida;
    double custodiário;

};

class atleta:public funcionario {



};

#endif //TRABALHOAEDAPARTE1_FUNCIONARIO_H
