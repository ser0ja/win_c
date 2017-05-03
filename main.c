#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
	
	char charvar = 'a';
	char *charptr = (void *) 0x000000000060FD9F;
	printf_s("address of charvar = %p (%hu) -> %c\n", (void *) &charvar, sizeof(charvar), *charptr);

	int intvar = 0;
	int *intptr = (void *) 0x000000000060FD8C;
	printf_s("address of intvar = %p (%hu) -> %hhd\n", (void *) &intvar, sizeof(intvar), *intptr);
	
	return 0;
}