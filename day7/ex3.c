#include <stdio.h>

int print_array(char **ary)
{
	for(int i=0;i<4;i++) {
		puts(ary[i]);
	}
}

int main()
{
	char *ptr_ary[]={"eagle", "tiger", "lion", "squirrel"};

	print_array(ptr_ary);


}

