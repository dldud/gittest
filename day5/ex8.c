#include <stdio.h>

int main()
{
	int num[]= {3,6,4,5,7};
	int *pNum = num;

	printf("%d,%d \r\n",*(pNum+1),num[1]);

	int sum = 0;
	int min = 9999;
	int max = -9999;

	for(int i=0; i<sizeof(num)/sizeof(int);i++)
	{
		printf("%d ,",*(pNum+i) );
		sum += *(pNum+i);

		if(min > *pNum+i) {
			min = *(pNum+i);
		}
	}
	printf("%d \r\n", sum);
	printf("%d \r\n", max);
	printf("%d \r\n", min);
	

	return 0;

}
