#include <iostream>
#include <cassert>

int	min(int a, int b);

int main(){
	assert( 3 == min(3,4));
	assert( -1 == min(3,-1));
}

int min(int a, int b){return
	a<=b?	a:
			b;	
}
