#include <stdio.h>

int main()
{
	char word[50] = "hi~ world";

	/*word[0]='h';
	  word[1]='i';
	  world[2] = 0x00;
	  */
	//for(int i=0;i<2;i++) {
	// pirntf("%c", word[i]);
	// }

	printf("%s \r\n",word);
	/*int i=0;
	  while(word[i] ! = 0x00) {
	  printf("%c", word[i]);
	  i++;
	  }*/

	for(int i=0;i<50;i++) {
		printf("%d,",word[i]);
	}

	scanf("%s", (word+3));

	printf("your input is : %S \r\n",word);


	return 0;
}
