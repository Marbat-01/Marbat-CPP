#include <iostream>
#include <math.h>
using namespace std;
void menu();
double operacion(double a, double b, double c ){return (((-b) + (sqrt (pow (b,2) - 4 * a * c))) / 2);}
double operes(double a, double b, double c ){return (-b - sqrt (pow (b,2) - 4 * a * c)) / 2;}
void menu(){
	cout<<"presione el boton 1 para hacer la SUMA."<<endl;
	cout<<"presione el boton 2 para hacer la RESTA.\n";
}
int main(){
	int opcion, resultado, num1, num2, num3;
	menu();
	cin>>opcion;
	switch(opcion){
		case 1:
			cout<<"Ingrese los numeros a operar (A-B-C)..."<<endl;
			cin>>num1>>num2>>num3;
			resultado = operacion(num1,num2, num3);
			cout<<"la respuesta es de: "<<resultado<<endl;
		break;
		case 2:
			cout<<"Ingrese los numeros a operar (A-B-C)..."<<endl;
			cin>>num1>>num2>>num3;
			resultado = operes(num1,num2, num3);
			cout<<"la respuesta es de: "<<resultado<<endl;
		break;
		default:
			cout<<"Opcion incorrecta..."<<endl;
		break;
	}
	return 0;
}
