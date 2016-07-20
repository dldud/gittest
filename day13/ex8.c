#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <string.h>
#include <unistd.h>
#include <sys/select.h>
#include <termios.h>
#include <math.h>

#include "../engine/engine2d.h"
#include "../mapeditor/map.h"
#include "bullet.h"
#include "plane.h"

struct timespec work_timer;
double acc_tick,last_tick;
int bLoop = 1;

_S_MAP_OBJECT gScreenBuf[2];
_S_MAP_OBJECT gPlayer;
_S_MAP_OBJECT gtank;
_S_MAP_OBJECT gBulletModel;

_S_Plane gPlayerObject;
_S_Plane gtankObject;
S_BULLET_OBJECT gBulletObject;

int main()
{

	for(int i=0;i<2;i++)
	{
		map_init(&gScreenBuf[i]);
		map_new(&gScreenBuf[i],40,23);
	}
	
	map_init(&gBulletModel);
	map_load(&gBulletModel,"bullet.dat");

	map_init(&gPlayer);
	map_load(&gPlayer,"airplane.dat");

	Plane_init(&gPlayerObject,&gPlayer,17,10);
	bullet_init(&gBulletObject,0,0,0,&gBulletModel);

	map_init(&gtank);
	map_load(&gtank,"tank1.dat");

	Plane_init(&gtankObject,&gtank,3,3);
	
	set_conio_terminal_mode();
	acc_tick=last_tick=0;
	
	int targetx,targety;

	int fire_x, fire_y;


	system("clear");

	while(bLoop) {
		//타이밍처리 
		clock_gettime(CLOCK_MONOTONIC,&work_timer);
		double cur_tick = work_timer.tv_sec + 
			(double)(work_timer.tv_nsec * 1e-9);
		double delta_tick = cur_tick - last_tick;
		last_tick = cur_tick;
		//실시간 입력

		fire_x = gtankObject.m_nXpos;
		fire_y = gtankObject.m_nYpos;

		targetx = gPlayerObject.m_nXpos;
		targety = gPlayerObject.m_nYpos;


		if(kbhit() != 0) {
			char ch = getch();
			if(ch == 'q') {
				bLoop = 0;
				puts("bye~ \r");
			}
			else if(ch == 'j') 	{
				double vx,vy,c;
				vx = targetx - fire_x;
				vy = targety - fire_y;
				c = sqrt(vx*vx+vy*vy);
				vx /= c;
				vy /= c;

				bullet_fire(&gBulletObject,
				fire_x,fire_y,
				10.0,vx,vy,
				10.0);	

			}


			//Plane_Apply(&gPlayerObject,delta_tick,ch);
			gPlayerObject.fpApply(&gPlayerObject,delta_tick,ch);
		}

		bullet_apply(&gBulletObject,delta_tick);
		//타이밍 계산 
		acc_tick += delta_tick;
		if(acc_tick > 0.1) {
			//puts("tick...\r");
			map_drawTile(&gScreenBuf[0],0,0,&gScreenBuf[1]);
			bullet_draw(&gBulletObject, &gScreenBuf[1]);

			gotoxy(0,0);
			//map_drawTile(&gScreenBuf[0],0,0,&gScreenBuf[1]);
			gPlayerObject.fpDraw(&gPlayerObject,&gScreenBuf[1]);
			gtankObject.fpDraw(&gtankObject,&gScreenBuf[1]);
				
			//Plane_Draw(&gPlayerObject,&gScreenBuf[1]);

			map_dump(&gScreenBuf[1],Default_Tilepalete);
			acc_tick = 0;
		}

	}

	return 0;

}
