#include <iostream>
using namespace std;
int main(){
	double num1, num2, num3;
	cout<<"Ingrese un primer numero: \n";
	cin>>num1;
	cout<<"Ingrese un segundo numero: \n";
	cin>>num2;
	cout<<"Ingrese un tercer numero: \n";
	cin>>num3;
	cout<<"Se mostrara la cantidad ingresada mas grande... \n";
	if(num1 > num2 && num1 > num3){
		cout<<"El primer numero es el mayor.";
	}else if(num2 > num1 && num2 > num3){
		cout<<"El Segundo numero es el mayor.";
	}else if(num3 > num1 && num3 > num2){
		cout<<"El tercer numero es el mayor.";
	}else
	cout<<"Hubo un error";
	return 0;
}

