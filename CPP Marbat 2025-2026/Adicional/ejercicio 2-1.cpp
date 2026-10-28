//1. Escribe la siguiente expresion matematica como expresion en C++
#include <iostream>
using namespace std;
int main(){
	float a, b, result = 0;
	
	cout<<"digite el valor de a: ";
	cin>>a;
	cout<<"digite el valor de b: "; cin>>b;
	
	result = (a/b) + 1;
	
	cout.precision(2);
	cout<<"\nEl resultado es: "<<result<<endl;
	
	
	return 0;
}
