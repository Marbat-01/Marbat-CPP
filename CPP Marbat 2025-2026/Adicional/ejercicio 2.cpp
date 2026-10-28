//Ejercicio 2 - Hecho independientemente por mi y asignado por el canal
/*2. Escribe un programa que lea de la entrada estándar el precio de un
producto y muestre en la salida estandar el precio del producto al
aplicarle el IVA*/

#include <iostream>
using namespace std;
int main (){
	int precio, result;
	cout<<"Estara apunto de comprar una unidad"<<endl;
	cout<<"Ingrese cual es el precio de esa unidad: "<<endl;
	cin>>precio;
	result = precio * 0.12;
	cout<<"El IVA aplicado del producto es: "<<result<<endl; 
	return 0;
}
