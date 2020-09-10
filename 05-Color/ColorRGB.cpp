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

bool IsIgual( Color, Color);

int main(){
	
	cout<<"Mezclo los colores rojo y verde\n";
	Color prom = mezclar2colores(colorRojo,colorVerde);
	assert(prom.rojo == 127);
	assert(prom.verde == 127);
	assert(prom.azul != 127);
	
	assert(IsIgual(colorRojo,colorRojo) == true);
	assert(IsIgual(colorRojo,colorVerde) == false);
	
	system("pause");
	
	return 0;
}

//DEFINICION DE FUNCIONES

Color mezclar2colores(Color color1, Color color2){
	Color promColor = {0,0,0};
	promColor.rojo = (color1.rojo + color2.rojo)/2 ;
	promColor.verde = (color1.verde + color2.verde)/2 ;
	promColor.azul =(color1.azul + color2.azul)/2 ;

	return promColor;
}

bool IsIgual(Color color1, Color color2){
	if(color1.rojo == color2.rojo){
		if(color1.verde == color2.verde){
			if(color1.azul == color2.azul){
				return true;
			}
		}
	}
	
	return false;
}
	



