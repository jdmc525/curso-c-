#include<iostream>

using namespace std;

int main (){
	
	float num1, num2;
	
	cout<<"Ingrese dos numeros"<<endl;
	
	cin>>num1;
	cin>>num2;
	
	if (num1 < 0){
	 	cout<<"El resultado es: "<<(num1*num2)+100<<endl;		
	}else if (num1>=0 & num2>0 ){
		cout<<"El resultado es: "<<(  ((num1*num1)*(num2*num2)) - ((2*num1) + num2 ) ) <<endl;		
		
	
	}else if (num1>=0){
		cout<<"El resultado es: "<<(num1+num2)<<endl;		
	}
	
	
	return 0;
}
