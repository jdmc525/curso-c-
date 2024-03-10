#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <cmath>
using std::sqrt;

int main(){
	char C, T, R, figura;
	float lado1, lado2, lado3, lad1_2, lad1_3, lad2_3, altura, resultado, semiperimetro;
	float radio;
	float base;
	bool estado=true;

	cout<<"Elija una opcion para encontrar el area de la figura: "<<endl;
	cout<<"Circulo: C \nRectangulo: R \nTriangulo: T"<<endl;
	cin>>figura;
	
	
do{
	
	switch (figura){
		
		case 'C':
			system("cls");
			cout<<"Ingrese el radio del circulo"<<endl;
			cin>>radio;
			
			resultado = 3.1416 * (radio *radio);
			cout<<"El area es igual a: "<<resultado;
			
			
			estado = false;
			break;
				
		
		case 'R':
			system("cls");
			cout<<"Ingrese la base del rectangulo: "<<endl;
			cin>>base;
			cout<<"Ingrese la altura del rectangulo: "<<endl;
			cin>>altura;
			
			resultado = base*altura;
			cout<<"El area es igual a: "<<resultado;

			estado = false;
			break;
		
		
			
		case 'T':
				system("cls");
				cout<<"ingrese la medida de lado 1"<<endl;
				cin>>lado1;
				cout<<"ingrese la medida de lado 2"<<endl;
				cin>>lado2;
				cout<<"ingrese la medida de lado 3"<<endl;
				cin>>lado3;
				
				
				lad1_2= lado1 + lado2;
				lad1_3= lado1 + lado3;
				lad2_3= lado2 + lado3;
				
				
				/*  Aca esto es para t rectangulo pero ta complicao
				hip = 
				
				if(       ){
					
					lado2 = "2 soy hipo";
					cout<<lado2;	
				}
				*/
					
				
				if(lad1_2 > lado3 && lad1_3 > lado2 && lad2_3 > lado1){
							
						/*T EQUILATERO*/
							
			            if	 ( lado1 == lado2 && lado2==lado3  )    {
							cout<<"Triangulo equilatero ";
							altura = (  lado1 * sqrt(3) * 0.5  );
							resultado = altura * lado1 *0.5;
							
							cout<<"El area del triangulo es: "<<resultado;
							
						
						/*T ISOSCELES*/
							
						}else if(  lado1 == lado2 || lado1 == lado3 || lado2==lado3 ){
			            	cout<<"Triangulo isosceles ";
			            	
			            	if(lado1 == lado2){
			            		altura = sqrt((lado1*lado1) - ((lado3*lado3) / 4));	
			            		resultado = altura * lado3 *0.5;
								cout<<"El area del triangulo es: "<<resultado;
							
							}else if(lado1 == lado3){
			            		altura = sqrt((lado1*lado1) - ((lado2*lado2) / 4));	
			            		resultado = altura * lado2 *0.5;
								cout<<"El area del triangulo es: "<<resultado;
							
							}else if(lado2==lado3){
			            		altura = sqrt((lado2*lado2) - ((lado1*lado1) / 4));	
			            		resultado = altura * lado1 *0.5;
								cout<<"El area del triangulo es: "<<resultado;
							}
			            					
						/*T ESCALENO*/
						}else{
			        		cout<<"Triangulo escaleno"<<endl;
			      			semiperimetro = ((lado1 + lado2 + lado3) / 2);
							resultado = sqrt(semiperimetro * (semiperimetro - lado1) * (semiperimetro - lado2) * (semiperimetro - lado3));
							cout<<"El area del triangulo es: "<<resultado;
							        		
						}
			            
				
						}else {
							cout<<"No es triangulo";  /*Probar con 5,8,3*/
						}
						
			
							estado = false;
				break;


			default:
			system("cls");	
			cout<<"Esa no es una opcion valida, porfavor seleccione una de las opciones debajo "<<endl;
			cout<<"Circulo: C \nRectangulo: R \nTriangulo: T \nTerminar programa: S "<<endl;
			cin>>figura;
					
			break;
			}
		
			if (figura == 'S'){
				estado = false;
		}
		
		}while(estado);
	
return 0;
}
