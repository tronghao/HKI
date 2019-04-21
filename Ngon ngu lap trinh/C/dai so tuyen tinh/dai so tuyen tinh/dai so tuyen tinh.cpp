#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

float gia_tri_dinh_thuc(float *a);
void nhap_mang(float *a, int m, int n);
void xuat_mang(float *a, float *b, int m, int n);
int UCLN(int a, int b);
float gia_tri_dinh_thuc_cap_3(float *a);
int kiem_tra_so_nguyen(float a);

int main()
{	
	system("color F1");
	printf("day la chuong trinh giai he phuong trinh tuyen tinh:\nvui long chon chuong trinh:\n");
	printf("1.he phuong trinh tuyen tinh 2 an\n2.he phuong trinh tuyen tinh 3 an\n");
	int so;
lamlai:
	scanf("%d", &so);
	switch (so)
	{
	case 1:
		{	
			float ma_tran_truoc_dau_bang [2][2], ma_tran_sau_dau_bang [2][1];
			// nhap ma tran truoc dau bang
			printf("nhap vao ma tran truoc dau bang\n");
			nhap_mang((float*)ma_tran_truoc_dau_bang, 2, 2);

			//nhap ma tran sau dau bang
			printf("nhap vao ma tran sau dau bang\n");
			nhap_mang((float*)ma_tran_sau_dau_bang, 2, 1);
			xuat_mang((float*)ma_tran_truoc_dau_bang, (float*)ma_tran_sau_dau_bang, 2, 2);

			float gia_dinh [2][2];
			gia_dinh [0][0] = ma_tran_sau_dau_bang [0][0];
			gia_dinh [0][1] = ma_tran_truoc_dau_bang [0][1];
			gia_dinh [1][0] = ma_tran_sau_dau_bang [1][0];
			gia_dinh [1][1] = ma_tran_truoc_dau_bang [1][1];
			float detA, detA1, detA2;
			detA = gia_tri_dinh_thuc((float*)ma_tran_truoc_dau_bang);
			detA1 = gia_tri_dinh_thuc((float*)gia_dinh);

			gia_dinh [0][0] = ma_tran_truoc_dau_bang [0][0];
			gia_dinh [0][1] = ma_tran_sau_dau_bang [0][0];
			gia_dinh [1][0] = ma_tran_truoc_dau_bang [1][0];
			gia_dinh [1][1] = ma_tran_sau_dau_bang [1][0];
			detA2 = gia_tri_dinh_thuc((float*)gia_dinh);
			//printf("%f %f %f\n", detA, detA1, detA2);


			if (detA != 0)
			{	
				int tu_x1, mau_x1, tu_x2, mau_x2;
			  if(kiem_tra_so_nguyen(detA) == 1 && kiem_tra_so_nguyen(detA1) == 1 && kiem_tra_so_nguyen(detA2) == 1)
			  {
				
					tu_x1 = ((int)detA1 / UCLN((int)detA,(int)detA1));
					mau_x1 = ((int)detA / UCLN((int)detA,(int)detA1));
					
					tu_x2 = ((int)detA2 / UCLN((int)detA,(int)detA2));
					mau_x2 = ((int)detA / UCLN((int)detA,(int)detA2));
				
				if (kiem_tra_so_nguyen(detA1/detA)== 1 && kiem_tra_so_nguyen(detA2/detA)== 1)
				{
					printf("CO NGHIEM DUY NHAT (x1,x2) = ( %.0f, %.0f)\n", detA1/detA, detA2/detA );
				}

				if (kiem_tra_so_nguyen(detA1/detA)== 1 && kiem_tra_so_nguyen(detA2/detA)!= 1)
				{
					printf("CO NGHIEM DUY NHAT (x1,x2) = ( %.0f, %f) = ( %.0f, %d/%d)", detA1/detA, detA2/detA, detA1/detA, tu_x2, mau_x2);
				}
				if (kiem_tra_so_nguyen(detA1/detA)!= 1 && kiem_tra_so_nguyen(detA2/detA)== 1)
				{
					printf("CO NGHIEM DUY NHAT (x1,x2) = ( %f, %.0f) = ( %d/%d, %.0f)", detA1/detA, detA2/detA,  tu_x1, mau_x1 ,detA2/detA);

				}
				if (kiem_tra_so_nguyen(detA1/detA)!= 1 && kiem_tra_so_nguyen(detA2/detA)!= 1)
				{
					printf("CO NGHIEM DUY NHAT (x1,x2) = ( %f, %f) = ( %d/%d, %d/%d)", detA1/detA, detA2/detA,  tu_x1, mau_x1 ,tu_x2, mau_x2);

				}
			  }
			  else
			  {
				  if (kiem_tra_so_nguyen(detA1/detA)== 1 && kiem_tra_so_nguyen(detA2/detA)== 1)
				  {
					  printf("CO NGHIEM DUY NHAT (x1,x2) = ( %.0f, %.0f)\n", detA1/detA, detA2/detA );
				  }

				  if (kiem_tra_so_nguyen(detA1/detA)== 1 && kiem_tra_so_nguyen(detA2/detA)!= 1)
				  {
					  printf("CO NGHIEM DUY NHAT (x1,x2) = ( %.0f, %f)", detA1/detA, detA2/detA);
				  }
				  if (kiem_tra_so_nguyen(detA1/detA)!= 1 && kiem_tra_so_nguyen(detA2/detA)== 1)
				  {
					  printf("CO NGHIEM DUY NHAT (x1,x2) = ( %f, %.0f)", detA1/detA, detA2/detA);

				  }
				  if (kiem_tra_so_nguyen(detA1/detA)!= 1 && kiem_tra_so_nguyen(detA2/detA)!= 1)
				  {
					  printf("CO NGHIEM DUY NHAT (x1,x2) = ( %f, %f)", detA1/detA, detA2/detA);

				  }
				
				}
			}
			else if (detA1 == 0 || detA2 ==0)
				printf("HE PHUONG TRINH VO NGHIEM");
			else printf("MATH ERROR");
			goto lamlai;break;
			
			
			/*bai tap mau: 
			3 2 | 1
			1 3 | 3
			ket qua detA=7; detA1=-3; detA2=8
			=> x1=-3/7; x2=8/7
			*/
			
		} // case 1

	case 2:
		{	
			float ma_tran_truoc_dau_bang_cap_3 [3][3], ma_tran_sau_dau_bang_cap_3 [3][1];
			// nhap ma tran truoc dau bang
			printf("nhap vao ma tran truoc dau bang\n");
			nhap_mang((float*)ma_tran_truoc_dau_bang_cap_3, 3, 3);

			//nhap ma tran sau dau bang
			printf("nhap vao ma tran sau dau bang\n");
			nhap_mang((float*)ma_tran_sau_dau_bang_cap_3, 3, 1);
			xuat_mang((float*)ma_tran_truoc_dau_bang_cap_3, (float*)ma_tran_sau_dau_bang_cap_3, 3, 3);

			float gia_dinh_cap_3 [3][3];
			gia_dinh_cap_3 [0][0] = ma_tran_sau_dau_bang_cap_3 [0][0];
			gia_dinh_cap_3 [0][1] = ma_tran_truoc_dau_bang_cap_3 [0][1];
			gia_dinh_cap_3 [0][2] = ma_tran_truoc_dau_bang_cap_3 [0][2];
			gia_dinh_cap_3 [1][0] = ma_tran_sau_dau_bang_cap_3 [1][0];
			gia_dinh_cap_3 [1][1] = ma_tran_truoc_dau_bang_cap_3 [1][1];
			gia_dinh_cap_3 [1][2] = ma_tran_truoc_dau_bang_cap_3 [1][2];
			gia_dinh_cap_3 [2][0] = ma_tran_sau_dau_bang_cap_3 [2][0];
			gia_dinh_cap_3 [2][1] = ma_tran_truoc_dau_bang_cap_3 [2][1];
			gia_dinh_cap_3 [2][2] = ma_tran_truoc_dau_bang_cap_3 [2][2];


			float detA_cap_3, detA1_cap_3, detA2_cap_3, detA3_cap_3;
			detA_cap_3 = gia_tri_dinh_thuc_cap_3((float*)ma_tran_truoc_dau_bang_cap_3);
			detA1_cap_3 = gia_tri_dinh_thuc_cap_3((float*)gia_dinh_cap_3);
			
			gia_dinh_cap_3 [0][0] = ma_tran_truoc_dau_bang_cap_3 [0][0];
			gia_dinh_cap_3 [0][1] = ma_tran_sau_dau_bang_cap_3 [0][0];
			gia_dinh_cap_3 [0][2] = ma_tran_truoc_dau_bang_cap_3 [0][2];
			gia_dinh_cap_3 [1][0] = ma_tran_truoc_dau_bang_cap_3 [1][0];
			gia_dinh_cap_3 [1][1] = ma_tran_sau_dau_bang_cap_3 [1][0];
			gia_dinh_cap_3 [1][2] = ma_tran_truoc_dau_bang_cap_3 [1][2];
			gia_dinh_cap_3 [2][0] = ma_tran_truoc_dau_bang_cap_3 [2][0];
			gia_dinh_cap_3 [2][1] = ma_tran_sau_dau_bang_cap_3 [2][0];
			gia_dinh_cap_3 [2][2] = ma_tran_truoc_dau_bang_cap_3 [2][2];
			detA2_cap_3 = gia_tri_dinh_thuc_cap_3((float*)gia_dinh_cap_3);
			
			gia_dinh_cap_3 [0][0] = ma_tran_truoc_dau_bang_cap_3 [0][0];
			gia_dinh_cap_3 [0][1] = ma_tran_truoc_dau_bang_cap_3 [0][1];
			gia_dinh_cap_3 [0][2] = ma_tran_sau_dau_bang_cap_3 [0][0];
			gia_dinh_cap_3 [1][0] = ma_tran_truoc_dau_bang_cap_3 [1][0];
			gia_dinh_cap_3 [1][1] = ma_tran_truoc_dau_bang_cap_3 [1][1];
			gia_dinh_cap_3 [1][2] = ma_tran_sau_dau_bang_cap_3 [1][0];
			gia_dinh_cap_3 [2][0] = ma_tran_truoc_dau_bang_cap_3 [2][0];
			gia_dinh_cap_3 [2][1] = ma_tran_truoc_dau_bang_cap_3 [2][1];
			gia_dinh_cap_3 [2][2] = ma_tran_sau_dau_bang_cap_3 [2][0];
			detA3_cap_3 = gia_tri_dinh_thuc_cap_3((float*)gia_dinh_cap_3);
			//printf("%f %f %f %f", detA1_cap_3, detA2_cap_3, detA3_cap_3, detA_cap_3);

			if (detA_cap_3 != 0)
			{
			  if(kiem_tra_so_nguyen(detA_cap_3) == 1 && kiem_tra_so_nguyen(detA1_cap_3) == 1 && kiem_tra_so_nguyen(detA2_cap_3) == 1 && kiem_tra_so_nguyen(detA3_cap_3) == 1)	
			  {
				int tu_x1_cap_3, mau_x1_cap_3, tu_x2_cap_3, mau_x2_cap_3, tu_x3_cap_3, mau_x3_cap_3;
				
					tu_x1_cap_3 = ((int)detA1_cap_3 / UCLN((int)detA_cap_3,(int)detA1_cap_3));
					mau_x1_cap_3 = ((int)detA_cap_3 / UCLN((int)detA_cap_3,(int)detA1_cap_3));
				
					tu_x2_cap_3 = ((int)detA2_cap_3 / UCLN((int)detA_cap_3,(int)detA2_cap_3));
					mau_x2_cap_3 = ((int)detA_cap_3 / UCLN((int)detA_cap_3,(int)detA2_cap_3));
				
					tu_x3_cap_3 = ((int)detA3_cap_3 / UCLN((int)detA_cap_3,(int)detA3_cap_3));
					mau_x3_cap_3 = ((int)detA_cap_3 / UCLN((int)detA_cap_3,(int)detA3_cap_3));
				
				if (kiem_tra_so_nguyen(detA1_cap_3/detA_cap_3)== 1 && kiem_tra_so_nguyen(detA2_cap_3/detA_cap_3)== 1 && kiem_tra_so_nguyen(detA3_cap_3/detA_cap_3)== 1)
				{
					printf("CO NGHIEM DUY NHAT (x1,x2,x3) = ( %.0f, %.0f, %.0f)\n", detA1_cap_3/detA_cap_3, detA2_cap_3/detA_cap_3, detA3_cap_3/detA_cap_3 );
				}
				if (kiem_tra_so_nguyen(detA1_cap_3/detA_cap_3)== 1 && kiem_tra_so_nguyen(detA2_cap_3/detA_cap_3)!= 1 && kiem_tra_so_nguyen(detA3_cap_3/detA_cap_3)!= 1)
				{
					printf("CO NGHIEM DUY NHAT (x1,x2,x3) = ( %.0f, %f, %f) = ( %.0f, %d/%d, %d/%d)\n", detA1_cap_3/detA_cap_3, detA2_cap_3/detA_cap_3, detA3_cap_3/detA_cap_3, detA1_cap_3/detA_cap_3, tu_x2_cap_3, mau_x2_cap_3, tu_x3_cap_3, mau_x3_cap_3 );
				}
				if (kiem_tra_so_nguyen(detA1_cap_3/detA_cap_3)== 1 && kiem_tra_so_nguyen(detA2_cap_3/detA_cap_3)!= 1 && kiem_tra_so_nguyen(detA3_cap_3/detA_cap_3)== 1)
				{
					printf("CO NGHIEM DUY NHAT (x1,x2,x3) = ( %.0f, %f, %.0f) = ( %.0f, %d/%d, %.0f)\n", detA1_cap_3/detA_cap_3, detA2_cap_3/detA_cap_3, detA3_cap_3/detA_cap_3, detA1_cap_3/detA_cap_3, tu_x2_cap_3, mau_x2_cap_3, detA3_cap_3/detA_cap_3 );
				}
				if (kiem_tra_so_nguyen(detA1_cap_3/detA_cap_3)== 1 && kiem_tra_so_nguyen(detA2_cap_3/detA_cap_3)== 1 && kiem_tra_so_nguyen(detA3_cap_3/detA_cap_3)!= 1)
				{
					printf("CO NGHIEM DUY NHAT (x1,x2,x3) = ( %.0f, %.0f, %f) = ( %.0f, %.0f, %d/%d)\n", detA1_cap_3/detA_cap_3, detA2_cap_3/detA_cap_3, detA3_cap_3/detA_cap_3, detA1_cap_3/detA_cap_3, detA2_cap_3/detA_cap_3, tu_x3_cap_3, mau_x3_cap_3 );
				}
				if (kiem_tra_so_nguyen(detA1_cap_3/detA_cap_3)!= 1 && kiem_tra_so_nguyen(detA2_cap_3/detA_cap_3)== 1 && kiem_tra_so_nguyen(detA3_cap_3/detA_cap_3)== 1)
				{
					printf("CO NGHIEM DUY NHAT (x1,x2,x3) = ( %f, %.0f, %.0f) = ( %d/%d, %.0f, %.0f)\n", detA1_cap_3/detA_cap_3, detA2_cap_3/detA_cap_3, detA3_cap_3/detA_cap_3, tu_x1_cap_3, mau_x1_cap_3, detA2_cap_3/detA_cap_3, detA3_cap_3/detA_cap_3);
				}
				if (kiem_tra_so_nguyen(detA1_cap_3/detA_cap_3)!= 1 && kiem_tra_so_nguyen(detA2_cap_3/detA_cap_3)== 1 && kiem_tra_so_nguyen(detA3_cap_3/detA_cap_3)!= 1)
				{
					printf("CO NGHIEM DUY NHAT (x1,x2,x3) = ( %f, %.0f, %f) = ( %d/%d, %.0f, %d/%d)\n", detA1_cap_3/detA_cap_3, detA2_cap_3/detA_cap_3, detA3_cap_3/detA_cap_3, tu_x1_cap_3, mau_x1_cap_3, detA2_cap_3/detA_cap_3, tu_x2_cap_3, mau_x2_cap_3 );
				}
				if (kiem_tra_so_nguyen(detA1_cap_3/detA_cap_3)!= 1 && kiem_tra_so_nguyen(detA2_cap_3/detA_cap_3)!= 1 && kiem_tra_so_nguyen(detA3_cap_3/detA_cap_3)== 1)
				{
					printf("CO NGHIEM DUY NHAT (x1,x2,x3) = ( %f, %f, %.0f) = ( %d/%d, %d/%d, %.0f)\n", detA1_cap_3/detA_cap_3, detA2_cap_3/detA_cap_3, detA3_cap_3/detA_cap_3, tu_x1_cap_3, mau_x1_cap_3, tu_x2_cap_3, mau_x2_cap_3, detA3_cap_3/detA_cap_3 );
				}
				if (kiem_tra_so_nguyen(detA1_cap_3/detA_cap_3)!= 1 && kiem_tra_so_nguyen(detA2_cap_3/detA_cap_3)!= 1 && kiem_tra_so_nguyen(detA3_cap_3/detA_cap_3)!= 1)
				{
					printf("CO NGHIEM DUY NHAT (x1,x2,x3) = ( %f, %f, %f) = ( %d/%d, %d/%d, %d/%d)\n", detA1_cap_3/detA_cap_3, detA2_cap_3/detA_cap_3, detA3_cap_3/detA_cap_3, tu_x1_cap_3, mau_x1_cap_3, tu_x2_cap_3, mau_x2_cap_3, tu_x3_cap_3, mau_x3_cap_3);
				}
			  }
			  else
			  {
				  if (kiem_tra_so_nguyen(detA1_cap_3/detA_cap_3)== 1 && kiem_tra_so_nguyen(detA2_cap_3/detA_cap_3)== 1 && kiem_tra_so_nguyen(detA3_cap_3/detA_cap_3)== 1)
				  {
					  printf("CO NGHIEM DUY NHAT (x1,x2,x3) = ( %.0f, %.0f, %.0f)\n", detA1_cap_3/detA_cap_3, detA2_cap_3/detA_cap_3, detA3_cap_3/detA_cap_3 );
				  }
				  if (kiem_tra_so_nguyen(detA1_cap_3/detA_cap_3)== 1 && kiem_tra_so_nguyen(detA2_cap_3/detA_cap_3)!= 1 && kiem_tra_so_nguyen(detA3_cap_3/detA_cap_3)!= 1)
				  {
					  printf("CO NGHIEM DUY NHAT (x1,x2,x3) = ( %.0f, %f, %f)\n", detA1_cap_3/detA_cap_3, detA2_cap_3/detA_cap_3, detA3_cap_3/detA_cap_3);
				  }
				  if (kiem_tra_so_nguyen(detA1_cap_3/detA_cap_3)== 1 && kiem_tra_so_nguyen(detA2_cap_3/detA_cap_3)!= 1 && kiem_tra_so_nguyen(detA3_cap_3/detA_cap_3)== 1)
				  {
					  printf("CO NGHIEM DUY NHAT (x1,x2,x3) = ( %.0f, %f, %.0f)\n", detA1_cap_3/detA_cap_3, detA2_cap_3/detA_cap_3, detA3_cap_3/detA_cap_3);
				  }
				  if (kiem_tra_so_nguyen(detA1_cap_3/detA_cap_3)== 1 && kiem_tra_so_nguyen(detA2_cap_3/detA_cap_3)== 1 && kiem_tra_so_nguyen(detA3_cap_3/detA_cap_3)!= 1)
				  {
					  printf("CO NGHIEM DUY NHAT (x1,x2,x3) = ( %.0f, %.0f, %f)\n", detA1_cap_3/detA_cap_3, detA2_cap_3/detA_cap_3, detA3_cap_3/detA_cap_3);
				  }
				  if (kiem_tra_so_nguyen(detA1_cap_3/detA_cap_3)!= 1 && kiem_tra_so_nguyen(detA2_cap_3/detA_cap_3)== 1 && kiem_tra_so_nguyen(detA3_cap_3/detA_cap_3)== 1)
				  {
					  printf("CO NGHIEM DUY NHAT (x1,x2,x3) = ( %f, %.0f, %.0f)\n", detA1_cap_3/detA_cap_3, detA2_cap_3/detA_cap_3, detA3_cap_3/detA_cap_3);
				  }
				  if (kiem_tra_so_nguyen(detA1_cap_3/detA_cap_3)!= 1 && kiem_tra_so_nguyen(detA2_cap_3/detA_cap_3)== 1 && kiem_tra_so_nguyen(detA3_cap_3/detA_cap_3)!= 1)
				  {
					  printf("CO NGHIEM DUY NHAT (x1,x2,x3) = ( %f, %.0f, %f)\n", detA1_cap_3/detA_cap_3, detA2_cap_3/detA_cap_3, detA3_cap_3/detA_cap_3);
				  }
				  if (kiem_tra_so_nguyen(detA1_cap_3/detA_cap_3)!= 1 && kiem_tra_so_nguyen(detA2_cap_3/detA_cap_3)!= 1 && kiem_tra_so_nguyen(detA3_cap_3/detA_cap_3)== 1)
				  {
					  printf("CO NGHIEM DUY NHAT (x1,x2,x3) = ( %f, %f, %.0f)\n", detA1_cap_3/detA_cap_3, detA2_cap_3/detA_cap_3, detA3_cap_3/detA_cap_3);
				  } 
				  if (kiem_tra_so_nguyen(detA1_cap_3/detA_cap_3)!= 1 && kiem_tra_so_nguyen(detA2_cap_3/detA_cap_3)!= 1 && kiem_tra_so_nguyen(detA3_cap_3/detA_cap_3)!= 1)
				  {
					  printf("CO NGHIEM DUY NHAT (x1,x2,x3) = ( %f, %f, %f)\n", detA1_cap_3/detA_cap_3, detA2_cap_3/detA_cap_3, detA3_cap_3/detA_cap_3);
				  }
			  }
			}
			else if (detA1_cap_3 == 0 || detA2_cap_3 ==0 || detA3_cap_3 ==0)
				printf("HE PHUONG TRINH VO NGHIEM");
			else printf("MATH ERROR");
			goto lamlai;break;
			
			
			/*bai tap mau
			4 1 2 | 1
			2 3 1 | 2
			5 1 4 | 0
			x1=7/15, x2=3/5, x3=-11/15
			*/
		} // case 2



	default:{ printf("khong co chuong trinh nay\nchon lai chuong trinh\n");
		goto lamlai; 
			}
	} // switch

	printf("\nAn phim bat ky de thoat");

	getch();
	return 0;
}

float gia_tri_dinh_thuc_cap_3(float *a)
{
	float detA;
	detA = ( *a * *(a+4) * *(a+8) + *(a+2) * *(a+3) * * (a+7) + *(a+6) * * (a+5) * *(a+1)) - (*(a+2) * *(a+4) * *(a+6) + *a * *(a+7) * * (a+5) + *(a+8) * * (a+1) * *(a+3));
	return detA;	
}

float gia_tri_dinh_thuc(float *a)
{
	float detA;
	//detA = (ma_tran[0][0] * ma_tran[1][1]) - (ma_tran[0][1] * ma_tran[1][0]);
	detA = ((*(a+0))*(*(a+3)))-((*(a+1))*(*(a+2)));
	return detA;
}

void nhap_mang(float *a, int m, int n)
{
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
		{
			printf("A%d%d =", i+1, j+1);
			scanf("%f", a+i*n+j);
		}
}

void xuat_mang(float *a, float *b, int m, int n)
{	
	printf("\n");
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if (kiem_tra_so_nguyen(*(a+i*n+j)) == 1)
			printf(" %2.0f", *(a+i*n+j));
			else printf(" %.2f", *(a+i*n+j));
		}
		if(kiem_tra_so_nguyen(*(b+i)) == 1)
		printf(" | %2.0f", *(b+i));
		else printf(" | %.2f", *(b+i));
		printf("\n");
	}
	printf("\n");
}

int UCLN(int a, int b)
{	
	int uoc_chung=0;
	if (a>=0 && b>=0)
	{
		for(int i= 1; i < 101 ; i++)
			if(a % i == 0 && b % i == 0)
				uoc_chung = i;
	}
	if (a<0 && b>=0)
	{
		for(int i= 1; i < 101 ; i++)
			if(a % i == 0 && b % i == 0)
				uoc_chung = i;
		uoc_chung = uoc_chung * (-1);
	}
	
	if(a<0 && b<0)
	{
		for(int i= 1; i < 101 ; i++)

			if(a % i == 0 && b % i == 0)
			
				uoc_chung = i;
		uoc_chung = uoc_chung * (-1);
	}
	if(a>=0 && b<0)
	{
		for(int i= 1; i < 101 ; i++)
			if(a % i == 0 && b % i == 0)
				uoc_chung = i;
	}
	
	return uoc_chung;
	

}

int kiem_tra_so_nguyen(float a)
{	
	int flag;
	if(a == (int)a)
		flag = 1;	
	else flag =0;	
	return flag;
}
