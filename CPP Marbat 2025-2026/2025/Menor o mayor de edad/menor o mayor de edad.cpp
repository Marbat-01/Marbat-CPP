#include <iostream>
using namespace std;
int main(){
	int edad, resultado;
	cout<<"Por favor ingrese su edad... \n";
	cin>>edad;
	if (edad >= 18){
		cout<<"Eres mayor de edad.";
	}else if (edad < 18){
		cout<<"Eres menor de edad.";
	}else if (edad = 0){
		cout<<"Aun no has nacido.";
	}else {
		cout<<"Ha currido un error.";
	}
	return 0;
}
