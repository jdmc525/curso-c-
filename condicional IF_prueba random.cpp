#include <iostream>
using namespace std;

main(){
	int edad;
	cout<<"Que edad tienes?"<<endl;
	cin>>edad;
	
	if (edad >= 18 ){
		cout<<"Bienvenido crack!"<<endl;
	}else {
		cout<<"Debes ser mayor de 18 años para contratar este servicio"<<endl;
	}
	
	
	return 0;
	
}

