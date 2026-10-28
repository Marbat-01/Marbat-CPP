#include <iostream>
using namespace std;
void menu ();

int main (){
	const int numero = 10;
	int opcion, opcion2;
	int arreglo[numero];
	
	cout<<"Ingrese 10 numeros..."<<endl;
	for (int i = 0; i < numero; i++){
	cin>>arreglo[i];
	}
	cout<<"AHORA, Ingrese una opcion:"<<endl;
	cout<<"1. Mostrar el arreglo."<<endl;
	cout<<"2. Calcular el promedio."<<endl;
	cout<<"3. Encontrar el numero mayor."<<endl;
	cout<<"4. Encontrar el numero menor."<<endl;
	cout<<"5. Buscar un numero en el arreglo."<<endl;
	cout<<"6. Ordenar el arreglo."<<endl;
	cout<<"7. Salir."<<endl;
	
	cin>>opcion;
	switch(opcion){
		case 1:
		break;
		case 2:
			return 0;
		break;
		default:
			cout<<"Ingrese la opción correcta"<<endl;
		break;
	}	
	
	
	return 0;
}
