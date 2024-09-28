/******************************************************************************

9.Escreva uma função que receba um número float como argumento e retorne, 

em outros dois argumentos passados por referência, 

a parte inteira e a parte decimal desse número.
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

