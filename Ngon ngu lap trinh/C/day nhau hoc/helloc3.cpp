#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define HAO_DO "DoTrongHao"
#define SO 32


int main ()
{ 
// define
printf("%s\n", HAO_DO);
printf("so thi khong can dau ; %d\n", SO);
// lenh continue + goto
	int u=3;
	for (int p=0; p<4; p++) {
		for (int o=0; o<5; o++) {
			if (o==u)
				continue;
				printf("p = %d, o = %d\n", p, o);
				if (o>u)
					goto lam;			
		}
		printf("da thoat khoi vong lap o\n");		
	}
		printf("dong thoi thoat khoi vong lap p\n\n");
		lam:
			printf("thoat khoi luon hai vong lap");
	getch();
	return 0;	
}
