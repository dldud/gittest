#include <stdio.h>
#include "ex2_c.c"

//void foo();

extern int nCount;
extern int nCount2;

int main()
{

	nCount = 10;
	nCount2 = 11;
	foo();
	foo();

	return 0;
}
