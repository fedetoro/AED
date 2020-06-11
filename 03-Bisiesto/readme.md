# Etapa 01: Analisis del Problema:
     .Dado un año, determinar si es bisiesto.
     
     Lexico:
     a ∈ N, IsBisiesto ∈ B
     
     Definicion Matematica:
     x = a > 1582
     y = a es divisible por 4
     z = a es divisible por 100
     w = a es divisible por 400
     IsBisiesto = N → B / x ⋀ ((y ⋀ -z)⋁ w)
     
  .Arbol de expansion:
     https://user-images.githubusercontent.com/63463118/84447008-4b905280-ac1d-11ea-941e-44bac12ebc54.png
    
# Etapa 02: Analisis de la Solucion:
     .Creo el prototipo de tipo de dato booleano IsBisiesto.
     .Creo el main y utilizo "assert" para las pruebas usando "not" en los años que no son bisiestos.
     .Por último declaro la funcion IsBisiesto utilizando "a" con tipo de dato unsigned o numeros naturales.
      
     
