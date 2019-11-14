#include "jogosol.h"

using namespace std;

Jogosol::Jogosol()
{
    Jogosol::readFuncionarios();

    Jogosol::readAtletas();

    Modalidade atletismo("atletismo");
    modalidades.push_back(atletismo);
    Modalidade badminton("badminton");
    modalidades.push_back(badminton);
    Modalidade canoagem("canoagem");
    modalidades.push_back(canoagem);
    Modalidade ciclismo("ciclismo");
    modalidades.push_back(ciclismo);
    Modalidade futebol("futebol");
    modalidades.push_back(futebol);
    Modalidade Canoagem("canoagem");
    modalidades.push_back(Canoagem);
    Modalidade ginastica("ginastica");
    modalidades.push_back(ginastica);
    Modalidade golfe("golfe");
    modalidades.push_back(golfe);
    Modalidade hipismo("hipismo");
    modalidades.push_back(hipismo);
    Modalidade judo("judo");
    modalidades.push_back(judo);
    Modalidade natacao("natacao");
    modalidades.push_back(natacao);
    Modalidade taekwondo("taekwondo");
    modalidades.push_back(taekwondo);
    Modalidade tenis("tenis");
    modalidades.push_back(tenis);
    Modalidade tenisdemesa("tenisdemesa");
    modalidades.push_back(tenisdemesa);
    Modalidade tiro("tiro");
    modalidades.push_back(tiro);
    Modalidade triatlo("triatlo");
    modalidades.push_back(triatlo);
    Modalidade vela("vela");
    modalidades.push_back(vela);
}

vector<Modalidade> Jogosol::modalidades {};

vector<Funcionario> Jogosol::funcionarios {};

vector<Atleta> Jogosol::vatletas {};

void Jogosol::readFuncionarios()
{
    ifstream file;

    file.open("/Users/tomas/Google Drive/FEUP/2º Ano/Pasta Pessoal/1º Semestre/AEDA/Trabalho 1/TrabalhoAEDAParte1/funcionarios.txt", ios::in);

    while(!file.eof())
    {
        Funcionario f;
        f.input(file);
        funcionarios.push_back(f);
    }
}

void Jogosol::readAtletas()
{
    ifstream file;

    file.open("/Users/tomas/Google Drive/FEUP/2º Ano/Pasta Pessoal/1º Semestre/AEDA/Trabalho 1/TrabalhoAEDAParte1/atletas.txt", ios::in);

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

    file.open("/Users/tomas/Google Drive/FEUP/2º Ano/Pasta Pessoal/1º Semestre/AEDA/Trabalho 1/TrabalhoAEDAParte1/funcionarios.txt", ios::app);

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

        filea.open(R"(C:\Users\Fisica1\Desktop\AEDA\Trabalho\TrabalhoAEDAParte1\atletas.txt)", ios::app);

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

vector<Modalidade> Jogosol::getModalidades()
{
    return modalidades;
}

