#include <stdio.h>

int main()
{
	printf("hi \r\n");
	printf("\x1b[31m");
	printf("hi \r\n");
	printf("\x1b[1;31m");
	printf("hi \r\n");
	printf("\x1b[1;35m");
	printf("hi \r\n");
	printf("\x1b[0m");
	printf("hi \r\n");
	printf("\x1b[32m");
		
	return 0;

}

