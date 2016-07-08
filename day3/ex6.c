#include <stdio.h>
#include <stdlib.h>
#include "../engine2d.h"

int main()
{
	
	int bLoop = 1;
	char cmd;
	int xpos,ypos;
	xpos =1;ypos =1;

	int orc_xpos,orc_ypos;
	orc_xpos = 10;
	orc_ypos = 10;

	while(bLoop) {
		scanf("%c",&cmd);
		switch(cmd) {
			case 'r':
			xpos +=1;
			break;
			case 'l':
			xpos -=1;
			break;
			case 'u':
			ypos -=1;
			break;
			case 'd':
			ypos +=1;
			break;
			case 'q':
			bLoop = 0;
			break;
		}
		
		system("clear");
		//주인공 출력
		drawMyBox(6+xpos,4+ypos,43,1);
		drawMyBox(5+xpos,5+ypos,41,3);
		drawMyBox(4+xpos,6+ypos,44,0);
		drawMyBox(9+xpos,6+ypos,44,0);
		drawMyBox(5+xpos,9+ypos,44,0);
		drawMyBox(8+xpos,9+ypos,44,0);
		//몹 출력
		if(orc_xpos > xpos) {
			orc_xpos -= 1;
		}
		else if(orc_xpos<xpos) {
			orc_xpos += 1;
		}
		else {
		}

		//몹출력
		drawMyBox(orc_xpos,orc_ypos,42,2);


		gotoxy(0,20);
		printf("---------------------------");


		printf("%d,%d \r",xpos,ypos);

	}

	return 0;
}
