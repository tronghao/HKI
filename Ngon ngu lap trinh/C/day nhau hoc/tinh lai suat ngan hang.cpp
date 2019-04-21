#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	float s,b,l;
	int y;
	printf("nhap start, year and lai\n");
	scanf("%f%d%f", &s, &y, &l);
	b=s;
	for(int i=0; i < y; i++)
		{
			
			b=b+(l*b);
			printf("lai suat = %.2f, back = %.2f, after year %d nam\n", l, b, i+1);
		}
	printf("start = %.2f, back = %.2f, gap %.2f lan", s, b, b/s);
	getch();
	return 0;
}
