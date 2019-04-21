#include <stdio.h>
#include <conio.h>

int BSCNN(int a, int b);

int main()
{
	int a,b;
	do{
	printf("nhap vao so nguyen thu nhat: ");
	scanf("%d", &a);
	} while (a<=0);
	do{
	printf("nhap vao so nguyen thu hai: ");
	scanf("%d", &b);
	} while (a<=0);
	printf("BSCNN cua %d va %d la %d", a, b, BSCNN(a,b));
	getch();
	return 0;
}

int BSCNN(int a, int b)
{	
    int tam;
	if(a>b) tam=a;
	else tam =b;
	for(int i=tam; i>=tam; i++)
	{
		if(i%a==0 && i%b==0) return i;
	}
}
