#include <iostream>
#include <stdlib.h>
#include <cassert>

using namespace std;

struct Color{
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;
};
const Color colorRojo = {255,0,0};
const Color colorVerde = {0,255,0};
const Color colorAzul = {0,0,255};	
const Color colorAmarillo = {255,255,0};
const Color colorMagenta = {255,0,255};
const Color colorCian = {0,255,255};
const Color colorBlanco = {255,255,255};
const Color colorNegro = {0,0,0};
;

Color promColor;			//VARIABLE GLOBAL

//PROTOTIPO DE FUNCIONES

Color mezclar2colores( Color, Color);



int main(){
	
	cout<<"Mezclo los colores rojo y verde\n";
	Color prom = mezclar2colores(colorRojo,colorVerde);
	assert(prom.rojo == 127);
	assert(prom.verde == 127);
	assert(prom.azul != 127);
	
	system("pause");
	
	return 0;
}

//DEFINICION DE FUNCIONES

Color mezclar2colores(Color colorRojo, Color colorVerde){
	Color promColor = {0,0,0};
	promColor.rojo = (colorRojo.rojo + colorVerde.rojo)/2 ;
	promColor.verde = (colorRojo.verde + colorVerde.verde)/2 ;
	promColor.azul =(colorRojo.azul + colorVerde.azul)/2 ;

	return promColor;
}




