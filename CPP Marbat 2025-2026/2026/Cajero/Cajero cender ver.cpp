#include <iostream>
//sistema de login de pin 4 digitos hacia cajero, consultar, depositar, retirar
// utilizando funciones
using namespace std;
void menu(){
	cout<<"Bienvenido\n";
	cout<<"1. Consultar\n";
	cout<<"2. Depositar\n";
	cout<<"3. Retirar\n";
	cout<<"4. Salir\n";
}
int salir(){
	cout<<"bye bye\n";
	return 0;
}
int login(int pin){
	if(pin == 1234){
		cout<<"Bienvenido al sistema\n";
	}else{
		salir();
	}
}

int main(){
	int pin, option;

	cout<<"Ingrese el pin\n";
	cin>>pin;
	login(pin);
	do{
		menu();
		cout<<"Ingrese la opcion\n";
		
	cin>>option;

	switch(option){
		case 1:
			cout<<"Consulta de saldo\n";
		break;
		case 2:
			cout<<"Deposito de saldo\n";
		break;
		case 3:
			cout<<"Retiro de saldo\n";
		break;
		case 4:
		cout<<"Se cerrara el super sistema\n";
		break;
		default:
			cout<<"Ingrese una opcion correcta\n";
		break;
	}
}while(option != 4);
	return 0;
}

