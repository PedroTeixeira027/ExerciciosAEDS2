#include <iostream>
using namespace std;

int fibo(int num);

int main(){
	int num;
	cout << "Termo: ";
	cin >> num;
	cout << "Igual a: " << fibo(num) << endl;
}

int fibo(int num){
	if (num == 1)
		return 1;
	else
		if (num == 2)
			return 1;
		else
			return fibo(num-1) + fibo(num-2); 
}