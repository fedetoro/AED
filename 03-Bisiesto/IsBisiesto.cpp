#include <iostream> 
#include <cassert>
using namespace std;

//Declaracion de datos
bool IsBisiesto (unsigned a);

//funcion main
int main (){
    assert (not IsBisiesto(1582));
    assert (not IsBisiesto(1759));
    assert (IsBisiesto(1700));
    assert (IsBisiesto(2020));
}

//Declaracion de funciones
bool IsBisiesto(unsigned a)
{   return
    a > 1582 and (a%4 == 0) and ((a%100 != 0) or (a%400 == 0));
}
