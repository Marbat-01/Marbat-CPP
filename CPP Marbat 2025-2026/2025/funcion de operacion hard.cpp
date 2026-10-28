	#include <iostream>
	#include <math.h>
	using namespace std;
	double funcion (double i, double y){
		return ((2 + (3 * i))*(4 - (5 * i)) / pow(( 1 + i), 2) - (y * i));
	} //Esta es la funcion y operacion completa... I es 2, Y es 2, y da -9.33!
	int main (){
		double y, i, result;
		cout<<"Ingrese la variable i:"<<endl;
		cin>>i;
		cout<<"Ingrese la variable y:"<<endl;
		cin>>y;
		result = funcion(y,i);
		cout<<"El resultado es:"<<result<<endl;
	}
