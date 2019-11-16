#include "jogosol.h"

using namespace std;

Jogosol::Jogosol()
{
    Jogosol::readFuncionarios();

    Jogosol::readAtletas();

    Modalidade* atletismo = new Modalidade("atletismo");
    modalidades.push_back(atletismo);
    Modalidade* badminton = new Modalidade("badminton");
    modalidades.push_back(badminton);
    Modalidade* canoagem = new Modalidade("canoagem");
    modalidades.push_back(canoagem);
    Modalidade* ciclismo = new Modalidade("ciclismo");
    modalidades.push_back(ciclismo);
    Modalidade* futebol = new Modalidade("futebol");
    modalidades.push_back(futebol);
    Modalidade* ginastica = new Modalidade("ginastica");
    modalidades.push_back(ginastica);
    Modalidade* golfe = new Modalidade("golfe");
    modalidades.push_back(golfe);
    Modalidade* hipismo = new Modalidade("hipismo");
    modalidades.push_back(hipismo);
    Modalidade* judo = new Modalidade("judo");
    modalidades.push_back(judo);
    Modalidade* natacao = new Modalidade("natacao");
    modalidades.push_back(natacao);
    Modalidade* taekwondo = new Modalidade("taekwondo");
    modalidades.push_back(taekwondo);
    Modalidade* tenis = new Modalidade("tenis");
    modalidades.push_back(tenis);
    Modalidade* tenisdemesa = new Modalidade("tenisdemesa");
    modalidades.push_back(tenisdemesa);
    Modalidade* tiro = new Modalidade("tiro");
    modalidades.push_back(tiro);
    Modalidade* triatlo = new Modalidade("triatlo");
    modalidades.push_back(triatlo);
    Modalidade* vela = new Modalidade("vela");
    modalidades.push_back(vela);
}

vector<Modalidade*> Jogosol::modalidades {};

vector<Funcionario> Jogosol::funcionarios {};

vector<Atleta> Jogosol::vatletas {};

void Jogosol::readFuncionarios()
{
    ifstream file;

    file.open("funcionarios.txt", ios::in);
    if(file.fail()){
        cout << "Ficheiro nao existe (1)" << endl;
        exit(0);
    }
    while(!file.eof())
    {
        Funcionario f;
        f.input(file);
        funcionarios.push_back(f);
    }

    file.close();
}

void Jogosol::readAtletas()
{
    ifstream file;

    file.open("atletas.txt", ios::in);
    if(file.fail()){
        cout << "Ficheiro nao existe (2)" << endl;
        exit(0);
    }

    while(!file.eof())
    {
        Atleta a;
        a.input(file);
        vatletas.push_back(a);
    }
}

bool Jogosol::addFuncionario()
{
    ofstream file;

    file.open("funcionarios.txt", ios::app);
    if(file.fail()){
        cout << "Ficheiro nao existe (3)" << endl;
        exit(0);
    }

    string nome, funcao, modalidade;
    char sexo;
    Data dataNascimento, dataChegada, dataPartida;
    int passaporte, altura, ranking, custoDiario, peso;

    cout << "Nome: ";
    cin.ignore();
    getline(cin, nome);
    cout << endl << "Sexo (H/M): ";
    cin >> sexo;
    cin.ignore(1000, '\n');
    cout << "Data de nascimento (dd/mm/aaaa): ";
    cin >> dataNascimento;
    cout << "Numero de passaporte: ";
    cin >> passaporte;
    cout << "Funcao: ";
    cin.ignore();
    getline(cin, funcao);
    cout << "Data de chegada (dd/mm/aaaa): ";
    cin >> dataChegada;
    cout << "Data de partida (dd/mm/aaaa): ";
    cin >> dataPartida;
    cout << "Custo diario: ";
    cin >> custoDiario;

    if(to_lower(funcao) == "atleta")
    {
        ofstream filea;

        filea.open(R"(atletas.txt)", ios::app);
        if(file.fail()){
            cout << "Ficheiro nao existe (4)" << endl;
            exit(0);
        }

        cout << "Modalidade: ";
        getline(cin, modalidade);
        cout << "Peso (kg): ";
        cin >> peso;
        cout << "Altura (cm):";
        cin >> altura;
        cout << "Ranking: ";
        cin >> ranking;

        Atleta a(nome, sexo, dataNascimento, passaporte, funcao, dataChegada, dataPartida, custoDiario, modalidade, peso, altura, ranking);
        vatletas.push_back(a);

        filea << endl << a;

        filea.close();

        /*
        int n;
        cout << "Numero competicoes em que participa: ";
        cin >> n;
        */
        //falta fazê-lo corresponder a competicao
    }

    else
    {
        Funcionario f(nome, sexo, dataNascimento, passaporte, funcao, dataChegada, dataPartida, custoDiario);
        funcionarios.push_back(f);

        file << endl << f;
    }



    file.close();

    return true;

    //falta verificar erros (que fariam a funcao retornar false)
}

vector<Atleta> Jogosol::getVAtletas()
{
    return vatletas;
}

vector<Funcionario> Jogosol::getFuncionarios()
{
    return funcionarios;
}

vector<Modalidade*> Jogosol::getModalidades()
{
    return modalidades;
}

