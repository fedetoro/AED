#include <iostream>
#include <cassert>

int f(int);

int main(){
	assert( 3 == f(-3));
	assert(-3 == f(3));
	assert( 0 == f(0));
	assert( 2 == f(-2));
}

int f(int x) { return
	(x>=-3 and x<=3)?	-x:
						 x;
}
