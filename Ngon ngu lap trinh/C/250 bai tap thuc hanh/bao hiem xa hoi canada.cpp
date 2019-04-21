#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
	int so, SBH;
	do{
		system("cls");
		printf("0.Exit\n1.Nhap so bao hiem xa hoi cua CANADA\n2.kiem tra tinh hop le\nchon chuong trinh: ");
		do{
			scanf("%d", &so);
		}while(so<0||so>2);
		switch(so)
		{
		case 0: break;
		case 1: {
		printf("so bao hiem xa hoi: "); scanf("%d", &SBH); break;}
		case 2:
			{
				if(SBH<100000000||SBH>999999999){ printf("SIN khong hop le");	break;}
				int con, sum=0, nhap;
				con = SBH / 10;
				for(int i=1; i<9; i++)
				{
					if(i%2==0) sum+= (con%10);
					else {nhap=((con%10)*2);
						  sum+= nhap%10;
						  sum+= nhap/10;
							}
					con/=10;
				}
				sum+=(SBH%10);
				if(sum%10==0) printf("SIN hop le");
				else printf("SIN khong hop le");
				break;
			}
		}
	getch();
	} while(so!=0); 
	
	return 0;
}
