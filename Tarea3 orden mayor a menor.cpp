#include <iostream>


using namespace std;

int main(){
	int num1, num2, num3, max, mid, min;
	
	cout<<"Ingrese 3 numeros"<<endl;
	
	cin>>num1;
	cin>>num2;
	cin>>num3;
	
	
	
	if (num1 < num2 ){
	
		if (num2 < num3) {
		
		max = num3;
		mid = num2; 
		min = num1;
		cout<< max <<"," << mid<< ","<< min;		
	}	else if (num1 < num3){
	
		if (num3 < num2){
		max = num2;
		mid = num3; 
		min = num1;
		cout<< max <<"," << mid<< ","<< min;		
		
	
		}
	
	}
		
	}else if (num2 < num3) {
	
		
		if (num3 < num1){
		max = num1;
		mid = num3; 
		min = num2;
		cout<< max <<"," << mid<< ","<< min;		
	
	}else if (num2 < num1){
	
	
		if (num1 < num3){
		max = num3;
		mid = num1; 
		min = num2;
		cout<< max <<"," << mid<< ","<< min;		
			}
	
		}
	
	} else if (num3 < num2){
	
	
		if (num2< num1){
		max = num1;
		mid = num2; 
		min = num3;
		cout<< max <<"," << mid<< ","<< min;		
		
		
	}else if (num3 < num1){ 
	
		if ( num1 < num2){
		max = num2;
		mid = num1; 
		min = num3;
		cout<< max <<"," << mid<< ","<< min;		
		
	
	}
	
	}
	
	}
	
	
	
	return 0;	
	
	
			
		
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

