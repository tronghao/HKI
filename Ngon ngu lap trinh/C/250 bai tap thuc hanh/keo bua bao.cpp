#include <stdio.h>
#include <time.h>
#include <windows.h>

void gotoxy(int x, int y)
{
  static HANDLE h = NULL;  
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };  
  SetConsoleCursorPosition(h,c);
}
void SetTeColor(WORD color)
{ 
    HANDLE hConsoleOutput;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
    GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);
    WORD wAttributes = screen_buffer_info.wAttributes;
    color &= 0x000f;
    wAttributes &= 0xfff0; wAttributes |= color;
    SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}
void SetBGColor(WORD color)
{
    HANDLE hConsoleOutput;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
 
    CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
    GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);
 
    WORD wAttributes = screen_buffer_info.wAttributes;
    color &= 0x000f;
    color <<= 4;
    wAttributes &= 0xff0f;
    wAttributes |= color;
 
    SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}
int main()
{
	system("color F1");
	srand(time(NULL));
	char lc, cpt;
	int tsb=0, tsm=0;
	do{
	printf("/------------------------\\\n");
	SetTeColor(1);

	printf("   k:keo  b:bua  p:bao\n        e: thoat\n");
	do{
		fflush(stdin);
	SetTeColor(14);
	SetBGColor(4);
		printf("   lua chon cua ban: ");
		scanf("%c", &lc);
	}while(lc!='k'&&lc!='b'&&lc!='p'&&lc!='e');
	switch(lc)
	{
	case 'k':{ switch(1+rand()%3)
			 {
			case 1: printf("\tComputer: k");	cpt='k';	printf("\nTi so you and computer:	%d-%d\n\n", tsb, tsm);	 break;
			case 2: printf("\tComputer: b");	cpt='b';	printf("\nTi so you and computer:	%d-%d\n\n", tsb, tsm+1);	tsm++;	 break;
			case 3: printf("\tComputer: p");	cpt='p';	printf("\nTi so you and computer:	%d-%d\n\n", tsb+1, tsm);	tsb++; printf("\a"); break;
		     }
		   break;
		   }
	case 'b':{ switch(1+rand()%3)
			  {
			case 1: printf("\tComputer: k");	cpt='k';	printf("\nTi so you and computer:	%d-%d\n\n", tsb+1, tsm); tsb++; printf("\a"); break;
			case 2: printf("\tComputer: b");	cpt='b';	printf("\nTi so you and computer:	%d-%d\n\n", tsb, tsm); break;
			case 3: printf("\tComputer: p");	cpt='p';	printf("\nTi so you and computer:	%d-%d\n\n", tsb, tsm+1); tsm++; break;
			  }
		   break;
		   }
	case 'p':{ switch(1+rand()%3)
			 {
			case 1: printf("\tComputer: k");	cpt='k';	printf("\nTi so you and computer:	%d-%d\n\n", tsb, tsm+1); tsm++; break;
			case 2: printf("\tComputer: b");	cpt='b';	printf("\nTi so you and computer:	%d-%d\n\n", tsb+1, tsm); tsb++; printf("\a"); break;
			case 3: printf("\tComputer: p");	cpt='p';	printf("\nTi so you and computer:	%d-%d\n\n", tsb, tsm); break;
			  }
		   break;
		   }
	case 'e': break;
	}
	}while(lc!='e');
	return 0;
}
