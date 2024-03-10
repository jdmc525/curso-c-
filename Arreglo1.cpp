#include <iostream>
using namespace std;

#include<string>
using namespace std;



//Solicitar 4 notas y mostrar promedio

int main(){
	
	
	
	int nclases; 
	string alumno;
	float suma = 0, promedio;
	
	
	
	cout<<"Ingrese el nombre del alumno: ";
	cin>>alumno;
	
	cout<<"Ingrese la cantidad de clases totales a las que se les calculara el promedio: ";
	cin>>nclases;
	
	int notas[nclases];
	string clases[nclases];
	
	system("cls");
	
	//BUCLE PARA SACAR SUMA DE NOTAS
	for(int i = 0; i <nclases ; i++ ){
		cout<<"Ingrese el nombre de la clase "<<i+1<<endl;
		cin>>clases[i];
		
		cout<<"Ingrese la nota de la clase "<<clases[i]<<endl;
		cin>>notas[i];
		
		
		suma = notas[i] + suma;
		
		system("cls");
		
	}	
	
	
	cout<<endl;
	
	promedio = suma / nclases;
	
	//IMPRIMIR LAS CLASES QUE HAY JUNTO CON EL PROMEDIO 
	for(int i = 0; i <nclases ; i++){
	
	cout<<clases[i]<<": "<<notas[i]<<endl;
	}
	
	cout<<"\nEl promedio de todas las clases es igual a: "<<promedio<<"%\n";
	
	
	
	if (promedio < 65){
		cout<<alumno<<" esta Reprobado";
	}else {
		cout<<alumno<<" esta Aprobado";
	}
	
	
	
	return 0;
}
