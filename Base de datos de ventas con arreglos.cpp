#include <iostream>
using namespace std;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;



int main(){
	
	int dim = 100000, suma=0;
	int productos [dim];
	float promedio;
	
	srand(time(NULL));
	
	for(int i=0; i<dim ; i++){
		productos[i] = (rand()%(299820+1)) +180;
		
		suma = productos[i] + suma;
		cout<<productos[i];
	}
	
	promedio = (suma / dim);
	cout<<"El promedio de ventas es igual a: "<<promedio;
	
	
	
	
	return 0;
}
