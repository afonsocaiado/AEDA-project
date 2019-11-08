#include "data.h"

#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

Data::Data() {
    dia = 0;
    mes = 0;
    ano = 0;
}

Data::Data(int dia, int mes, int ano)
{
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}

int Data::getDia()
{
    return dia;
}

int Data::getMes()
{
    return mes;
}

int Data::getAno()
{
    return ano;
}

void Data::setDia(int dia)
{
    this->dia = dia;
}

void Data::setMes(int mes)
{
    this->mes = mes;
}

void Data::setAno(int ano)
{
    this->ano = ano;
}

ostream & operator<<(ostream & o, const Data & d) {
    o << d.dia << '/' << d.mes << '/' << d.ano;
    return o;
}

istream &operator>>(istream &i, Data &d){
    string s,tempd,tempm,tempa;
    stringstream ss;

    i >> s;
    replace(s.begin(),s.end(),'/',' ');
    ss << s;
    ss >> tempd >> tempm >> tempa;

    d.dia=stoi(tempd); d.mes = stoi(tempm); d.ano=stoi(tempa);

}

