#include <iostream>
#include <cassert>

int abs(int);

int main(){
	assert( 1 == abs(-1));
	assert( 1000 == abs(1000));
}

int abs(int x) {return 
	x<0?	-x:
			 x;
}
