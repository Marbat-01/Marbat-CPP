//En serio que me siento orgulloso de hacer este code solito
#include<iostream>
using namespace std;
int main () {
	int limite, opcion;
	do{
		cout<<"1. Ciclo for \n";
		cout<<"2. Ciclo for inverso \n";
		cout<<"3. Salir \n";
		cout<<"ingrese una opcion: \n";
		cin>>opcion;
		switch(opcion){
			case 1:
					cout<<"ingrese un limite: ";
					cin>>limite;
					for(int i = 1; i <= limite; i++){
					cout<<i<<endl;
					}
				break;
			case 2:
					for(int i = 100; i >= 1; i--){
					cout<<i<<endl;
					}
				break;
			case 3:
					cout<<"Adios baby\n";
				break;
			default:
					cout<<"opcion incorrecta\n";
				break;
							
		}
system("PAUSE()");
system("CLS()");
	}while(opcion !=3);
	return 0;
}
