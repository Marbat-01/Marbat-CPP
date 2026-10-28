//Hecho por: Mario Roberto - ("Marbat")
#include <iostream>
using namespace std;
int main (){
	double n1 = 0, n2 = 0, n3 = 0, n4 = 0;
	double pro1 = 0, pro2 = 0;
	double nota_final = 0, promedio = 0;
	cout<<"-Bienvenido al sistema-"<<endl;
	cout<<"Ingrese cuantos puntos gano usted en el PRIMER BIMESTRE: "<<endl;
	cin>>n1;
	cout<<"Ahora, ingrese cuantos puntos gano usted en el SEGUNDO BIMESTRE: "<<endl;
	cin>>n2;
	cout<<"Ahora, ingrese cuantos puntos gano usted en el TERCER BIMESTRE: "<<endl;
	cin>>n3;
	cout<<"Ahora, ingrese cuantos puntos gano usted en el CUARTO BIMESTRE: "<<endl;
	cin>>n4;
	cout<<"-SE HAN INGRESADO LAS NOTAS-"<<endl;
	cout<<"Ahora, ingrese el valor (%) de los primeros 3 Bimestres: "<<endl;
	cin>>pro1;
	cout<<"El porcentaje es: "<<pro1<<"% (0."<<pro1<<")."<<endl;
	cout<<"Ahora, ingrese el valor (%) del ultimo bimestre: "<<endl;
	cin>>pro2;
	cout<<"El porcentaje es: "<<pro2<<"% (0."<<pro2<<")."<<endl;
	promedio = (n1 + n2 + n3 + n4) / 4;
	nota_final = (n1 * pro1) + (n2 * pro2) + (n3 * pro1) + (n4 * pro2);
	cout<<"-El PROMEDIO de avance es: "<<promedio<<endl;
	cout<<"-La NOTA final es: "<<nota_final<<endl;
	return 0;
}
