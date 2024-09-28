# include <iostream>
using namespace std;

void recur(){
	
	cout << "Recursão em C++ - Estrutura de Dados II" << endl;
	recur();	
}

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	recur();
	
	return 0;
	
}