#include <stdio.h>

struct _S_PLAYER {
	int m_nHp;
	char m_szName[128];
};

typedef struct _S_PLAYER _S_Player

int main()
{
	_S_Player player = {
		100,
		"player1",
		};
	
		puts(player1.m_szName);

		return 0;
}
