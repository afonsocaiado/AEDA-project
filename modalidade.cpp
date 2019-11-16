#include "modalidade.h"

#include<fstream>

Modalidade::Modalidade()= default;

Modalidade::Modalidade(string nome)
{
   this->nome = nome;

   ifstream file;

   string filename = nome + ".txt";

   file.open(filename, ios::in);

    if(file.fail()){
        cout << "Ficheiro incorreto" << endl;
        exit(0);
    }

   while(!file.eof())
   {
       Competicao c;

       file >> c;

       competicoes.push_back(c);
   }

}
