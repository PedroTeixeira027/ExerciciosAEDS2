//12.Escreva uma fun��o recursivaque receba como argumento o n�mero do termo de 
//uma  sequ�ncia  de  Fibonacci  e  retorne  o  seu  valor.  Por  exemplo,  se  o
//argumento for 8, a fun��o retornar� 13.
#include <iostream>
#include <locale.h>

using namespace std;

// Fun��o recursiva para calcular o termo da sequ�ncia de Fibonacci
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	setlocale(LC_ALL,"portuguese");
    int termo = 8;
    int resultado = fibonacci(termo);

    cout << "O " << termo << "� termo da sequ�ncia de Fibonacci �: " << resultado << endl;

    return 0;
}