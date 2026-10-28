//Resolver la ecuacion ((a+b) / c ) al 3
#include <iostream>
#include <math.h> //Vamos a hacer la operacion con simbologia... Aqui esta esta libreria
using namespace std;
double funcion(double a, double b, double c){ //FACIL - Aqui hacemos una funcion... Esta con la operacion.
	return pow(((a+b)/c),3);
}
int main(){
	double a, b, c, result;
	cout<<"Ingrese A\n";
	cin>>a;
	cout<<"Ingrese B\n";
	cin>>b;
	cout<<"Ingrese C\n";
	cin>>c;
	result = funcion(a,b,c);
	cout<<"El rsultado es: "<<result;
	return 0;
}
