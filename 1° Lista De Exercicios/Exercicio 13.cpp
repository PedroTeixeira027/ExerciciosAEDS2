/******************************************************************************

13.Escreva um programa que tenha uma função recursiva que receba dois números inteiros X e Y 

e calcule o valor de XY. Utilize apenas multiplicações.

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
