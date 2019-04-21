#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define PI 3.141593

int main()
{	system("color F1");
	int nhap_so;
	printf("chon chuong trinh\n1.xac dinh diem M co nam tren duong tron C ban kinh R khong\n2.tinh khoang cach 2 diem tu toa do\n3.tinh the tich hinh cau tu dien tich\n\n");
	lamlai:
	scanf("%d", &nhap_so);
	switch (nhap_so)
{	case 1:{
	//diem M co nam tren duong tron C ban kinh R khong
	float xC, xM, yC, yM, space,R;
	printf("da chuyen sang chuong trinh diem M co nam tren duong tron C ban kinh R khong\n");
	printf("nhap toa do diem C, diem M va ban kinh R\n");
	scanf("%f %f %f %f %f", &xC, &yC, &xM, &yM, &R);
	space = sqrt ( pow ((xM -xC),2) + pow ((yM -yC),2));
	if (space == R)
	printf("M nam tren duong tron C\n\n");
	else if (space > R)
	printf("M nam ngoai duong tron C\n\n");
	else
	printf("M nam trong duong tron C\n\n");
	break;
	}	
	case 2:{
	
	//tinh khoang cach 2 diem tu toa do
	float xA, xB, yA, yB, khoang_cach;
	printf("da chuyen sang chuong trinh tinh khoang cach tu toa do\n");
	printf("nhap toa do diem A va diem B\n");
	scanf("%f %f %f %f", &xA, &yA, &xB, &yB);
	khoang_cach = sqrt ( pow ((xB -xA),2) + pow ((yB -yA),2));
	printf("khoang cach giua hai diem la %.4f\n\n", khoang_cach);
		break;
	}
	case 3:{
		
	//bai1 tinh the tich hinh cau tu dien tich
	double s, v, r;
	printf("da chuyen sang chuong trinh tinh the tich hinh cau tu dien tich\n");
	printf("nhap dien tich vao\n");
	scanf("%lf", &s);
	r = sqrt(s/(4*PI));
	v = (4 * PI * r * r * r)/3;
	printf("the tich la %lf\n\n", v);
		break;
	}
	default: printf("khong co chuong trinh nay\n");
	
}
	printf("chon chuong trinh khac\n");
	goto lamlai;
	getch();
	return 0;
	
}
