/*
3 - Desenvolva a fun��o:
  int converteTempo(int numHoras, char tipo), 
que converte o n�mero de horas passado pelo 
par�metro numHoras na unidade de tempo
determinada pelo par�metro tipo, onde: �h� = horas,
 �m� = minutos e �s� = segundos.
Exemplos:
converteTempo(5,�h�) = 5
converteTempo(2,�m�) = 120
converteTempo(3,�s�) = 10800
Realizar o teste da fun��o criada na fun��o int main();
*/


#include <iostream>
#include <locale>

using namespace std;
int convertHora (int numHoras, char tipo);

int main()
{
    int h;
	cout << "Informe qtde de horas: ";
	cin >> h;
	char t;
	cout << "Informe a unidade(h,m ou s): ";
	cin >> t;
	int valor = convertHora(h, t);
	cout << " Total = "<< valor<<" unid";
	return 0;
}
int convertHora (int numHoras, char tipo)
{
	cout << tipo;
	switch(tipo)
	{
		case 'h':
        case 'H':
			return numHoras;
			break;
		case 'm':
        case 'M':
			return numHoras*60;
			break;
		case 's':
        case 'S':
			return numHoras*3600;
			break;				
	}
	return 0;
}