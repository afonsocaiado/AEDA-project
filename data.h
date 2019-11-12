#pragma once
#ifndef TRABALHOAEDAPARTE1_DATA_H
#define TRABALHOAEDAPARTE1_DATA_H

#include <iostream>

#include "util.h"

using namespace std;

class Data {
private:
    int dia, mes, ano;
public:
    Data();
    Data(int dia, int mes, int ano);
    int getDia();
    int getMes();
    int getAno();
    void setDia(int dia);
    void setMes(int mes);
    void setAno(int ano);
    friend ostream & operator<<(ostream & o, const Data & d);
    friend istream &operator>>(istream &i, Data &d);
};

#endif //TRABALHOAEDAPARTE1_DATA_H
