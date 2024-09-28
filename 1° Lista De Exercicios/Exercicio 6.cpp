//6.A notória Conjectura de Goldbach postula que qualquer número inteiro par 
//maior que 2 pode ser expresso como a soma de dois números primos. Após extensos 
//testes, nenhum contraexemplo foi encontrado para desacreditar essa afirmação. 
//Sua  tarefa  é  criar  um  programa  que  demonstre  a  veracidade  dessa  
//conjectura para  todos  os  números  pares  no  intervalo  de  700  a  1100.  
//O  programa  deve imprimir  cada  número  par  e  os  números  primos  que  
//somados  a  ele  confirmam essa teoria.Use a função do exercício anterior.

#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

// Função para verificar se um número é primo
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

// Função para verificar a conjectura de Goldbach para números pares no intervalo
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
                cout << "Número par: " << n << " = " << i << " + " << n - i << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Não foi possível encontrar a conjectura de Goldbach para " << n << endl;
        }
    }
}

int main() {
	setlocale(LC_ALL,"portuguese");
    int start = 700;
    int end = 1100;

    cout << "Conjectura de Goldbach para números pares no intervalo de " << start << " a " << end << ":" << endl;
    goldbachConjecture(start, end);

    return 0;
}