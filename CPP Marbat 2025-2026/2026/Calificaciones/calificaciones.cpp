//Mario Roberto - 2026 - "Marbat"
#include <iostream>
using namespace std;
int main (){
	int notas [] = {65,72,89,90,55,88,76}; //minimo para pasar: 61.
	float total = 0;
	float promedio = 0;
	int max = 0;
	int min = 0;
	int pasaron = 0;
	int reprobaron = 0;
	int minimo = 61;
	
	for (int i=0; i<6; i++){ //Ciclo for para saber el total y el promedio.
		total = total + notas[i];
		promedio = total / 7;	
	}
	
	for (int i=0; i<6; i++){ //Ciclo for para saber el valor maximo (Proceso que aparentemente ya conozco)
		if (i == 0){
			max = notas[i];
		} else if (notas[i] > max){
			max = notas[i];
		}
	}
	
	for (int i=0; i<6; i++){ //Ciclo for para saber el valor minimo
		if (i == 0){
			min = notas[i];
		} else if (notas[i] < min){
			min = notas[i];
		}
	}
	
cout<<"El total es: "<<total<<endl;	
cout<<"El promedio es: "<<promedio<<endl;
cout<<"La nota maxima es: "<<max<<endl;
cout<<"La nota minima es: "<<min<<endl;
cout<<"- - - - - - - - - - - - - - -"<<endl;

	for (int i=0; i<6; i++){ //Ciclo for para saber quienes pasaron (> 60)
		if (i == 0){
			pasaron = notas[i];
		} else if (notas[i] > minimo){
			pasaron = notas[i];
			cout<<"Notas que PASARON: "<<pasaron<<endl;
		}
	}
	
	for (int i=0; i<6; i++){ //Ciclo for para saber quienes reprobaron (< 60)
		if (i == 0){
			reprobaron = notas[i];
		} else if (notas[i] < minimo){
			reprobaron = notas[i];
			cout<<"Notas que REPROBARON: "<<reprobaron<<endl;
		}
	}
	return 0;
}	

