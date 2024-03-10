#include <iostream>
using namespace std;

int main (){
	
	float nota1, nota2, nota3, nota4, promedio;
	
	cout<<"Ingrese las notas del primer al cuarto parcial en ese orden"<<endl;
	cin>>nota1;
	cin>>nota2;
	cin>>nota3;
	cin>>nota4;
	
	promedio = (nota1 + nota2 + nota3 + nota4) / 4;
	
	
	
	
	
	
	
	if (promedio >= 90){
		cout<<"Sobresaliente, sos grande capo, seras ingeniero";
		
	} else {
						
		if (promedio >= 80){
			
			cout<<"Bueno, sos regular capo, pero igual seras ingeniero";
		
		}else {
		
		
			if(promedio >=70){
				
				cout<<"Raspando igual se pasa, te costara pero igual seras ingeniero";
				
			} else {
				
				cout<<"Cagaste man, no seras ingeniero, eres una verguenza para tu familia";
				
			       }    	
			
			   }
			
	
		   }
		
		
		
	
	
	
	
	return 0;
	}
	
	
	
	
	
	
	
	
	
	

