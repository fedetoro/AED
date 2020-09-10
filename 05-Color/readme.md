
## TP 04-Color

---

### Análisis del problema
• Demostrar capacidad de construcción de tipos compuestos basados en tipos
existentes atómicos.
### Enunciado
 
 Diseñar un tipo Color basado en el modelo RGB1
, con tres canales de 8 bits.
Todo color está compuesto por tres componentes: intensidad de red (rojo), de
green (verde), y de blue (azul). Cada intensidad está en el rango [0, 255]. Definir
los valores para rojo, azul, verde, cyan, magenta, amarillo, negro, y blanco. Dos
colores se pueden mezclar, lo cual produce un nuevo color que tiene el promedio
de intensidad para cada componente.

### Restricciones

• Las operaciones de proyección para red, green, y blue se implementan con
acceso directo a los componentes, no es necesario definir getters especiales.
Por la misma razón, los setters no son necesarios.
• Utilizar el tipo uint8_t de cstdint, si no es posible, usar unsigned char.
• Los colores primarios, secundarios, negro y blanco deben implementarse
como ocho variables declaradas fuera de main y de toda función, con el
calificador const para que no puedan modificarse.
• Implementar la operación IsIgual que retorna true si un color es igual a otro,
si no, false.
 
### Léxico e Hipótesis de trabajo

### TIPOS DE DATOS 
  __UNSIGNED CHAR__: unsigned char es un tipo de datos de caracteres en el que la variable consume todos los 8 bits de la memoria y no hay ningún bit de signo (que está en el     caracter con signo). Por lo tanto, significa que el rango del tipo de datos char sin signo va de 0 a 255. Sintaxis: unsigned char [nombre_variable] = [valor]
