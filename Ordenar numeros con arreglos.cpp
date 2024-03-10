#include <iostream>
using namespace std;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;



int main(){
	
	int dim = 10, suma=0, guardar;
	int numeros [dim];
	
	
	srand(time(NULL));
	
	
	for(int i=0; i<dim ; i++){
		numeros[i] = (rand()%(30+1)) -10;
			
	}
	
	
	
	for(int j=0; j<=dim ; j++){
		
		for(int i=0; i<=8 ; i++){
			if(numeros[i] > numeros[i+1]){
				
				guardar = numeros[i];
				numeros[i] = numeros[i+1];
				numeros[i+1] = guardar;
				
			}
			
		}
		
				
	}
	
	for(int i=0; i<dim ; i++){
	cout<<numeros[i]<<endl;
	}
	
	
	
	return 0;
}
