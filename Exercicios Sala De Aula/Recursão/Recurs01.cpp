
# include <iostream>
using namespace std;

void recur(int counter){
	if (counter > 0){
		cout << "Recursão em C++ - Estrutura de Dados II" << endl;
		recur(counter -1);
	}		
}

int main(){
	setlocale(LC_ALL, "portuguese")
	
	recur(5);
	return 0;
	
}