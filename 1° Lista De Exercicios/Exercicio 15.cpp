//15.Escreva  um  programa  que  tenha  uma  fun��o  denominada  soma2,  que  
//seja  do tipo void e que receba 3 n�meros float, sendo que os 2 primeiros 
//n�meros dever�o ser somados e o 3� n�mero dever� ter a soma dos outros. 
//Salienta-se que o 3� n�mero dever� ser retornado� main, por�m, a fun��o � void.
#include <iostream>
#include <locale.h>

using namespace std;

// Fun��o que soma os dois primeiros n�meros e armazena o resultado no terceiro n�mero
void soma2(float &num1, float &num2, float &resultado) {
    resultado = num1 + num2;
}

int main() {
	setlocale(LC_ALL,"portuguese");
    float num1 = 5.0;
    float num2 = 3.0;
    float num3;

    soma2(num1, num2, num3);

    cout << "O resultado da soma dos dois primeiros n�meros �: " << num3 << endl;

    return 0;
}