#include <stdio.h>
#include <stdlib.h>
int main()
{
	system("clear");

	printf("\x1b[3;3f");
	printf("hi");
	printf("\x1b[6;3f");
	printf("fuck");

	printf("\x1b[20;0f");
	printf("====================");
	printf("\x1b[3;18f");
	printf("｜");

	return 0;
}



