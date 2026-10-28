//Hacer un codigo que permita identificar si una palabra inicia con letra mayuscula o minuscula
#include <iostream>
using namespace std;
int main (){
	cout<<"Ingrese una palabra..."<<endl;
	string palabra;
	cin>>palabra;
	if (palabra[0] >= 'A' && palabra[0] <= 'Z') {
		cout<<"La inicial es una mayuscula"<<endl;
		} else {cout<<"La inicial es minuscula"<<endl;
}
	return 0;
}
