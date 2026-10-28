//Codigo hecho a base de explicaciones de Progra ATS - C++ - Ep 31.
#include <iostream>
using namespace std;
int main (){
	int valores [] = {120,135,110,150,140};
	int suma = 0;
	int promedio = 0;
	int max = 0;
	int min = 0;
	 
	for (int i=0; i<5; i++){ //Arreglo para hacer la suma y el promedio V
		suma = suma + valores[i]; //Haremos que suma sea: "Suma" (Que es 0) + Todos los valores[i] (120+135+110...)
		promedio = suma / 5; //Ahora, haremos que "Promedio" sea el valor de "Suma" dividido 5
	}
	
	for (int i=0; i<5; i++){	//Aqui, agrupamos TODOS los numeros y su ORDEN - para buscar el MINIMO
		if (i == 0){ 				//SI i es igual al 0 (nuestro primer numero - el 120)
			min = valores[i];			//Entonces Min es ese valor de i (Min ahora es 120)
		} else if (valores[i] <= min){	//Ahora, el programa va a ver si Min es mayor o igual a cada uno de los valores. (120 es mayor a 110, por tanto, Min AHORA es 110, y asi)
			min = valores [i];		//Entonces Min, irá cambiando su valor conforme encuentre a alguien menor cada vez. El valor mínimo es 110
		}	
	}
	
	for (int i=0; i<5; i++){	//Aqui, agrupamos TODOS los numeros y su ORDEN - para buscar el MAXIMO
		if (i == 0){ 				//SI i es igual al 0 (nuestro primer numero - el 120)
			max = valores[i];			//Entonces Max es ese valor de i (Min ahora es 120)
		} else if (max <= valores[i]){	//hora, el programa va a ver si Max es menor o igual a cada uno de los valores. (120 es menor a 135, por tanto, Min AHORA es 135, y asi)
			max = valores [i];		//Entonces Max, irá cambiando su valor conforme encuentre a alguien mayor cada vez. El valor mínimo es 110
		}	
	}
	
	cout<<"El TOTAL es de: "<<suma<<endl;
	cout<<"El PROMEDIO es de: "<<promedio<<endl;
	cout<<"El valor MAXIMO es:"<<max<<endl;
	cout<<"El valor MINIMO es: "<<min<<endl;
return 0;
}
//Para confirmarlo, cambie el orden de los "else if" y cambiando el ">" o "<" para confirmar algun orden.
