#include <iostream>
#include <stdlib.h>
#include <fstream>

void escribir();

int main(){
	escribir();
	std::cout << "Hola, Mundo! \n";
	system ("pause");
	return 0;
}

void escribir(){
	std::ofstream archivo;
	
	archivo.open("output.txt",std::ios::out); //Abre el archivo output.txt"
	archivo<< "Hola, Mundo!";
	archivo.close(); //Cierra el archivo output.txt
		
}

