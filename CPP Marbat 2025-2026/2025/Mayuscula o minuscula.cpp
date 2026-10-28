//Programa que identifique si una vocal es mayus o minus
#include <iostream>
using namespace std;

void funcion (char vocal){
	switch (vocal){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		cout<<"Es minuscula."<<endl;
		break;
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		cout<<"Es mayuscula."<<endl;
		break;
		default:
	cout<<"La palabra debe llevar una vocal."<<endl;
		break;
		
		
	}
}

int main (){
	char letra;
	char vocal;
	char result;
	cout<<"Ingrese una palabra:"<<endl;
	cin>>vocal;
	funcion(vocal);
	cout<<funcion;
}

