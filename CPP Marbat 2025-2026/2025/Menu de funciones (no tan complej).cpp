#include <iostream>
using namespace std;
void menu();
int suma(int a, int b ){
return a + b;
}
int resta(int a, int b ){return a - b;} //¿otra forma de ponerlo
int mult(int a, int b ){return a * b;}
int div(int a, int b ){return a / b;}
int op(int a, int b, int c ){return ((a + b) / c) * ((a + b) / c);} //Operacion como toda la vida
void menu(){
	cout<<"1. Sumar\n 2. Restar \n 3. Multiplicar\n 4. Dividir\n 5. OP\n";
	cout<<"ingrese la opcion a sleccionar\n";
}
int main(){
	int opcion, resultado, num1, num2, num3;
	menu();
	cin>>opcion;
	switch(opcion){
		case 1:
			cout<<"Ingrese los numeros a sumar...";
			cin>>num1>>num2;
			resultado = suma(num1,num2);
			cout<<"la suma es de: "<<resultado<<endl;
		break;
		case 2:
			cout<<"Ingrese los numeros a rest...";
			cin>>num1>>num2;
			resultado = resta(num1,num2);
			cout<<"la resta es de: "<<resultado<<endl;
		break;
		case 3:
			cout<<"Ingrese los numeros a multiplicar...";
			cin>>num1>>num2;
			resultado = mult(num1,num2);
			cout<<"la multiplicacion es de: "<<resultado<<endl;
		break;
		case 4:
			cout<<"Ingrese los numeros a division...";
			cin>>num1>>num2;
			resultado = div(num1,num2);
			cout<<"la division es de: "<<resultado<<endl;
		break;
		case 5:
			cout<<"Ingrese los siguientes datos de la operacion A B y C..."<<endl;
			cin>>num1>>num2>>num3;
			resultado = op(num1,num2,num3);
			cout<<"El resultado de la operacion es:"<<resultado<<endl;
		break;
		default:
			cout<<"Opcion incorrecta..."<<endl;
		break;
	}
	
	return 0;
}
