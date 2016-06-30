#include <stdio.h>

int main()
{
	char *code = " ◎ ";
	printf("窩  渦 \r\n");
	printf("%s \r\n",code);
	printf("%x,%x \r\n",code[0],code[1]);
	//e296
	printf("\u296\r\n");
	return 0;
}
