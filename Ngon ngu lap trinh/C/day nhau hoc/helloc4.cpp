#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{	putchar(l);
	//chuong trinh dem ki tu, dem tu, dem dong
	printf("da sang chuong trinh dem ki tu, tu, dong\n");
	printf("nhap ki tu vao\n");
	int nchar, nword, nline2, f;
	nchar = nword = nline2 = 0;
	while ((f=getchar()) != EOF)
		{
			nchar++;
			if(f==' ' || f=='\t' || f=='\n')
				nword++;
			if(f=='\n')
				 nline2++;
		}
	printf("so char = %d\t so word = %d\t so line = %d\n\n", nchar, nword, nline2);
	
	
	// chuong trinh dem tap
	int  tap=0;
	char e;
	printf("da sang chuong trinh dem tap\n");
	printf("nhap ki tu vao\n");
	while ((e=getchar()) != EOF)
			{ if(e=='	')
			tap++;
			}
	printf("so tap la %d\n\n", tap);
			
	// chuong trinh dem khoang cach
	int  space=0;
	char b;
	printf("da sang chuong trinh dem khoang cach\n");
	printf("nhap ki tu vao\n");
	while ((b=getchar()) != EOF)
			{ if(b==' ')
			space++;
			}
	printf("so khoang cach la %d\n\n", space);			
	
	// chuong trinh dem dong (hang)
	int  nline=0;
	char a;
	printf("da sang chuong trinh dem dong (hang)\n");
	printf("nhap ki tu vao\n");
	while ((a=getchar()) != EOF)
			{ if(a=='\n')
			nline++;
			}	 
			
			
	printf("so dong la %d\n\n", nline);
	
	// chuong trinh dem ki tu nhap vao
	long nc = 0;
	printf("da sang chuong trinh dem ki tu\n");
	printf("nhap ki tu vao\n");
	for (nc; getchar()!= EOF; nc++) //EOF = -1: ki tu ket thuc chuoi trong windows la ctrl + z; linex ctrl + d
			;
			/*co the dung lenh while nhu sau:
			while (getchar() != EOF)
					nc++;					*/
					
	printf("so ki tu la %ld\n\n", nc);



	// ket hop lenh getchar va putchar
	//getchar in duoc ki tu trang ma scanf khong lam duoc( ban chat la scanf("%c", c);
	//putchar in ki tu ra man hinh tu cai nhap vao con printf thi khong the
	char c;
	//c=getchar(); co the nhu the nay hoac nhu ben duoi
	printf("da sang chuong trinh nhap ki tu\n");
	printf("nhap ki tu vao\n");
	while ((c=getchar()) != EOF)   //EOF = -1: ki tu ket thuc chuoi trong windows la ctrl + z; linex ctrl + d
				putchar(c);
		
	getch();	
	return 0;
	
}
