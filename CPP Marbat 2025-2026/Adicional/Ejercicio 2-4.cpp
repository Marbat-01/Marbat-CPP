//4. Escribe la siguiente expresión como C++: a + (b/(c-d))
#include<iostream>
using namespace std;
int main(){
	float a, b, c, d, result = 0;
	cout<<"Digite el valor de A: "; cin>>a;
	cout<<"Digite el valor de B: "; cin>>b;
	cout<<"Digite el valor de C: "; cin>>c;
	cout<<"Digite el valor de D: "; cin>>d;	
	result = a+(b/(c-d));
	cout<<"La operación es: A + (B/(C-D)) -Puede que este incorrecto-";
	cout<<"\nEl resultado es: "<<result<<endl;
	return 0;
}
