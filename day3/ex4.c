#include <stdio.h>
#include <stdlib.h>
#include "../engine2d.h"

int main()
{
	system("clear");

	int i =0;
	setColor(37,41);
	while(i<10) {
		gotoxy(5,i);
		printf(" ");
		gotoxy(i,5);
		printf(" ");
		i++;
		
		
	}
	gotoxy(0,10);
	setColor(33,0);
	printf("========================");
	return 0;
}
