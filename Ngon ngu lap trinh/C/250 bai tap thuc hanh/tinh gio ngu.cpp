#include "stdio.h"
#include "conio.h"
#include "windows.h"
struct GIO
{
	int gio;
	int phut;
};

int main()
{
	GIO gN, gT, gT1;
	int cK, tam, chon;
	lamlai4:
	system("cls");
	printf("\n\nXac dinh gio thuc: phim 1\tXac dinh so chu ki ngu: 2\tThoat: ki tu bat ki\nLua chon cua ban la:");
	scanf("%d", &chon);
	
	if(chon==1) goto lamlai;
	else if(chon==2) goto lamlai2;

	
	lamlai:
	system("cls");
	//-----------------------
	
	printf("\n----------------------\n");
	printf("Ban ngu luc: ");
	
	printf("\n\tGio: ");
	scanf("%d", &gN.gio);
	
	printf("\tphut: ");
	scanf("%d", &gN.phut);
	
	//----------------------
	
	printf("Nhap vao so chu ki: ");
	scanf("%d", &cK);
	
	tam=gN.gio*60+gN.phut+90*cK+14;
	gT.gio=(tam/60);
	gT.phut=(tam%60);
	
	if(gT.gio > 24) gT.gio -=24;
	
	printf("Gio ban can thuc la:  %d:%d (14 vao giac ngu)", gT.gio, gT.phut);
	
	printf("\n-----------------------");
	
	printf("\n\nNhap lai: phim 1\tChuong trinh khac: phim 2\tThoat: ki tu khac\nLua chon cua ban la:");
	scanf("%d", &chon);
	
	if(chon==1) goto lamlai;
	else if(chon==2) goto lamlai4;

	
	lamlai2:
	system("cls");
	//-----------------------
	
	printf("\n----------------------\n");
	printf("Ban ngu luc: ");
	
	printf("\n\tGio: ");
	scanf("%d", &gN.gio);
	
	printf("\tphut: ");
	scanf("%d", &gN.phut);
	
	//----------------------------
	
	printf("Ban thuc luc: ");
	
	printf("\n\tGio: ");
	scanf("%d", &gT.gio);
	
	printf("\tphut: ");
	scanf("%d", &gT.phut);
	if(gT.gio < 24) gT.gio +=24;
	//----------------------
	int dem=0; cK=0;
	while(dem==0){
		tam=gN.gio*60+gN.phut+90*cK+14;	
		gT1.gio=(tam/60);
		gT1.phut=(tam%60);
		if(gT1.gio>gT.gio) {dem=1; break;}
		else if(gT1.gio==gT.gio)
			{	if(gT1.phut>=gT.phut)
			 		{dem=1; break;}
			}
		cK++;
	}
	

	
	
	
	printf("So chu ki toi da:  %d", cK-1);
	
	printf("\n-----------------------");
	
	printf("\n\nNhap lai: phim 1\tChuong trinh khac: phim 2\tThoat: ki tu khac\nLua chon cua ban la:");
	scanf("%d", &chon);
	
	if(chon==1) goto lamlai2;
	else if(chon==2) goto lamlai4;

	
	

	getch();
	return 0;
}
