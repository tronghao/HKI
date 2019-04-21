#include "stdio.h"
#include "stdlib.h"

int main()
{
	int *a;
	a=(int*)malloc(sizeof(int)*6);
	*(a+5)=9;
	printf("%d", a[1]);
	
	
	free(a);
	return 0;
}

void v (int a[])
{
}
