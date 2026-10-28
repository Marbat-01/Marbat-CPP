#include <iostream>
using namespace std;
int main(){
	int contador = 0, opcion, numsuma1, numsuma2, numre1, numre2, suma, resta, multi, divi, num1, num2, base, altura, lados, area, peri;
	double pin;
	do{                                                                                                                                       
		cout<<"Ingrese el pin de acceso (1234)\n";
		cin>>pin;
		if(pin == 1234){
			do{
				cout<<"Se ha accedido al sistema...\n";
				cout<<"1. Sumar\n";
				cout<<"2. Restar\n";
				cout<<"3. Multiplicar\n";
				cout<<"4. Dividir\n";
				cout<<"5. Area de una figura 2D (triangulo)\n";
				cout<<"6. Perimetro de una figura 2D (triangulo)\n";
				cout<<"7. Salir\n";
				cout<<"Ingrese una opción...\n";
				cin>>opcion;
				switch(opcion){
					case 1:
						cout<<"Ingrese un numero a sumar...\n";
						cin>>numsuma1;
						cout<<"Ingrese el otro numero a sumar...\n";
						cin>>numsuma2;
						suma = numsuma1 + numsuma2;
						cout<<"La respuesta es: "<<suma<<endl;
					break;
					case 2:
						cout<<"Ingrese un numero a restar...\n";
						cin>>numre1;
						cout<<"Ingrese el otro numero a restar...\n";
						cin>>numre2;
						resta = numre1 - numre2;
						cout<<"La respuesta es: "<<resta<<endl;
					break;
					case 3:
						cout<<"Ingrese un numero a multiplicar...\n";
						cin>>num1;
						cout<<"Ingrese el otro numero a multiplicar...\n";
						cin>>num2;
						multi = num1 * num2;
						cout<<"La respuesta es: "<<multi<<endl;
					break;
					case 4:
						cout<<"Ingrese un numero a dividir...\n";
						cin>>num1;
						cout<<"Ingrese el otro numero a dividir...\n";
						cin>>num2;
						divi = num1 / num2;
						cout<<"La respuesta es: "<<divi<<endl;						
					break;
					case 5:
						cout<<"ingrese la medida de la base..."<<endl;
						cin>>base;
						cout<<"Ingrese la medida de la altura..."<<endl;
						cin>>altura;
						area = base * altura / 2;
						cout<<area;				
					break;
					case 6:
						cout<<"Ingrese la medida de los lados..."<<endl;
						cin>>lados;
						peri = lados * 3;
						cout<<peri;
					break;
					case 7:
						cout<<"Saliendo del sistema...";
					break;
					default:
							cout<<"Opcion incorrecta\n";
					break;
				}
			system("PAUSE()");
			system("CLS()");
			}while(opcion !=7);
		}else{
			cout<<"Acceso incorrecto\n";
			contador ++;
			if(contador==3){
				cout<<"Se ha superado el limite de intentos!";
				return 0;
			}
		}
	}while(opcion !=7);
	return 0;
	}
