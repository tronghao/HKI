#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main ()
{ 
// lenh break
	int l=3;
	for (int m=0; m<4; m++) {
		for (int n=0; n<5; n++) {
			if (n==l)
				break;
				printf("m = %d, n = %d\n", m, n);			
		}
		printf("da thoat khoi vong lap n\n");		
	}
		printf("dong thoi thoat khoi vong lap m\n\n");
		
// ham do while
	int k = -1; 
	do {
		printf("%d ",k);
		k++;
	}
	while (k<10);
	printf("\n");
	
// bai tap vong lap for + style while
	for (int i=97; i<123; i++)
	printf("%c ", i);
	printf("\n");
	
	int j=97;
	while (j<123) {
		printf("%c ", j);
		j++;
	}
	printf("\n\n");
// bai tap vong lap while
	int that_bai = 1, so_lan_that_bai = 0;
	while (that_bai == 1) {
		printf("Lam lai\n");
		if (so_lan_that_bai > 10) break;
		else
		so_lan_that_bai = so_lan_that_bai +1;
	}
	 printf("Chuc mung ban da thanh cong!!!\n\n");
// bai tap lenh switch voi ki tu
 	char chu_cai;
 	printf("nhap chu cai vao\n");
 	scanf("%c", &chu_cai);
    switch (chu_cai){
    case 'a': printf("day la chu cai %c\n\n", chu_cai); break;
    case 'b': printf("day la chu cai %c\n\n", chu_cai); break;
    case 'c': printf("day la chu cai %c\n\n", chu_cai); break;
    default: printf("day khong phai chu cai\n\n");
    }
		
// bai tap lenh switch voi so nguyen
	int b;
	printf("Nhap thang\n");
	scanf("%d", &b);
	switch (b) {
	case 1: printf("co 31 ngay\n\n"); break; 
	case 2: printf("co 28/29 ngay\n\n"); break;
	case 3: printf("co 31 ngay\n\n"); break;
	case 4: printf("co 30 ngay\n\n"); break;
	case 5: printf("co 31 ngay\n\n"); break;
	case 6: printf("co 30 ngay\n\n"); break;
	case 7: printf("co 31 ngay\n\n"); break;
	case 8: printf("co 31 ngay\n\n"); break;
	case 9: printf("co 30 ngay\n\n"); break;
	case 10: printf("co 31 ngay\n\n"); break;
	case 11: printf("co 30 ngay\n\n"); break;
	case 12: printf("co 31 ngay\n\n"); break;
	default: printf("Khong co thang nay trong nam\n\n");
	
	}
	
//bai tap lenh if else
	float a;
	printf("nhap diem trung binh\n");
	scanf("%f", &a);
	if (a>=8)
		printf("Loai Gioi\n\n");
	else if (a>=6.5)
		printf("Loai Kha\n\n");
	else if (a>=5)
		printf("Loai Trung Binh \n\n");
	else 
		printf("Loai Yeu\n\n");
	getch();
	return 0;
}
