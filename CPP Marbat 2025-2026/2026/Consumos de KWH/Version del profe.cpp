#include <iostream>
using namespace std;
int main (){
	double promedio, mayor, menor, total;
	int consumo [] = {120, 135, 110, 150, 140};
	total = consumo[0] + consumo[1] + consumo[2] + consumo[3] + consumo[4];
	promedio = total / 5;
	cout<<"El total es de: "<<total<<endl;
	cout<<"El promedio es: "<<promedio<<endl;
	cout<<"El valor minimo es: "<<consumo[2]<<endl;
	cout<<"El valor maximo es: "<<consumo[3]<<endl;
return 0;
}
