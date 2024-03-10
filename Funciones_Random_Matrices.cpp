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

void randomMat(int[][10], int , int, int, int); 

void imprimir(int[][10],int, int);
//OPERACIONES CON MATRICES
void suma(int [][10], int, int, int[][10], int, int, int[][10], int, int);
void resta(int [][10], int, int, int[][10], int, int, int[][10], int, int);
void multiEsc( int[][10], int, int, int[][10], int, int);
void producto(int [][10], int, int, int[][10], int, int, int[][10], int, int);


int main(){
	//Declarar variables y tiempo random
	srand(time(NULL));
	int A[10][10], B[10][10],arrR[10][10], operacion ;	
	//Generar Vectores Random
	randomMat(A,10, 10,0,48);
	randomMat(B,10, 10 ,-15,25);
	
	//EMPIEZA PROGRAMA
	cout<<"Que operacion desea realizar? \n1. Suma 2. Resta 3.Multiplicacion por escalar 4. Multiplicacion de matrices\n " ;
 	cin>>operacion;
	//MENU
	switch (operacion){
		//Sumar
		case 1:
			suma(A,10, 10 ,B,10, 10,arrR,10, 10);
			imprimir(arrR,10,10);
		break;	
		//Restar
		case 2:	
			resta(A,10, 10 ,B,10, 10,arrR,10, 10);
			imprimir(arrR,10,10);
		break;
		
		//Multiplicacion por escalar
		case 3:
			multiEsc(A,10,10,arrR,10,10);
			imprimir(arrR,10,10);
		break;
		//Multiplicacion de matrices
		case 4:	
			producto(A,10, 10 ,B,10, 10,arrR,10, 10);
			imprimir(arrR,10,10);
		break;
		
	default:
		cout<<"Opcion no valida";
		break;		
	}
return 0;
}


//SUMA
void suma(int arr1[][10], int dim1F, int dim1C, int arr2[][10], int dim2F, int dim2C, int arrR[][10], int dim3F, int dim3C){
	
		imprimir(arr1,dim1F,dim1C);
		imprimir(arr2,dim2F,dim2C);
	
		if (dim1F == dim2F && dim1C == dim2C){
		
		for (int i=0; i<dim1F; i++  ){ //filas

			for(int j=0; j<dim1C; j++){ //columnas
			
				arrR[i][j] = (arr1[i][j]) + (arr2[i][j]) ;
					
			}
		}	
			
		}else{
			cout<<"Error, las matrices no tienen la misma dimension, la suma no procede";
		}
}

//RESTA
void resta(int arr1[][10], int dim1F, int dim1C, int arr2[][10], int dim2F, int dim2C, int arrR[][10], int dim3F, int dim3C){
			
		imprimir(arr1,dim1F,dim1C);
		imprimir(arr2,dim2F,dim2C);
		if (dim1F == dim2F && dim1C == dim2C){
		for (int i=0; i<dim1F; i++  ){ //filas
			for(int j=0; j<dim1C; j++){ //columnas
				arrR[i][j] = (arr1[i][j]) - (arr2[i][j]) ;				
			}
		}	
		}else{
			cout<<"Error, las matrices no tienen la misma dimension, la resta no procede";
		}
}

//MULTIPLICACION DE ESCALAR
void multiEsc(int arr1[][10], int dim1F, int dim1C, int arrR[][10], int dim2F, int dimC2){
		int c;
		cout<<"Ingrese un escalar C: "<<endl;
		cin>>c;	
		cout<<endl;
		imprimir(arr1,dim1F,dim1C);
		for (int i=0; i<dim1F; i++  ){ //filas

			for(int j=0; j<dim1C; j++){ //columnas
			
				arrR[i][j] = (arr1[i][j]) * c ;
					
			}
		}	
}



//Multiplicacion de matrices
	
void producto(int arr1[][10], int dim1F, int dim1C, int arr2[][10], int dim2F, int dim2C, int arrR[][10], int dim3F, int dim3C){
			
		imprimir(arr1,dim1F,dim1C);
		imprimir(arr2,dim2F,dim2C);
		
		
		
		if (dim1F == dim2C){
			for (int i=0; i<dim1F; i++  ){ //filas
				
			
				
				for(int j=0; j<dim2C; j++){ //columnas
						
						arrR[i][j] = 0;
												
					for(int k=0; k<dim1C; k++){ //columnas
						
											
						arrR[i][j]  += (arr1[i][k]) * (arr2[k][j]) ;
						
						
						
										
					}
				
				}	
					
			}	
		
		}else{
			cout<<"Error, las matrices no tienen la misma dimension, la resta no procede";
		}
}
		
//FUNCION GENERAR MATRIZ RANDOM
void randomMat(int arr[][10], int dimF,int dimC, int a, int b){
	for (int i=0; i<dimF ; i++){
		for(int j=0; j<dimC; j++){
			arr[i][j] = a + rand()%(b+1);
		}		
	}
}

//FUNCION IMPRIMIR
void imprimir(int arr[][10], int dimF, int dimC){			
	for (int i=0; i<dimF ; i++){
		for(int j=0; j<dimC; j++){
			cout<<arr[i][j]<<" ";	
		}
		cout<<endl;
	}	
	cout<<endl<<endl;
}	
	
