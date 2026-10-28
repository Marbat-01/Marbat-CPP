//Codigo de litros usados en una semana:
#include <iostream>
using namespace std;
int main (){
	int litros[] = {45,50,47,60,55,48,52};
	int promedio = 0;
	int suma = 0;
	int limite = 50;
	int mayores = 0;
	
	for (int i=0; i<7; i++){
		suma = suma + litros[i];
		promedio = suma / 7;
	}
	
	cout<<"El promedio semanal es: "<<promedio<<endl;
	
	for (int i=0; i<7; i++){
			if (litros[i] > 50){
			mayores = litros[i];
			cout<<"Los valor que se paso: "<<mayores<<endl;
		}
	}
	
	return 0;
}
