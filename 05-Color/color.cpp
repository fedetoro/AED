#include "color.h"

//DEFINICION DE FUNCIONES 
/*mezclar2colores retorna un valor de tipo struct Color
que es el promedio de los valores de rojo, azul y verde, entre 2 colores enviados por el usuario*/
//IsIgual retorna true cuando ambos colores enviados son iguales y false en caso contrario.

Color mezclar2colores(Color color1, Color color2){
	Color promColor = {0,0,0};
	promColor.rojo = (color1.rojo + color2.rojo)/2 ;
	promColor.verde = (color1.verde + color2.verde)/2 ;
	promColor.azul =(color1.azul + color2.azul)/2 ;

	return promColor;
}

bool IsIgual(Color color1, Color color2){ return 
	((color1.rojo == color2.rojo)and(color1.verde == color2.verde)
								 and(color1.azul == color2.azul))?	true	:	false;}
	
			


