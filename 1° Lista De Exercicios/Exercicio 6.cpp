//6.A not�ria Conjectura de Goldbach postula que qualquer n�mero inteiro par 
//maior que 2 pode ser expresso como a soma de dois n�meros primos. Ap�s extensos 
//testes, nenhum contraexemplo foi encontrado para desacreditar essa afirma��o. 
//Sua  tarefa  �  criar  um  programa  que  demonstre  a  veracidade  dessa  
//conjectura para  todos  os  n�meros  pares  no  intervalo  de  700  a  1100.  
//O  programa  deve imprimir  cada  n�mero  par  e  os  n�meros  primos  que  
//somados  a  ele  confirmam essa teoria.Use a fun��o do exerc�cio anterior.

#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

// Fun��o para verificar se um n�mero � primo
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Fun��o para verificar a conjectura de Goldbach para n�meros pares no intervalo
void goldbachConjecture(int start, int end) {
    if (start < 4) {
        start = 4;
    }
    if (start % 2 != 0) {
        ++start;
    }

    for (int n = start; n <= end; n += 2) {
        bool found = false;
        for (int i = 2; i <= n / 2; ++i) {
            if (isPrime(i) && isPrime(n - i)) {
                cout << "N�mero par: " << n << " = " << i << " + " << n - i << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "N�o foi poss�vel encontrar a conjectura de Goldbach para " << n << endl;
        }
    }
}

int main() {
	setlocale(LC_ALL,"portuguese");
    int start = 700;
    int end = 1100;

    cout << "Conjectura de Goldbach para n�meros pares no intervalo de " << start << " a " << end << ":" << endl;
    goldbachConjecture(start, end);

    return 0;
}