#include <iostream>
using namespace std;
double somar(double x, double y)
{
	double soma = x+y;
	return soma;
}
double diferenca(double x, double y);

double produto(double x, double y)
{
	double mult = x*y;
	return mult;
}
double divisao(double x, double y)
{
	double divi =0 ;
	if(y != 0) 
	   divi = x/y;
   return divi;
}
void par_e_impar(int x)
{
	int result = x%2;
	if(result ==0)
		cout<<"PAR";
	else
		cout<<"IMPAR";
	//return;
}
int main()
{
    int c;
    cout << "Informeum valor inteiro: ";
    cin >> c; 
	par_e_impar(c);  
    cout <<endl;
    
	double a, b;
    cout << "Informe os valores reais ";
    cin >> a >> b;    
    cout << "Soma = "<< somar(a,b)<<endl;
    
    cout << "Informe os valores reais ";
    cin >> a >> b;
    cout << "Diferença = "<< diferenca(a,b)<<endl;
    
    cout << "Informe os valores reais ";
    cin >> a >> b;
    cout << "Produto = "<< produto(a,b)<<endl;
    
    cout << "Informe os valores reais ";
    cin >> a >> b;
    
    cout << "Divisão = "<< divisao(a,b)<<endl;   
    
	return 0;
}
double diferenca(double x, double y)
{
   double sub = x-y;
   return sub;
}
