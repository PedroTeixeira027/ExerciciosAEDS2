/******************************************************************************

14.Escreva  um  programa  que  tenha  uma  função  denominada  soma1, 

que  seja  do tipo float e que receba 2 números float e retorne a soma dos referidos números.
*******************************************************************************/
#include <iostream>
#include <locale.h>

using namespace std;

void soma1(float& x, float& y){
    
    x=x+y;
    
    cout << "A soma dos valores e igual a: " << x;
}

int main()
{
	setlocale(LC_ALL,"portuguese");
  float numero1;
  float numero2;
  
  cout << "Insira dois numeros float para somar: ";
  cin >> numero1 >> numero2;
  cout << endl;
  soma1(numero1,numero2);

    return 0;
}
