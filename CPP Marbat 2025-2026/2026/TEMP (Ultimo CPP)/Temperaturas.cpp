//Temperaturas - Cantidad mayor y menor - Mario Roberto
#include <iostream>
using namespace std;
int main (){
	int temps [] = {24, 26, 27, 25, 28, 29, 26};
	int suma = 0;
	double promedio = 0;
	int max = 0;
	int min;
	
	for (int i=0; i<8; i++){ //Un arreglo para sacar el promedio
		suma = suma + temps[i];
		promedio = suma / 7;		
	}
	
	for (int i=0; i<8; i++){ //Arreglo para sacar el valor Maximo
		if (i == 0){
			max = temps[i];
		} else if (temps[i] >= max){
			max = temps[i];
		}
	}
	
	for (int i=0; i<8; i++){ //Arreglo para sacar el valor minimo (POR QUE NO FUNCIONA)
		if (i == 0){
			min = temps[i];
		} else if (temps[i] <= min){
			min = temps[i];
		}
	}
	
	cout<<"La suma de los datos es: "<<suma<<endl;
	cout<<"El promedio entre los valores es: "<<promedio<<endl;
	cout<<"El dato maximo es: "<<max<<endl;
	cout<<"El dato minimo es: "<<min<<endl;
	
	return 0;
}
