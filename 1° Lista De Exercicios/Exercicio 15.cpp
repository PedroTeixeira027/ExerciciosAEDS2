//15.Escreva  um  programa  que  tenha  uma  função  denominada  soma2,  que  
//seja  do tipo void e que receba 3 números float, sendo que os 2 primeiros 
//números deverão ser somados e o 3º número deverá ter a soma dos outros. 
//Salienta-se que o 3º número deverá ser retornadoà main, porém, a função é void.
#include <iostream>
#include <locale.h>

using namespace std;

// Função que soma os dois primeiros números e armazena o resultado no terceiro número
void soma2(float &num1, float &num2, float &resultado) {
    resultado = num1 + num2;
}

int main() {
	setlocale(LC_ALL,"portuguese");
    float num1 = 5.0;
    float num2 = 3.0;
    float num3;

    soma2(num1, num2, num3);

    cout << "O resultado da soma dos dois primeiros números é: " << num3 << endl;

    return 0;
}