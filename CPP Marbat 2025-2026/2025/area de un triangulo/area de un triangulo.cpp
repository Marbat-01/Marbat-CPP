#include <iostream>
using namespace std;
int area_triangulo(int a, int b){
	return (a * b) / 2;	
}
int main (){
	int base, altura, area;
	cout<<"Ingrese la base\n";
	cin>>base;
	cout<<"Ingrese la altura\n";
	cin>>altura;
	area = area_triangulo(base,altura);
	cout<<"El area es de: "<<area<<"cm cuadrado";
	return 0;
}
