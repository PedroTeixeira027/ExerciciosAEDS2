/******************************************************************************

5.Fa�aum programa que controla o consumo de energia dos eletrodom�sticosde umacasa e:_ Crie  e leia 5 eletrodom�sticosque  

contem nome (m�ximo15 letras), pot�ncia(real,em kW) e tempo ativo por dia (real, em horas).

Algoritmos e Estrutura de Dados II_ Leia  um  tempo t (em  dias),  calcule  e  mostre  o  

consumo  total  na  casa  e  o consumorelativo   de   cada eletrodom�stico(consumo/consumo   total)  

nesse per�odode tempo.Apresente este �ltimodado em porcentagem

*******************************************************************************/
#include <iostream>
#include <locale.h>

using namespace std;

    struct cadastro {
        char nome [15];
        float potencia;
        float tempo;
        float consumo;
    };

int main()
{
	setlocale(LC_ALL,"portuguese");
    int dias;
   
    cadastro eletrodomestico[5];
   
    for (int i=0;i<5; i++){
       cout << "Digite o nome do eletrodom�stico (com ate 15 letras): ";
       cin >> eletrodomestico[i].nome;
       cout << "digite a potencia em kW: ";
       cin >> eletrodomestico[i].potencia;
       cout << "Digite o tempo em que ele fica ligado (em horas): ";
       cin >> eletrodomestico[i].tempo;
   }

    cout << "Dados cadastrados!! \n";
    cout << "Digite a quantidade de dias que voce quer calcular o consumo: ";
    cin >> dias;
    float consTotal = 0;
    
    for (int i=0; i<5; i++) 
    {
        eletrodomestico[i].consumo = eletrodomestico[i].potencia*eletrodomestico[i].tempo*dias;
        consTotal = consTotal + eletrodomestico[i].consumo;
    }
    cout << "Consumo da casa = " << consTotal<<endl;
    for(int i=0;i<5;i++)
    cout << eletrodomestico[i].nome << "consumiu " << 
    eletrodomestico[i].consumo/consTotal*100 << "%\n";
    
    return 0;
}

