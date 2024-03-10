#include <iostream>
using namespace std;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

#include <cmath>
using std::sqrt;
using std::pow;

void operacion(int [], int, int[], int, int[], int);

void randomVec(int[], int , int, int); 
void imprimir(int[],int);
void imprimirMag(float);

//VECTORES
void suma(int [], int, int[], int, int[], int);
void resta(int [], int, int[], int, int[], int);
void multiEsc(int [], int, int[], int,int[], int);
float magnitudV(int [], int);



int main(){
	srand(time(NULL));
	int A[10], B[10], C[2], arrR[10], operacion ;
	float respuesta;
		
	//Generar Vectores Random
	randomVec(A,10,0,48);
	randomVec(B,10,-10,25);
	randomVec(C,2,-10,30);
		

	
	
	cout<<"Que operacion desea realizar? \n1. Suma 2. Resta 3.Magnitud del vector 4. Multiplicacion por escalar\n " ;
 	cin>>operacion;
	
	
	
	switch (operacion){
		//Sumar
		case 1:
			suma(A,10,B,10,arrR,10);
			imprimir(arrR,10);
		break;
		
		//Restar
		case 2:	
			resta(A,10,B,10,arrR,10);
			imprimir(arrR,10);
		
		break;
		
		//Magnitud del vector
		case 3:	
			respuesta = magnitudV(C,2);
			imprimirMag(respuesta);
		break;
		
		
		//Multiplicacion por escalar
		case 4:
			multiEsc(A,10,B,10,arrR,10);
			imprimir(arrR,10);
		break;
		
	default:
		cout<<"Opcion no valida";
		break;		
	
	}
	
	
	
	

return 0;
}




void suma(int arr1[], int dim1, int arr2[], int dim2, int arrR[], int dim3){
		
		
		imprimir(arr1,dim1);
		imprimir(arr2,dim2);
	
		
		if(dim1 == dim2){
		
			for(int i=0; i<dim1; i++){
				arrR[i] = (arr1[i]) + (arr2[i]);
			}
			
			
			
		}else{
			cout<<"Error, los vectores no tienen la misma dimension, la suma no procede";
		}
		

}



void resta(int arr1[], int dim1, int arr2[], int dim2, int arrR[], int dim3){
		
		
		imprimir(arr1,dim1);
		imprimir(arr2,dim2);
	
		
		if(dim1 == dim2){
		
			for(int i=0; i<dim1; i++){
				arrR[i] = (arr1[i]) - (arr2[i]);
			}
			
			
			
		}else{
			cout<<"Error, los vectores no tienen la misma dimension, la suma no procede";
		}
		

}

float magnitudV(int arr1[], int dim1){
		
		float respuesta;
		
		imprimir(arr1,dim1);
		
		respuesta	= sqrt(   pow((arr1[0]),2) + pow((arr1[1]),2)  )   ;
			
		return respuesta;	
		
}

void multiEsc(int arr1[], int dim1, int arr2[], int dim2, int arrR[], int dim3){
		
		int c;
			
		cout<<"Ingrese un escalar C: "<<endl;
		cin>>c;	
		
		cout<<endl;
		
		imprimir(arr1,dim1);
				
		for(int i=0; i<dim1; i++){
				arrR[i] = (c) * (arr1[i]);
			}
			
			
}

void randomVec(int arr[], int dim, int a, int b){
	
	for (int i=0; i<dim ; i++){
		arr[i] = a + rand()%(b+1);
			
	}
	
}

void imprimir(int arr[], int dim){
	
		

	
	for (int i=0; i<dim ; i++){
		cout<<arr[i]<<" ";	
			
	}	
		
	cout<<"\n";
	}	
	
void imprimirMag(float respuesta){
	cout<<respuesta;
}	
