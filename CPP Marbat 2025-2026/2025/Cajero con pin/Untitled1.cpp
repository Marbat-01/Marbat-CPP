//cajero automatico con pin de 4 digitos de acceso
#include <iostream>
using namespace std;
int main(){
	int contador = 0;
	double pin, cuenta, deposito, retiro, opcion;
	
	cout<<"Ingrese el pin de acceso\n";
	cin>>pin;
	if (pin == 1234){
	do{
		cout<<"Acceso correcto\n";
		cout<<"1. Depositar";
		cout<<"2. Depositar";
		cout<<"3. Depositar";
		cout<<"4. Depositar";
	}else{
		cout<<"Acceso incorrecto\n";
		contador ++;
		if (contador = 3){
			return 0;
		}
	}
	}while(true);
	return 0;
}

/*
include <iostream>
using namespace std;
int main(){
	int deposito, cuenta;
	cuenta = 1000;
	deposito = 1500;
	if (deposito % 50 == 0){
		cout<<"Deposito correcto\n";
	}else{
		cout<<"deposito incorrecto\n";
	}
	return 0;
}
*/

