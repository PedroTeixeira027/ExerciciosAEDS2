/******************************************************************************

9.Escreva uma fun��o que receba um n�mero float como argumento e retorne, 

em outros dois argumentos passados por refer�ncia, 

a parte inteira e a parte decimal desse n�mero.
*******************************************************************************/

#include <iostream>
#include <locale.h>

using namespace std;

void separarPartes(float numero, int& parteInteira, float& parteDecimal) {
    parteInteira = numero;
    parteDecimal = numero - parteInteira;
    
    cout << "Parte inteira: " << parteInteira << endl;
    cout << "Parte decimal: " << parteDecimal<< endl;

}

int main()
{
	setlocale(LC_ALL,"portuguese");
    
    float numero;
    int parteInteira;
    float parteDecimal;
    
    cout << "Escreva um numero float: ";
    cin >> numero;
    separarPartes(numero, parteInteira, parteDecimal);

    return 0;
}

