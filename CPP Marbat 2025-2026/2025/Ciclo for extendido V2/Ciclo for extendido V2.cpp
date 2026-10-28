//Soy tremendo
#include<iostream>
using namespace std;
int main () {
	int inicio, final, opcion;
	do{
		cout<<"1. Ciclo for del 1 al 50 \n";
		cout<<"2. Ciclo for \n";
		cout<<"3. Salir \n";
		cout<<"ingrese una opcion: \n";
		cin>>opcion;
		switch(opcion){
			case 1:
					for(int i = 1; i <= 50; i++){
					cout<<i<<endl;
					}
				break;
			case 2:
					cout<<"ingrese un inicio: ";
					cin>>inicio;
					cout<<"Ahora ingrese un final: ";
					cin>>final;
					for(int i = inicio; i <= final; i++){
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
