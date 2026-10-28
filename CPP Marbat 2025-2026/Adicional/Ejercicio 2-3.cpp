//3. Escribe la siguiente expresion como C++:

#include<iostream>

using namespace std;

int main(){
	float a, b, c, d, e, f, result = 0;
	cout<<"Digite el valor de A: "; cin>>a;
	cout<<"Digite el valor de B: "; cin>>b;
	cout<<"Digite el valor de C: "; cin>>c;
	cout<<"Digite el valor de D: "; cin>>d;	
	cout<<"Digite el valor de E: "; cin>>e;
	cout<<"Digite el valor de F: "; cin>>f;
	
	result = (a+(b/c))/(d+(e/f));
	
	cout<<"La operación es: (A + (B/C)) / (D + (E/F))";
	cout<<"\nEl resultado es: "<<result<<endl;
	
	return 0;
}
