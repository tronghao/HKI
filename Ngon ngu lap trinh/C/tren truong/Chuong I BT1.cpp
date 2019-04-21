#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <windows.h>

void gotoxy(int x, int y)
{
  static HANDLE h = NULL;  
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };  
  SetConsoleCursorPosition(h,c);
}

int main()
{	
	system("color F1");
	int nhap_so;
	printf("chon chuong trinh\n1.tinh tien dien\n2.tinh luong vs 6h-12h = 6k; 12h-18h = 7500\n3.in so lon nhat va so nho nhat\n4.tinh tong tich cac chu so cua so vua nhap\n");
	printf("5.(c^2+1)^n\n6.tinh tong hieu tich thuong cua hai so nguyen\n7.tinh dien tich chu vi hcn\n8.in ra man hinh thong tin ve ban\n\n");
	lamlai:
	scanf("%d", &nhap_so);
	switch (nhap_so)
	{
		case 1: {
				//bai tap 6/7
				printf("da chuyen sang chuong trinh tinh tien dien\n");
				printf("nhap vao so Kwh da tieu thu\n");
				float Kwh; int tien;
				scanf("%f", &Kwh);
	
				if (Kwh <= 100)
				tien = Kwh *455;
				else if(Kwh > 100 & Kwh <=150)
				tien = (100*455)+(Kwh-100)*591;
				else if(Kwh > 150 & Kwh <=200)
				tien = (100*455)+(50*591) +(Kwh-150)*818;
				else 	tien = (100*455)+(50*591) +(50*818) + (Kwh-200)*1000;
				printf("so tien phai tra %d\n\n", tien);
				break;
				}
		case 2: {
				//bai tap 5/7
				printf("da chuyen sang chuong trinh tinh luong vs 6h-12h = 6k; 12h-18h = 7500\n");
				printf("nhap vao so gio vao ca va gio ra ca theo dang gio enter phut enter\n");
				int gio_vao_ca, phut_vao_ca, gio_ra_ca, phut_ra_ca;
				int luong_truoc_12, luong_sau_12;
				scanf("%d %d %d %d",&gio_vao_ca, &phut_vao_ca, &gio_ra_ca, &phut_ra_ca);
				luong_truoc_12 = ((12-gio_vao_ca)*6000) - (((float)phut_vao_ca/60)*6000);
				luong_sau_12 = ((gio_ra_ca-12)*7500) + (((float)phut_ra_ca/60)*7500);
				printf("tien luong la %d\n\n", luong_truoc_12 + luong_sau_12);
				break;
				}
		case 3: {
				//bai tap 6
				printf("da chuyen sang bt6 in ra so lon nhat va nho nhat trong hai so\n");
				printf("nhap vao  hai so nguyen\n");
				int so_thu_1, so_thu_2, min, max;
				scanf("%d %d", &so_thu_1, &so_thu_2);
				if (so_thu_1>so_thu_2)
				printf("min = %d, max = %d\n\n", so_thu_2, so_thu_1);
				else printf("min = %d, max = %d\n\n", so_thu_1, so_thu_2);	

				break;
				}
		case 4: {//bai tap 5
				printf("da chuyen sang bt5 tinh tong tich cac chu so cua so vua nhap\n");
				printf("nhap vao so nguyen duong co ba chu so\n");
				int songuyen, hang_tram, hang_chuc, hang_don_vi;
				scanf("%d", &songuyen);
				hang_tram=songuyen/100; hang_chuc=(songuyen%100)/10; hang_don_vi=(songuyen%100)%10;
				printf("tong = %d, tich = %d\n\n", hang_tram+hang_chuc+hang_don_vi, hang_tram*hang_chuc*hang_don_vi);
			
			break;
				}
		case 5: {//bai tap 4
				printf("da chuyen sang bt4 tinh (c^2+1)^n\n");
				int n; float c;
				printf("nhap vao so nguyen va so thuc\n");
				scanf("%d %f", &n, &c);
				printf("ket qua la %.2f\n\n", pow((c*c)+1,n));
			
			break;
				}
		case 6: {//bai tap 3
				printf("da chuyen sang bt3 tinh tong hieu tich thuong cua hai so nguyen\n");
				int x,y;
				printf("Nhap hai so tu nhien a va b\n");
				scanf("%d%d", &x, &y);
				printf("Tong = %d\t Hieu = %d\t Tich = %d\t Thuong = %.2f\n\n", x+y, x-y, x*y, (float)x/y);
	
			break;
				}
		case 7: {
				//bai tap 2
				printf("da chuyen sang bt2 tinh dien tich chu vi hcn\n");
				float chieu_dai,chieu_rong;
				printf("Nhap chieu dai va chieu rong cua hinh chu nhat\n");
				scanf("%f%f", &chieu_dai, &chieu_rong);
				printf("Dien_tich = %.2f va Chu_vi = %.2f\n\n", chieu_dai*chieu_rong, (chieu_dai+chieu_rong)*2);
			break;
				}
		case 8: {
				//bai tap1
				printf("in ra man hinh thong tin ve ban\n");
				printf(" DA17TT\n Cong Nghe Thong Tin\n 110117051\n Do Trong Hao\n 01-09-1999\n 01206663784\n\n");
			break;
				}
		default: printf("khong co chuong trinh nay\n");										
	}
	printf("chon chuong trinh khac\n");
	goto lamlai;

	getch();
	return 0;
} 
