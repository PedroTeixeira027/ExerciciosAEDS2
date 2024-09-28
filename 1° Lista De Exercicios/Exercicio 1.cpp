//1.Escreva  um  trecho  de c�digopara  fazer  a  cria��odos  novos  tipos  de  
//dados conformesolicitado abaixo:_ Hor�rio: composto de hora, minutos e 
//segundos._ Data: composto de dia, m�se ano._ Compromisso:  composto  de  uma  
//data, hor�rioe  texto  que  descreve  o compromisso.
#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

// Defini��o da struct Hor�rio
struct Horario {
    int hora;
    int minuto;
    int segundo;
};

// Defini��o da struct Data
struct Data {
    int dia;
    int mes;
    int ano;
};

// Defini��o da struct Compromisso
struct Compromisso {
    Data data;
    Horario horario;
    string descricao;
};

// Fun��o para imprimir informa��es de um compromisso
void imprimirCompromisso(const Compromisso& compromisso) {
    cout << "Compromisso: " << compromisso.descricao << endl;
    cout << "Data: " << compromisso.data.dia << "/" << compromisso.data.mes << "/" << compromisso.data.ano << endl;
    cout << "Hor�rio: " << compromisso.horario.hora << ":" << compromisso.horario.minuto << ":" << compromisso.horario.segundo << endl;
}

int main()
{
	setlocale(LC_ALL,"portuguese");
    // Exemplo de uso das structs e da fun��o
    Horario horario1 = {14, 30, 0};
    Data data1 = {3, 10, 2023};
    Compromisso compromisso1 = {data1, horario1, "Reuni�o de equipe"};

    // Imprimir informa��es sobre o compromisso usando a fun��o
    imprimirCompromisso(compromisso1);

    return 0;
}