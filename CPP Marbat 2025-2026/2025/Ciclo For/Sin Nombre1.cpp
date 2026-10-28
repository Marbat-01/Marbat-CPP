#include <iostream> // Ciclo For
using namespace std;
int main(){
	int limite;
	int simbolo;
	cout<<"Ingrese el limite\n";
	cin>>limite;
	cout<<"Ingrese el caracter\n";
	cin>>simbolo;
	for(int i = 1; i<=simbolo; i++){
	for(char c = simbolo; c<=i; c++);
		cout<<"s";
}
	return 0;
}
