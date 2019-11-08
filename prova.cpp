#include "prova.h"

#include <vector>
#include <string>

using namespace std;

Prova::Prova() {}

Prova::Prova(Data data)
{
    this->data = data;
}

Data Prova::getData()
{
    return data;
}

void Prova::setData(int dia, int mes, int ano)
{
    data.setDia(dia);
    data.setMes(mes);
    data.setAno(ano);
}

void Prova::addAtleta(Atleta &a) {
    atletasParticipantes.push_back(a);
}
bool Prova::removeAtleta(Atleta &a) {
    for(int i=0;i<atletasParticipantes.size();i++){
        if (atletasParticipantes[i] == a){
            atletasParticipantes.erase(atletasParticipantes.begin()+i);
            cout << "Atleta removido com sucesso" << endl;
            return 1;
        }

    }
    cout << "Impossível remover atleta" << endl;
    return 0;
}


