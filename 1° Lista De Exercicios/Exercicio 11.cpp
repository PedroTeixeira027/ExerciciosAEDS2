/******************************************************************************

11.Escreva uma fun��o recursivade nome soma()que receba um n�mero inteiro positivo  n  como  argumento  e  

retorne  a  soma  dos  n  primeiros  n�meros  inteiros. Por exemplo, se a fun��o receber n=5, deve retornar 15 (1+2+3+4+5).
*******************************************************************************/
#include <iostream>
#include <locale.h>

using namespace std;

void soma(int x) {
    
    int soma=0;
    
    for (int i=1; i<=x; i++){
    
    soma=soma+i;
}
   cout << soma;
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
    
    int a;
    
    cout << "Insira um numero: ";
    cin >> a;
    soma(a);
   

}
