//cajero automatico con pin de 4 digitos de acceso
#include <iostream>
using namespace std;
int main(){
	int contador = 0, opcion, deposito, retiro;
	double pin, cuenta = 1000;
	do{                                                                                                                                       
		cout<<"Ingrese el pin de acceso (1234)\n";
		cin>>pin;
		if(pin == 1234){
			do{
				cout<<"Se ha accedido al sistema...\n";
				cout<<"1. Depositar\n";
				cout<<"2. Retirar\n";
				cout<<"3. Conslutar\n";
				cout<<"4. Salir\n";
				cout<<"Ingrese una opción...\n";
				cin>>opcion;
				switch(opcion){
					case 1:
						cout<<"Ingrese el monto a depositar\n";
						cin>>deposito;
						if (deposito % 50 == 0){
						cuenta = cuenta + deposito;
						cout<<"Nuevo saldo de: "<<cuenta<<endl;
						}else{
						cout<<"Error, debe ingresar una cantidad divisible entre 50."<<endl;
						}
					break;
					case 2:
							cout<<"Ingrese la cantidad que desea retirar:\n";
							cin>>retiro;
							if (retiro % 50 == 0){
								cuenta = cuenta - retiro;
								cout<<"Nuevo saldo de: "<<cuenta<<endl;
							}else{
								cout<<"Error, debe ingresar una cantidad divisible entre 50."<<endl;
							}
					break;
					case 3:
							cout<<"Su saldo actual es de: "<<cuenta<<endl;
					break;
					case 4:
							cout<<"Bye Bye\n";
					break;
					default:
							cout<<"Opcion incorrecta\n";
					break;
				}
			}while(opcion !=4);
		}else{
			cout<<"Acceso incorrecto\n";
			contador ++;
			if(contador==3){
				return 0;
			}
		}
	}while(opcion !=4);
	return 0;
	}
