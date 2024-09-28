# include <iostream>
using namespace std;


int fat(int num){
	   if (num==1)
	   	   return 1;
    else return num*fat(num-1);
				
}

int main(){
	int num, result;
	cout << "Fatorial de: ";
	cin >> num;
	result = fat(num);
	
	cout << "O fatorial é : " << result << endl;
}
