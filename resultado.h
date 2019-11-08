#ifndef TRABALHOAEDAPARTE1_RESULTADO_H
#define TRABALHOAEDAPARTE1_RESULTADO_H

#include "prova.h"

class Resultado {
private:
    Prova prova;
    int classificacao;
    bool passou;

public:
    Resultado();
    Resultado(Prova prova, int classificacao, bool passou);
    Prova getProva();
    int getClassificacao();
    bool getPassou();
    string getMedalha(int classificacao);
    void setProva(Prova prova);
    void setClassificacao(int classificacao);
    void setPassou(bool passou);

    ostream & operator<<(ostream &o, const Resultado &resultado);

};

#endif //TRABALHOAEDAPARTE1_RESULTADO_H
