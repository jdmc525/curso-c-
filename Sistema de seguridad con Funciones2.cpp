#include <iostream>
using namespace std;

//Prototipo de funciones
int validarPw(int, int);
int adminBloq(int,int);
int cambioPw(int, int, int, int[]);

int main(){
    int activar = 0, contador =1;      
    int pw = 12345, pwAdmin = 54321;
	int returnUser,  returnAdmin, pwUser,  returnNewPw, newPw;
    int memoria[5];

 
	while(activar==0){
	    system("cls");	      
	    cout<<"Ingrese la contraseña de usuario: ";
	    cin>>pwUser;	      
	      
	    returnUser = validarPw(pw,pwUser);
	      
	    if (returnUser == 1){
	      		//SISTEMA BLOQUEADO - INGRESAR PW DE ADMIN
	      	returnAdmin = adminBloq(pwAdmin,returnUser);
	    		
	    			
			if (pwAdmin == returnAdmin){
				//ESTABLECER NUEVA CONTRASEÑA
				cambioPw(pw, newPw, contador, memoria);   
				pw = memoria[contador%5];
			}
				
				//ESTABLECER NUEVA CONTRASEÑA  
		}else if (returnUser == pw){
		  	cambioPw(pw, newPw, contador, memoria);   
			pw = memoria[contador%5]; 
		}
		
		cout<<"La nueva contraseña es: "<<memoria[contador%5]<<endl<<endl;
		
		//REPETIR PROGRAMA
		cout<<"Presione 0 para ejecutar el programa de nuevo, presione cualquier otro numero para terminar programa: ";
		cin>>activar;	
		
		contador++;	
	}

return 0;
}


//FUNCION VALIDAR CONTRASEÑA

int validarPw(int pw, int pwUser){
  int returnUser;
 
  for(int i =0; i<3 ; i++){
   
	   if(pw != pwUser && i ==2){
	   cout<<"El numero de intentos maximo ha sido alcanzado, la cuenta esta bloqueada"<<endl;
	   
	   return 1;
	 
	   
	   }else if(pw != pwUser){
	   cout<<"La contraseña es incorrecta, intente de nuevo\n Este es el intento numero "<<i+2<<endl;
	   cin>>pwUser;
	   
	   }else{
	    cout<<"Contraseña correcta"<<endl;
	    i=2;
	   
	    return pwUser;
	   }
	}
}


//FUNCION BLOQUEO DE ADMINISTRADOR

int adminBloq(int pwAdmin, int confirmacion){
 int pwInput;
 bool activarW = true;
	 if (confirmacion == 1){
 
		  cout<<"Ingrese la clave de administrador para desbloquear el equipo: ";
		  cin>>pwInput;
 
	 	while(activarW){
	 
		   if(pwAdmin != pwInput){
			   cout<<"La contraseña de administrador es incorrecta, intente de nuevo ";
			   cin>>pwInput;
		   
		   }else{
		    cout<<"Contraseña correcta"<<endl;
		    activarW = false;
		    system("cls");
		    return pwInput;
		     
		   }
	  	}
	 
 	}
}



int cambioPw(int currentPw, int newPw , int nEjecucion , int memoria[] ){
	bool repetido;
	memoria[nEjecucion-1] = currentPw;
	
		 cout<<"Ingrese una contraseña nueva: ";
		 cin>>newPw;
 
	
	
	do{
	
		repetido = false;	
		
		for(int i=1; i<=nEjecucion; i++ ){
				
			if(newPw == memoria[i-1]){
			
				cout<<"Intente de nuevo, la contraseña que ingreso ya ha sido utilizada"<<endl;
				cin>>newPw;		
				repetido = true;
				i = nEjecucion;			
			}
		}
	
	}while(repetido);
		
			
		memoria[nEjecucion%5] = newPw;
}
			
	
	
	



	
