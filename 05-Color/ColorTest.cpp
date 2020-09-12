#include <cassert>
#include "color.h"

int main(){
	
	cout<<"Mezclo los colores rojo y verde\n";
	Color prom = mezclar2colores(colorRojo,colorVerde);
	assert(prom.rojo == 127);
	assert(prom.verde == 127);
	assert(prom.azul == 0);
	
	assert(IsIgual(colorRojo,colorRojo) == true);
	assert(IsIgual(colorRojo,colorVerde) == false);
	
	system("pause");
	
	return 0;
}
