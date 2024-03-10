#include <iostream>
using namespace std;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;



int main(){
	
	int opcion,c;
	
	cout<<"Elegir la operacion a realizar \n1. A+B \n2. A-B \n3. C*A \n Opcion: ";
	cin>>opcion;
	system("cls");
	
	//Declarar dimension de arreglos
	int a[4][6];
	int b[4][6];
	int res[4][6];
	
	//Numero random en funcion con el tiempo
	srand(time(NULL));
	
	cout<<"Arreglo A"<<endl;
	for (int i=0; i<4; i++  ){ //filas
		
		for(int j=0; j<6; j++){ //columnas
			a[i][j] = (rand()%159+1)-60;
			cout<<a[i][j]<<" ";
					
		}
		cout<<endl;
	}
   
   if(opcion!=3){
   
	cout<<endl<<"Arreglo B"<<endl;
	
	for (int i=0; i<4; i++  ){ //filas

		for(int j=0; j<6; j++){ //columnas
			
			b[i][j] = (rand()%159+1)-60;
			cout<<b[i][j]<<" ";
					
		}
		cout<<endl;
	}

}		
		cout<<endl<<endl;
		
	switch (opcion){
	
		case 1: // Operacion A + B
		cout<<"El resultado de la suma de A + B es: "<<endl;
		for (int i=0; i<4; i++  ){ //filas

			for(int j=0; j<6; j++){ //columnas
			
				res[i][j] = (a[i][j]) + (b[i][j]) ;
				cout<<res[i][j]<<" ";
					
			}
			cout<<endl;
		}
			break;
	
	
		case 2: // Operacion A - B
		cout<<"El resultado de la resta de A - B es: "<<endl;
		for (int i=0; i<4; i++  ){ //filas

			for(int j=0; j<6; j++){ //columnas
			
				res[i][j] = (a[i][j]) - (b[i][j]) ;
				cout<<res[i][j]<<" ";
					
			}
			cout<<endl;
		}
			break;
	
	
	
		case 3: // Operacion A * C
		cout<<"Ingrese un escalar C: ";
		cin>>c;
		
		cout<<endl<<"El resultado de la multiplicacion del escalar C por la matriz A es: "<<endl;
		
		for (int i=0; i<4; i++  ){ //filas

			for(int j=0; j<6; j++){ //columnas
			
				res[i][j] = (c* (a[i][j])  );
				cout<<res[i][j]<<" ";
				
					
			}
			cout<<endl;
		}
			break;
		
		default:
			cout<<"Opcion no valida";
		break;
	
	}

return 0;
}
