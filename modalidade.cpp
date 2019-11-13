#include "modalidade.h"

#include<fstream>

Modalidade::Modalidade()= default;

Modalidade::Modalidade(string nome)
{
   this->nome = nome;

   ifstream file;

   string filename = nome + ".txt";

   file.open(filename);
}
