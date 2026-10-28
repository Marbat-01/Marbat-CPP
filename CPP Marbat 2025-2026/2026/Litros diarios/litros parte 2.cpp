//Codigo de litros usados en dias (Con mas valores) - Mario Roberto "Marbat":
#include <iostream>
using namespace std;
int main (){
	int litros[] = {45,50,47,60,55,48,52,69,56,42,45,35,49,64,55,51,52};
	int promedio = 0;
	int suma = 0;
	int mayores = 0; //El limite de litros para la persona es 50 l.
	
	for (int i=0; i<15; i++){ //CICLO FOR para saber el Promedio
		suma = suma + litros[i];
		promedio = suma / 7;
	}
	
	cout<<"El promedio semanal es: "<<promedio<<endl;
	cout<<"- - - - - - -"<<endl;
	cout<<"Los valores que se pasaron de 50L: "<<endl;
	
	for (int i=0; i<15; i++){ //CICLO FOR para saber numeros mayores de 50:
			if (litros[i] > 50){
			mayores = litros[i];
			cout<<"Valor que se paso: "<<mayores<<endl;
		}
	}	
	
	cout<<"- - - - - - - -"<<endl;
	cout<<"Los valores que son abajo de 50L: "<<endl;
	
	for (int i=0; i<15; i++){ //CICLO FOR para saber numeros menores de 50:
			if (litros[i] < 50){
			mayores = litros[i];
			cout<<"Valor que NO se paso: "<<mayores<<endl;
		}
	}
	return 0;
}
