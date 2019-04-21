#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <conio.h>
/*tu hoc lap trinh*/
int main()
{
	//ham printf
	system("color 07");
    printf("%s la me cua %s\n", "that bai", "thanh cong"); 
    printf("%s la me cua %s\n", "bo", "be");
    printf("%s la me cua %s\n", "trau", "nghe");
    printf("%d + %d = %d\n", 1, 2, 3);
    printf("%0.2f + %0.3f = %0.4f\n\n", 0.1, 0.2, 0.3);
   
   // nhan hai so tu nhien
    int x= 10;
    int y = 2;
    int z = x * y;
    printf("z = %d\n\n", z);
    
    //chia hai so tu nhien
	float a = 10;
	float b = 3;
	float c = a/b;
	printf("c = %f\n\n", c);
	
	//ham printf
	char * sua = "gau gau";
	char * keu = "meo meo";
	printf("cho sua %s, meo keu %s\n\n", sua, keu);
	
	//cac gia tri cua short int long
	printf(" short min =\t%d\t, short max=\t%d\t\n", SHRT_MIN, SHRT_MAX);
	printf(" int min =\t%d\t, int max=\t%d\t\n", INT_MIN, INT_MAX);
	printf(" long min =\t%d\t, long max=\t%d\t\n\n", LONG_MIN, LONG_MAX);

	//mang so tu nhien
	int so_chan[5] = {0,2,4,6,8};
	int so_le[] ={1,3,5,7,9};
	int Bang_diem[10] = {};
	printf("Bang diem %d %d %d\n", Bang_diem[1], Bang_diem[2], Bang_diem[3]);
	printf("so le dau tien %d\n", so_le[0]);
	printf("so chan %d %d %d %d %d\n", so_chan[0], so_chan[1], so_chan[2], so_chan[3], so_chan[4]);
	printf("so le %d %d %d %d %d\n", so_le[0], so_le[1], so_le[2], so_le[3], so_le[4]);
	
	//mang ki tu
	char ten[] = "dotronghao";
	printf("ten toi la %s\n", ten);
	char tentoi[] = "dotrong\0hao";
	printf("ten toi la %s\n", tentoi);
	char so_phan_tu[] = "ngonnguc";
	printf("phan tu %c %c %c\n\n", so_phan_tu[1], so_phan_tu[3], so_phan_tu[5]);

	//giai phuong trinh bac nhat mot an
	float w,q;
	printf("da chuyen sang chuong trinh giai phuong trinh bac nhat mot an\n");
	printf("nhap hai he so cua phuong trinh bac nhat mot an\n");
	scanf("%f%f", &w, &q);
	if (w!=0)
		printf("pt co 1 ng e = %f\n", -q/w);	
	else 
		if (q == 0)
		printf("ptvsn");
		else
		printf("ptvn");
	getch();
	return 0;
}

