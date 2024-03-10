#include <iostream>
using namespace std;


int main() {
    const int TAMANO_TABLA = 6;
	bool hola;
	int numeroDiagonal;

    std::cout << "Números de la diagonal de izquierda a derecha:" << std::endl;

    for (int i =0; i < TAMANO_TABLA; i++) {  //filas
        	
        	
        
		for (int j = 0; i+j < TAMANO_TABLA; j++) {  //columnas
             // Calculamos el número de la diagonal en función de la posición
                //numeroDiagonal = (i+j) * TAMANO_TABLA + j;
                //	std::cout << numeroDiagonal << " ";
               
				numeroDiagonal = i * TAMANO_TABLA + (i + j) + 1;
          		std::cout << numeroDiagonal << " ";
               
                
        
    }

}
	    cout<<endl;
   return 0;
   
    }

    

