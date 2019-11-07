#ifndef TRABALHOAEDAPARTE1_PROVA_H
#define TRABALHOAEDAPARTE1_PROVA_H

#include "data.h"
#include "funcionario.h"
#include <vector>

class Prova {
private:
    data data;
    vector <atleta> atletasParticipantes;
public:
    Prova(Data data);
    Data getData();
    void setData(int dia, int mes, int ano);
};

#endif //TRABALHOAEDAPARTE1_PROVA_H
