#include <iostream>
using namespace std;

#include <cmath>
using std::pow;

int main(){

	
	int n;
	float operacion, suma = 0;
	long double factorial;
	
	cout<<"Ingrese un limite";
	cin>>n;    
	
	for( int k = 1 ; k<=n ; k++){
			factorial = 1;
		for(int i = 1 ; i <= k ; i++){
			factorial = factorial * i;
			
		}
		
		operacion = (k * (pow(2.718281828 ,k )) ) / factorial      ;
		suma = operacion + suma;
		
	}

	cout<<"La serie es igual a: "<<suma;








return 0;
}
