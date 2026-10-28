//Resolver la ecuacion ((a+b) / c ) al d
#include <iostream>
#include <math.h> //Vamos a hacer la operacion con simbologia...
using namespace std;
double funcion(double a, double b, double c, double d){return pow(((a+b)/c),d);}
int main(){
	double a, b, c, d, result;
	cout<<"Ingrese A\n";
	cin>>a;
	cout<<"Ingrese B\n";
	cin>>b;
	cout<<"Ingrese C\n";
	cin>>c;
	cout<<"Ingrese D\n";
	cin>>d;
	result = funcion(a,b,c,d);
	cout<<"El rsultado es: "<<result;
	return 0;
}
