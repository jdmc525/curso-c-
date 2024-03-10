#include <iostream>

using namespace std;

int main (){
		
	int numero, contador = 2, res;
	
	
	cout<<"Ingresar numero"<<endl;
	cin>>numero;
	
	if(numero == 2){
		cout<<"Es primo";
	}else{
	
	
	
		while ( contador <= numero  ){
		
			res = numero%contador;
			
		
		
			if(res == 0 && contador != numero ){
				
				cout<<"No es primo";
				contador = numero;
				
			}else if (res == 0 && contador == numero) {
				cout<<"Es primo";
				
			}
			
			contador++;
		
		}	
	}
	
	
	return 0;
}
