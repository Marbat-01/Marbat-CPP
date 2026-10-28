//Codigo para un numero al azar VVV
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int humano = 0;
	int player = 100;
	int enemy = 100;

	
	cout<<"Has entrado al juego!"<<endl;
	do{
	cout<<" -Tus puntos de vida: "<<player<<endl;
	cout<<" -Puntos del enemigo: "<<enemy<<endl;
	cout<<"Ingresa una opcion para pelear!"<<endl;
	cout<<"Ingresa '1' para Atacar con espada."<<endl;
	cin>>humano;
	
	switch(humano){
		case 1:
			srand(time(NULL));
			int rango = 1 + rand() % 30;
    		cout << "Has quitado "<<rango<<" Puntos al enemigo!"<< endl;
    		int rangomalo = 1 + rand() % 30;
    		cout<<"Ahora, el enemigo te ha quitado "<<rangomalo<<" puntos de vida!"<<endl;
    		player = player - rangomalo;
    		enemy = enemy - rango;
		break;
	}
} while(humano != 3);
    return 0;

}
