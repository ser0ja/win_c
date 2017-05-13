#define _WIN64 1
//#include "main.h"
//#include "winapi/windows.h"
#include <stdio.h>
 
 int main(int argc, char *argv[]) {
	
	char charvar = 'a';
	//char *charptr = (void *) 0x000000000060FD9F;
	printf_s("address of charvar = %p (%hu)\n", (void *) &charvar, sizeof(charvar));
	//printf_s("address of charvar = %p (%hu) -> %c\n", (void *) &charvar, sizeof(charvar), *charptr);

	int intvar = 0;
	//int *intptr = (void *) 0x000000000060FD8C;
	printf_s("address of intvar = %p (%hu)\n", (void *) &intvar, sizeof(intvar));
	//printf_s("address of intvar = %p (%hu) -> %hhd\n", (void *) &intvar, sizeof(intvar), *intptr);
	
	return 0;
}