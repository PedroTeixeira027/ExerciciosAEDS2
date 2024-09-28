/******************************************************************************

7 - Escreva uma função que receba como argumento o ano e retorne 1 se for um ano bissexto e 0 se não for. 

Um ano é bissexto se for divisível por 4, mas não por 100. Um ano também é bissexto se for divisível por 400.

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
   
   cout << "Insira o ano para verificar se o ano é bissexto";
   cin >> ano;
   bissextoAno(ano);
   cout<<endl;
    return 0;
}
