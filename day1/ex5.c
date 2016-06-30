#include <stdio.h>
#include <stdlib.h>

void setColor(int fore_color,int backg_color)
{
	printf("%c[%d;%dm", 0x1b,fore_color,backg_color);

}

void gotoxy(int x,int y)
{
	printf("%c[%d;%df",0x1b,y,x);

}

int main()
{
	int fore_color;
	fore_color = 31;
	system("clear");
	//"\x1b[31m"
	//printf("%c[%dm", 0x1b,fore_color);
	gotoxy(8,3);
	setColor(33,44);
	printf("Blueteam");


	gotoxy(8,7);
	setColor(37,40);
	printf("●");
	gotoxy(11,14);
	setColor(37,40);
	printf("●");

	gotoxy(1,10);
	setColor(31,47);
	printf("★★★★★★★★★★★★★★★★★★★");

	gotoxy(8,18);
	setColor(32,41);
	printf("Redteam");
	setColor(0,0);

	gotoxy(20,1);
	setColor(32,42);
	printf("|");
	gotoxy(20,2);
	printf("|");
	gotoxy(20,3);
	printf("|");
	gotoxy(20,4);
	printf("|");
	gotoxy(20,5);
	printf("|");
	gotoxy(20,6);
	printf("|");
	gotoxy(20,7);
	printf("|");
	gotoxy(20,8);
	printf("|");
	gotoxy(20,9);
	printf("|");
	gotoxy(20,10);
	printf("|");
	gotoxy(20,11);
	printf("|");
	gotoxy(20,12);
	printf("|");
	gotoxy(20,13);
	printf("|");
	gotoxy(20,14);
	printf("|");
	gotoxy(20,15);
	printf("|");
	gotoxy(20,16);
	printf("|");
	gotoxy(20,17);
	printf("|");
	gotoxy(20,18);
	printf("|");
	gotoxy(20,19);
	printf("|");
	
	gotoxy(1,1);
	printf("|");
	gotoxy(1,2);
	printf("|");
	gotoxy(1,3);
	printf("|");
	gotoxy(1,4);
	printf("|");
	gotoxy(1,5);
	printf("|");
	gotoxy(1,6);
	printf("|");
	gotoxy(1,7);
	printf("|");
	gotoxy(1,8);
	printf("|");
	gotoxy(1,9);
	printf("|");
	gotoxy(1,10);
	printf("|");
	gotoxy(1,11);
	printf("|");
	gotoxy(1,12);
	printf("|");
	gotoxy(1,13);
	printf("|");
	gotoxy(1,14);
	printf("|");
	gotoxy(1,15);
	printf("|");
	gotoxy(1,16);
	printf("|");
	gotoxy(1,17);
	printf("|");
	gotoxy(1,18);
	printf("|");
	gotoxy(1,19);
	printf("|");
	
	gotoxy(1,1);
	printf("====================");
	gotoxy(1,20);
	printf("====================");
	setColor(0,0);


	return 0;
}
