#include "pais.h"

Pais::Pais() {}

string Pais::getNome() {
    return nome;
}

int Pais::getOuro() {
    return ouro;
}

int Pais::getPrata() {
    return prata;
}

int Pais::getBronze() {
    return bronze;
}

int Pais::getTotal() {
    return ouro+bronze+prata;
}