# include <iostream>
using namespace std;



int main(){

	int num;
	cout << "Fatorial de: ";
	cin >> num;
	
	for(int i = (num -1); i > 0 ; i--){
		num *= i;
	} 

	cout << " Igual a: " << num << endl;
}