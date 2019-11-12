#include "prova.h"
#include "funcionario.h"

#include <vector>
#include <string>

using namespace std;

Prova::Prova() {}

Prova::Prova(string nome):nome(nome){}

Data Prova::getData()
{
    return data;
}

string Prova::getNome() const {
    return nome;
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
    for(unsigned int i=0;i<atletasParticipantes.size();i++){
        if (atletasParticipantes[i] == a){
            atletasParticipantes.erase(atletasParticipantes.begin()+i);
            cout << "Atleta removido com sucesso" << endl;
            return 1;
        }

    }
    cout << "Impossivel remover atleta" << endl;
    return 0;
}

