//1.Escreva  um  trecho  de códigopara  fazer  a  criaçãodos  novos  tipos  de  
//dados conformesolicitado abaixo:_ Horário: composto de hora, minutos e 
//segundos._ Data: composto de dia, mêse ano._ Compromisso:  composto  de  uma  
//data, horárioe  texto  que  descreve  o compromisso.
#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

// Definição da struct Horário
struct Horario {
    int hora;
    int minuto;
    int segundo;
};

// Definição da struct Data
struct Data {
    int dia;
    int mes;
    int ano;
};

// Definição da struct Compromisso
struct Compromisso {
    Data data;
    Horario horario;
    string descricao;
};

// Função para imprimir informações de um compromisso
void imprimirCompromisso(const Compromisso& compromisso) {
    cout << "Compromisso: " << compromisso.descricao << endl;
    cout << "Data: " << compromisso.data.dia << "/" << compromisso.data.mes << "/" << compromisso.data.ano << endl;
    cout << "Horário: " << compromisso.horario.hora << ":" << compromisso.horario.minuto << ":" << compromisso.horario.segundo << endl;
}

int main()
{
	setlocale(LC_ALL,"portuguese");
    // Exemplo de uso das structs e da função
    Horario horario1 = {14, 30, 0};
    Data data1 = {3, 10, 2023};
    Compromisso compromisso1 = {data1, horario1, "Reunião de equipe"};

    // Imprimir informações sobre o compromisso usando a função
    imprimirCompromisso(compromisso1);

    return 0;
}