#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	short y;
	float z;
	double a;
	
	printf("byte of int : %d\n", sizeof(x) ); 
	printf("byte of short : %d\n", sizeof(y) );
	printf("byte of float : %d\n", sizeof(z) );
	printf("byte of double : %d\n", sizeof(a) );
	
	return 0;
}
