//Codigo hecho a base de explicaciones de Progra ATS - C++ - Ep 31.
#include <iostream>
using namespace std;
int main (){
	int valores [] = {120,135,110,150,140};
	int suma = 0;
	int promedio = 0;
	int max = 0;
	int pibot = 0;
	 
	
	for (int i=0; i<5; i++){
		suma = suma + valores[i];
		promedio = suma / 5;
	}
	            // for busca minimo
	            for (int i=0; i<5; i++){
              	          if(i == 0){
				             pibot = valores[i];				   
		                   }
		                        if (pibot >= valores[i])		
		                        {			
		                           pibot = valores[i];
	                          	}
		
		
	            }
	            // fin for busca minimo
	            
	// for busca maximo
	for (int i=0; i<5; i++){
              	          if(i == 0){
				             max = valores[i];				   
		                   }cout<<valores<<"max"<<endl;;
		                        if (max <= valores[i])		
		                        {			
		                           max = valores[i];
	                          	}
		
		
	            }  
    // fin for busca maximo				          
	            
	cout<<"El TOTAL es de: "<<suma<<endl;
	cout<<"El PROMEDIO es de: "<<promedio<<endl;
	cout<<"El valor MINIMO es: "<<pibot<<endl;
	cout<<"El valor MAXIMO es:"<<max<<endl;
return 0;	
}
