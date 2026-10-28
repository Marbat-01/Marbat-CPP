#include <iostream> // input output stream
using namespace std;
int main(){
	double num1, num2, suma, resta, multi, divi;
	cout<<"Calculadora de Marito Chavez en C++\n";
	cout<<"Ingrese el primer numero a calcular: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero a calcular: ";
	cin>>num2;
	suma = num1 + num2;
	resta = num1 - num2;
	multi = num1 * num2;
	divi = num1 / num2;
	cout<<"La suma es de: "<<suma<<endl;
	cout<<"La resta es de: "<<resta<<endl;
	cout<<"La multiplicacion es de: "<<multi<<endl;
	cout<<"La division es de: "<<divi<<endl;
	return 0;
}
