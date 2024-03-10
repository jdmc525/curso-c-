#include <iostream>
#include<math.h>
#include<complex> /*libreria para num complejos*/

using namespace std;

int main(){
	
	int a,b,c;
	float operacion, op_raiz;
	
	cout<<"Ingrese los 3 coeficientes de una ecuacion de la forma ax^2 + bx +c"<<endl<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	
	
	operacion = ((b*b)-(4*a*c));
	op_raiz = (operacion*-1);
	
	if (operacion < 0 ){
		
		cout<<"El resultado con numeros imaginarios es igual a: \n";
		cout<<"X1 = "<<((-b)/(a*2))<<" - "<<sqrt(op_raiz)/(2*a)<<"i"<<endl;
		cout<<"X2 = "<<((-b)/(2*a))<<" + "<<sqrt(op_raiz)/(2*a)<<"i";
		
		
	}else {
		cout<<"El resultado con numeros reales es igual a: \n";
		cout<<"X1 = "<< (((-b)+ sqrt((operacion)))/ (2*a))<<endl;
		cout<<"X2 = "<< (((-b)- sqrt((b*b)-(4*a*c)))/ (2*a));
			
	}
	
		return 0;	
	
	
			
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

