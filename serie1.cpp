#include <iostream>
using namespace std;

#include <cmath>
using std::pow;

int main(){
	
	int n;
	float operacion, suma = 0;
	
	cout<<"Ingrese un limite";
	cin>>n;    
	
	for( int k = 1 ; k<=n ; k++){
		operacion = pow(k , (k/n) );
		suma = operacion + suma;
		
	}

	cout<<"La serie es igual a: "<<suma*0.5;






 return 0;
}
