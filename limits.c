#include <stdio.h>

int main(){
	printf("Number of bytes in standard C data types:\n");
	printf("char:		%lu\n", sizeof(char));
	printf("short:		%lu\n", sizeof(short));
	printf("int:		%lu\n", sizeof(int));
	printf("long:		%lu\n", sizeof(long));
	printf("float:		%lu\n", sizeof(float));
	printf("double:		%lu\n", sizeof(double));
	printf("long double:	%lu\n", sizeof(long double));
}
