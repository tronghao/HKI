#include <stdio.h>
#include <conio.h>

	int main()
{
	int ki_tu;
	printf("nhap vao ma ASCII bat ky tu 0 den 255\n");
	lamlai:
	scanf("%d", &ki_tu);
	if(ki_tu <0 || ki_tu >255)
	{
		printf("ban nhap sai moi ban nhap lai\n");
		goto lamlai;
	}
	printf("ki tu cua ma ban vua nhap la %c", ki_tu);

	getch();
	return 0;
}
