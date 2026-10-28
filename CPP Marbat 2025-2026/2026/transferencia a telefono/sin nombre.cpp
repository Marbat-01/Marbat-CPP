//Ahora, hacer una transferencia a un numero de telefono!
#include <iostream>
#include <cstdlib>
#include <ctime>  // Use estas librerias para el random
using namespace std;

//Inicio de las funciones (Como mini-codigos):

void menu(){
	cout<<"Seleccione una de las siguientes opciones...\n";
	cout<<"1. Consultar.\n";
	cout<<"2. Depositar.\n";
	cout<<"3. Retirar.\n";
	cout<<"4. Realizar una transferencia!"<<endl;
	cout<<"5. Salir.\n";
	cout<<"- - - - - - - - - - - - - - - - - - - - - - -"<<endl;
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
	int monto = 0;
	int random = 0;
	int clave = 0;
	string tel;

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
		cout<<"- - - - - - - - - - -"<<endl;
		cout<<"Se ha seleccionado la opcion para hacer un monto."<<endl;
		cout<<"Ingrese un numero de telefono al que quiera mandar dinero: "<<endl;
		cin>>tel;
		cout<<"Se ha ingresado el numero: +502 "<<tel<<endl;
		cout<<"Ingrese un monto:"<<endl;
		cin>>monto;
		if (monto < cant){
	    int random = 10000000 + rand() % 90000000;
			cout<<"Se va a transferir: "<<monto<<" Quetzales al numero de telefono!"<<endl;
			cout<<"Para continuar, ingrese la siguiente clave:"<<random<<endl;
			cin>>clave;
			if (clave == random){
				cout<<"Se ha transferido la cantidad al nuevo numero de telefono!"<<endl;
			} else {
				cout<<"La clave es incorrecta"<<endl;
			}
		} else {
			cout<<"No cuenta con el dinero suficiente para realizar una transferencia!"<<endl;
		}
		break;
		
		case 5:
		cout<<"Saldra del sistema... (Mario Roberto - Febrero 2026)\n";
		break;	
				
		default:
			cout<<"-Por favor ingrese una opcion correcta-\n";
		break;
	}
}while(option != 5);
	return 0;
}

