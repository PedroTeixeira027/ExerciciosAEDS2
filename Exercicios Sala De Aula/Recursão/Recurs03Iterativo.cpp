# include <iostream>
using namespace std;



int main(){
	setlocale(LC_ALL, "portuguese");
	int num, sum;
	
	cout << "Somatório de: ";
	cin >> num;
	sum = num;
	for (int i=(num -1); i > 0; i--){
		sum += i;
	}
	cout << "Igual a: " << sum << endl;
	
}