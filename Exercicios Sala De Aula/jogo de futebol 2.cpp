/*
Fa�a um programa que calcule a pontua��o de dois times 
ap�s uma partida de futebol. Na fun��o principal leia 2 
n�meros inteiros que correspondem ao n�mero de pontos dos
2 times antes do jogo. Depois leia dois inteiros  que 
representam o n�mero de gols que cada time fez na partida. 
Voc� dever� fazer uma fun��o separada que receba os pontos
dos dois times por refer�ncia e os atualize de acordo com
o resultado. 
Em caso de vit�ria s�o somados 3 pontos, em caso de 
empate � somado um ponto, e em caso de derrota,
nenhum ponto � somado.
*/
#include <iostream>
#include <windows.h>
using namespace std;
void atualizaPontos(int &time1, int &time2, int g1, int g2);
int main()
{
	int pontos1, pontos2;
	cout << "Informe pontua��o do Tabajaras Clube e do ";
	cout << "Varzeas Clube: ";
	cin >> pontos1 >> pontos2;
	cout<< "Partida rolando...\n";
	Sleep(2000);
	int gols1, gols2;
	cout << "Informe o placar da da partida:  ";
	cin >> gols1 >> gols2;
	atualizaPontos(pontos1, pontos2, gols1, gols2);
	cout<<"Pontos do Tabajaras Clube = "<< pontos1 << endl;
	cout<<"Pontos do Varzea Clube = "<< pontos2 << endl;
	return 0;
}

void atualizaPontos(int &time1, int &time2, int g1, int g2)
{
	if (g1>g2)
		time1 = time1 + 3;
	else
		if(g1==g2)
		{
			time1++;
			time2++;
		}
		else
			time2 = time2+3;
}