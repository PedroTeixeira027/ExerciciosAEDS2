/******************************************************************************

7 - Escreva uma fun��o que receba como argumento o ano e retorne 1 se for um ano bissexto e 0 se n�o for. 

Um ano � bissexto se for divis�vel por 4, mas n�o por 100. Um ano tamb�m � bissexto se for divis�vel por 400.

*******************************************************************************/
#include <iostream>
#include <iostream>

using namespace std;

void bissextoAno(int a) {
    
    if(a%4 == 0 && a%100 != 0){
        cout<<"1";
    } else if(a%400 == 0){
        cout<<"1";
    } else{
        cout<<"0";
    }
}

int main()
{
	setlocale(LC_ALL,"portuguese");
   int ano;
   
   cout << "Insira o ano para verificar se o ano � bissexto";
   cin >> ano;
   bissextoAno(ano);
   cout<<endl;
    return 0;
}
