#pragma once
#ifndef TRABALHOAEDAPARTE1_PAIS_H
#define TRABALHOAEDAPARTE1_PAIS_H

#include <iostream>

using namespace std;

class Pais {
private:
    string nome;
    int ouro, prata, bronze, total;
public:
    Pais();
    string getNome();
    int getOuro();
    int getPrata();
    int getBronze();
    int getTotal();
};

#endif //TRABALHOAEDAPARTE1_PAIS_H
