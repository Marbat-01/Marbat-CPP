#include <iostream> // input output stream
using namespace std;
int main(){
	double num1, num2, suma, resta, multi, divi;
	cout<<"Calculadora de Marito en C++\n";
	cout<<"Ingrese el primer numero a calcular: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero a calcular: ";
	cin>>num2;
	suma = num1 + num2;
	resta = num1 - num2;
	multi = num1 * num2;
	divi = num1 / num2;
	cout<<"La suma es de: "<<suma<<endl;
	cout<<"La resta es de: "<<resta;
	cout<<"La multiplicación es de: "<<multi;
	cout<<"La división es de: "<<divi;
	return 0;
}
