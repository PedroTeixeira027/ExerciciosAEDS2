/******************************************************************************

13.Escreva um programa que tenha uma fun��o recursiva que receba dois n�meros inteiros X e Y 

e calcule o valor de XY. Utilize apenas multiplica��es.

*******************************************************************************/
#include <iostream>
#include <locale.h>

using namespace std;

void potencia(int x, int y) {
    
    int soma;
    
    for (int i=0; i<x; i++){
    
    soma=y*y;
}
   cout << soma;
}

int main(){
    
    setlocale(LC_ALL,"portuguese");
    int a, b;
    
    cout << "Insira o expoente: ";
    cin >> a;
    cout<< "Insira o base da potencia: ";
    cin >> b;
    potencia(a,b);

}
