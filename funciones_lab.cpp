//f(x) = x^2 + 2

#include <iostream>
using std::cout;
using std::cin;
using std::endl;


#include <cmath>
using std::sin;
using std::cos;

double func1 (double); // Prototipo de funcion - para indicarle al compilador que existe una funcion para que la busque al final. 

double g(double);


int main(){
	
	 double x, y;
	 
	 
	 
	 cout<<"Ingrese el parametro x: ";
	 cin>>x;  					// Esta variable en si no esta ligada a la variable X de la funcion, son dos mundos distintos. 
	 									//Por eso el 2 no cambia por fuera de la funcion, cada vez que se ejecuta la funcion vuelve a 2 como valor original
	/* 
	 cout<<func1(x+2)<<endl;	
	 cout<<func1(x-2)<<endl;
	 cout<<func1(x+1)<<endl; //Aca a X se le suma 1 y luego se hace la operacion
	 cout<<func1(x)*6<<endl; // Aca se hace la operacion primero y se multiplica el resultado entero por 6
	 
	
	 y = func1(x)*6+2;
	 cout<<func1(y);
	*/
	
	cout<<g(x);
	
	
	return 0;

}


//Definicion de funciones

double func1 (double x) {
	
	return x*x+2;
	
}


double g(double x){
	
	return 	(4*sin(x)) + cos(x);
	
	
}