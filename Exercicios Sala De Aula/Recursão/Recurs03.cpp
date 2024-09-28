# include <iostream>
using namespace std;

int sum(int num){
	if (num == 1)
		return 1;
	else
		return num + sum(num - 1);
}

int main(){
	setlocale(LC_ALL, "portuguese");
	int num;
	
	cout << "Somatório de: ";
	cin >> num;
	
	cout << "Igual a: " << sum(num) << endl;
	
}