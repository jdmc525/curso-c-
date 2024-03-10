#include <iostream>
using namespace std;

#include <cmath>
using std::pow;

int main(){

	char opcion, A, U;
	
	int sys_pw_A = 1234, pw_A;
	int sys_pw_U = 0000, pw_U;
	int intentos = 0;

	cout<<"Elija la opcion de acceso: "<<endl;
	cin>>opcion;
	
	switch(opcion){
		
		case 'A':
			cout<<"Acceso de Admin \nIngrese la contraseña:"<<endl;
			cin>>pw_A;
			
			if(pw_A == sys_pw_A ){
					cout<<"Acceso concedido"<<endl;
				
			}else{
			
				while(intentos < 2){
										
				cout<<"Contraseña incorrecta intente de nuevo"<<endl;
				cin>>pw_A;
									
					if(pw_A == sys_pw_A ){
						cout<<"Acceso concedido"<<endl;
						intentos = 2;
					}else{
						intentos++;
					}
					
				}
			
			if(intentos >2 ){
			cout<<"El sistema esta bloqueado";
			
			}
			
			
		}
		
		cout<<"Ingrese la nueva contraseña " ;
		cin>>sys_pw_A;
		
		cout<<"Contraseña es ahora: "<<sys_pw_A;					
			
		break;
		
		case 'U':
			
			cout<<"Acceso de Usuario \nIngrese la contraseña:"<<endl;
			cin>>pw_U;
			
			if(pw_U == sys_pw_U ){
					cout<<"Acceso concedido"<<endl;
				
			}else{
			
				while(intentos < 2){
										
				cout<<"Contraseña incorrecta intente de nuevo"<<endl;
				cin>>pw_U;
									
					if(pw_U == sys_pw_U ){
						cout<<"Acceso concedido"<<endl;
					
					}else{
						intentos++;
					}
					
				}
			
			cout<<"El sistema esta bloqueado";
		}
		break;
		
		default:
			cout<<"Opcion no valida";
		break;
		
	}






return 0;
}
