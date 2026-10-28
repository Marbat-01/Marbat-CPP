//sistema de login de pin 4 digitos hacia cajero, consultar, depositar, retirar
//utilizando funciones (Por que una contraseña incorrecta si funciona aqui!?)
#include <iostream>
using namespace std;

//Inicio de las funciones (Como mini-codigos):

void menu(){
	cout<<"Seleccione una de las siguientes opciones...\n";
	cout<<"1. Consultar.\n";
	cout<<"2. Depositar.\n";
	cout<<"3. Retirar.\n";
	cout<<"4. Salir.\n";
}
int salir(){
	cout<<"La clave es incorrecta... Se saldra del sistema.\n";
	return 0;
}
int login(int pin){
	if(pin == 1234){
		cout<<"-MENU DE OPCIONES-\n";
	} else {
		salir();
	}
}

//Codigo principal:

int main(){
	int pin, option;
	int cant = 5000;
	int suma = 0;
	int resta = 0;

	cout<<"Sistema bancario - Ingrese la clave (1234)...\n";
	cin>>pin;
	login(pin);
	do{
		cout<<"Ha accedido al menu.\n";
		menu();
		
	cin>>option;

	switch(option){
		case 1:
			cout<<"- - - - - - - - - - -"<<endl;
			cout<<"Se esta consultando el saldo actual!"<<endl;
			cout<<"Su saldo actual es de: "<<cant<<" Quetzales."<<endl;
			cout<<"- - - - - - - - - - -"<<endl;
		break;
		case 2:
			cout<<"- - - - - - - - - - -"<<endl;
			cout<<"Se le sumara a su cantidad actual!"<<endl;
			cout<<"Cuanto quiere agregarle a su cuenta?"<<endl;
			cin>>suma;
			cant = cant + suma;
			cout<<"Su saldo ahora es de: "<<cant<<" Quetzales."<<endl;
			cout<<"- - - - - - - - - - -"<<endl;
		break;
		case 3:
			cout<<"- - - - - - - - - - -"<<endl;
			cout<<"Se le restara a su cantidad actual!"<<endl;
			cout<<"Cuanto quiere quitarle a su cuenta?"<<endl;
			cin>>resta;
			cant = cant - resta;
			cout<<"Su saldo ahora es de: "<<cant<<" Quetzales."<<endl;
			cout<<"- - - - - - - - - - -"<<endl;
		break;
		case 4:
		cout<<"Saldra del sistema... (Mario Roberto - Febrero 2026)\n";
		break;
		default:
			cout<<"-Por favor ingrese una opcion correcta-\n";
		break;
	}
}while(option != 4);
	return 0;
}

