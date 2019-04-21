#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define PI 3.141593

//giai giai thua voi gia tri n <= 33
int giai_thua(int n);
//ham tinh tong cac so tu nhien
int tong(int n);
//ham kiem tra so nguyen to
bool SNT(int n);
//ham tinh gia tri so hang thu n cua day fibonacii
int FBNCNUM(int stt);
float gia_tri_dinh_thuc(float *a);
void nhap_mang(float *a, int m, int n);
void xuat_mang(float *a, float *b, int m, int n);
int UCLN(int a, int b);
float gia_tri_dinh_thuc_cap_3(float *a);

int main()
{		
	system("color F1");
	int nhap_so;
	printf("chon chuong trinh\n1.tinh tien dien\n2.tinh luong vs 6h-12h = 6k; 12h-18h = 7500\n3.in so lon nhat va so nho nhat\n4.tinh tong tich cac chu so cua so vua nhap\n");
	printf("5.(c^2+1)^n\n6.tinh tong hieu tich thuong cua hai so nguyen\n7.tinh dien tich chu vi hcn\n8.in ra man hinh thong tin ve ban\n");
	printf("9.xac dinh diem M co nam tren duong tron C ban kinh R khong\n10.tinh khoang cach 2 diem tu toa do\n11.tinh the tich hinh cau tu dien tich\n");
	printf("12.chuong trinh nhap vao ba so mo ta ba so do\n13.chuong trinh tinh lai suat ngan hang\n14.giai phuong trinh bac nhat mot an\n");
	printf("15.mang so tu nhien va mang ki tu\n16.chuong trinh dem ki tu, tu, dong\n17.chuong trinh dem tab\n18.chuong trinh dem khoang cach\n");
	printf("19.chuong trinh dem dong\n20.chuong trinh dem ki tu\n21.tinh gia tri so hang thu n cua day fibonacii\n22.kiem tra so nguyen to\n");
	printf("23.tinh thua voi gia tri n <= 33\n24.tinh tong all so tu nhien voi n cho truoc\n25.tinh tien thu tin buu dien\n26.giai he phuong trinh tuyen tinh\n\n");
	lamlai:
	putchar(7); // tao tieng chuong
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
		case 9:{
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
		case 10:{
	
				//tinh khoang cach 2 diem tu toa do
				float xA, xB, yA, yB, khoang_cach;
				printf("da chuyen sang chuong trinh tinh khoang cach tu toa do\n");
				printf("nhap toa do diem A va diem B\n");
				scanf("%f %f %f %f", &xA, &yA, &xB, &yB);
				khoang_cach = sqrt ( pow ((xB -xA),2) + pow ((yB -yA),2));
				printf("khoang cach giua hai diem la %.4f\n\n", khoang_cach);
		break;
				}
		case 11:{
		
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
		case 12:{
			printf("viet chuong trinh nhap vao ba so mo ta ba so do\n");
			int so_thu_nhat, so_thu_hai, so_thu_ba, don_vi_kq, ngan_kq, tram_kq, chuc_kq;
			char chuc_ngan[10][12]={"khong ", "muoi ","hai muoi ", "ba muoi ", "bon muoi ", "nam muoi ", "sau muoi ", "bay muoi ", "tam muoi ", "chin muoi "};
			char ngan[10][12]={"nghin ","mot nghin ","hai nghin ", "ba nghin ", "bon nghin ", "lam nghin ", "sau nghin ", "bay nghin ", "tam nghin ", "chin nghin "};
			char tram[10][13]={"khong tram ", "mot tram ", "hai tram ", "ba tram ", "bon tram ", "nam tram ", "sau tram ", "bay tram ", "tam tram ", "chin tram "};
			char chuc[10][12]={"le ", "muoi ", "hai muoi ", "ba muoi ", "bon muoi ", "nam muoi ", "sau muoi ", "bay muoi ", "tam muoi ", "chin muoi "};
			char don_vi[9][6]={"mot\n", "hai\n", "ba\n", "bon\n", "lam\n", "sau\n", "bay\n", "tam\n", "chin\n"};
			printf("nhap vao ba so nguyen duoi nam chu so\n");
			scanf("%d %d %d", &so_thu_nhat, &so_thu_hai, &so_thu_ba);
			if (so_thu_nhat/10000==0 && so_thu_nhat%10000==0)
			printf("%s nghin", chuc_ngan[so_thu_nhat/10000]);
			else {
			printf("%s", chuc_ngan[so_thu_nhat/10000]);
			ngan_kq = (so_thu_nhat-(10000*(so_thu_nhat/10000)));
			printf("%s", ngan[ngan_kq/1000]);
			tram_kq = ngan_kq - (1000*(ngan_kq/1000));
			printf("%s", tram[tram_kq/100]);
			chuc_kq = tram_kq - (100*(tram_kq/100));
			printf("%s", chuc[chuc_kq/10]);
			don_vi_kq = chuc_kq - (10*(chuc_kq/10));
			printf("%s\n", don_vi[(don_vi_kq-1)]);
			}
			if (so_thu_hai/10000==0 && so_thu_hai%10000==0)
			printf("%s nghin", chuc_ngan[so_thu_hai/10000]);
			else {
			printf("%s", chuc_ngan[so_thu_hai/10000]);
			ngan_kq = (so_thu_hai-(10000*(so_thu_hai/10000)));
			printf("%s", ngan[ngan_kq/1000]);
			tram_kq = ngan_kq - (1000*(ngan_kq/1000));
			printf("%s", tram[tram_kq/100]);
			chuc_kq = tram_kq - (100*(tram_kq/100));
			printf("%s", chuc[chuc_kq/10]);
			don_vi_kq = chuc_kq - (10*(chuc_kq/10));
			printf("%s\n", don_vi[(don_vi_kq-1)]);
			}

			if (so_thu_ba/10000==0 && so_thu_ba%10000==0)
				printf("%s nghin", chuc_ngan[so_thu_ba/10000]);
			else {
				printf("%s", chuc_ngan[so_thu_ba/10000]);
				ngan_kq = (so_thu_ba-(10000*(so_thu_ba/10000)));
				printf("%s", ngan[ngan_kq/1000]);
				tram_kq = ngan_kq - (1000*(ngan_kq/1000));
				printf("%s", tram[tram_kq/100]);
				chuc_kq = tram_kq - (100*(tram_kq/100));
				printf("%s", chuc[chuc_kq/10]);
				don_vi_kq = chuc_kq - (10*(chuc_kq/10));
				printf("%s", don_vi[(don_vi_kq-1)]);
				}
			break;
			}
		case 13:{
				float s,b,l;
				int y;
				printf("da chuyen sang chuong trinh tinh lai suat ngan hang\n");
				printf("nhap start, year and lai\n");
				scanf("%f%d%f", &s, &y, &l);
					b=s;
				for(int i=0; i < y; i++)
				{
			
				b=b+(l*b);
				printf("lai suat = %.2f, back = %.2f, after year %d nam\n", l, b, i+1);
				}
				printf("start = %.2f, back = %.2f, gap %.2f lan\n\n", s, b, b/s);
			break;
			}
		case 14:{
				//giai phuong trinh bac nhat mot an
				float he_so_x,he_so_tu_do;
				printf("da chuyen sang chuong trinh giai phuong trinh bac nhat mot an\n");
				printf("nhap hai he so cua phuong trinh bac nhat mot an\n");
				scanf("%f%f", &he_so_x, &he_so_tu_do);
				if (he_so_x!=0)
				printf("pt co 1 ng x = %.2f\n", -he_so_tu_do/he_so_x);	
				else 
				if (he_so_tu_do == 0)
				printf("ptvsn");
				else
				printf("ptvn");
				break;
		}
		case 15:{//mang so tu nhien
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
			break;
		}
		case 16:{		//chuong trinh dem ki tu, dem tu, dem dong
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
			break;
			}
		case 17:{
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
			break;
			}
	
		case 18:{
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
			break;
		}	
		case 19:{
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
			break;
		}			
		
		case 20:{// chuong trinh dem ki tu nhap vao
			long nc = 0;
			printf("da sang chuong trinh dem ki tu\n");
			printf("nhap ki tu vao\n");
			for (nc; getchar()!= EOF; nc++) //EOF = -1: ki tu ket thuc chuoi trong windows la ctrl + z; linex ctrl + d
			;
			/*co the dung lenh while nhu sau:
			while (getchar() != EOF)
					nc++;					*/
					
			printf("so ki tu la %ld\n\n", nc);
			break;
		}	
		case 21:{
			//ham tinh gia tri so hang thu n cua day fibonacii
			int j;
			printf("da chuyen sang chuong trinh tinh gia tri so hang thu n cua day fibonacii\n");
			printf("nhap gia tri can kiem tra\n");
			scanf("%d", &j);
			printf("gia tri so hang thu %d la %d\n\n", j, FBNCNUM(j));
			break;
		}
		case 22:{
			//ham kiem tra so nguyen to
			int y;
			printf("da chuyen sang chuong trinh kiem tra so nguyen to\n");
			printf("nhap gia tri can kiem tra (ket qua 1: la so nguyen to nguoc lai 0: khong la so nguyen to)\n");
			scanf("%d", &y);
			printf("%d so nguyen to\n\n", SNT(y)); //1: la so nguyen to // 0: khong la so nguyen to
			break;
		}
		case 23:{
			//giai giai thua voi gia tri n <= 33
			int n;
			printf("da chuyen sang chuong trinh tinh giai thua\n");
			printf("nhap gia tri n!\n");
			scanf("%d", &n);
			printf("ket qua = %d\n\n", giai_thua(n));
			break;
		}
		case 24:{
			//tong cac so tu nhien
			int x;
			printf("da chuyen sang chuong trinh tinh tong cac so tu nhien\n");
			printf("nhap gia tri cuoi cung cua tong\n");
			scanf("%d", &x);
			printf("ket qua = %d\n\n", tong(x));
			break;
		}
		case 25:{
			int ki_tu_thu=0, do_dai_ki_tu, them_tien = 0;
			char thu[600];
			char *ptthu;
			int nword_thu=0, dem_thu=0;
			printf("nhap thu vao\n");
			fflush(stdin);
			gets(thu);
			while (dem_thu==0)
			{ptthu = thu;
			dem_thu++;
			}
			//printf("%s\n", thu);
			for(int i=0; thu[i]!='\0'; i++)
			{
				if(thu[i] == ' ' || thu[i] == '\n' || thu[i] == '\t' )
				{
					nword_thu++;
					do_dai_ki_tu = ki_tu_thu;
					//printf("do dai ki tu %d", do_dai_ki_tu);
					if(do_dai_ki_tu >8) them_tien ++;
					//printf("them tien %d", them_tien);
					ki_tu_thu = 0;}
				else ki_tu_thu++;
			}
			do_dai_ki_tu = ki_tu_thu;
			//printf("do dai ki tu %d", do_dai_ki_tu);
			if(do_dai_ki_tu >8) them_tien ++;
			/*printf("them tien %d", them_tien);
			printf("so tu la %d", nword_thu+1);*/
			printf("so tu			  	  : %d\n", nword_thu +1);
			printf("so tu co kich thuong binh thuong  : %d x 100 = %2d dong\n", (nword_thu+1)-them_tien, ((nword_thu+1)-them_tien)*100);
			printf("so tu co kich thuong > 8 ki tu    : %d x 150 = %2d dong\n", them_tien, them_tien*150);
			printf("tong cong			  : 	     %4d dong\n\n", (((nword_thu+1)-them_tien)*100)+them_tien*150);
			break;
			}
		case 26:
		{

			printf("vui long chon chuong trinh:\n");
			printf("1.he phuong trinh tuyen tinh 2 an\n2.he phuong trinh tuyen tinh 3 an\n");
			int so;
			lamlai2:
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
			//printf("%f %f %f", detA, detA1, detA2);


			if (detA != 0)
			{	
				int tu_x1, mau_x1, tu_x2, mau_x2;
				if (UCLN((int)detA,(int)detA1) != 0)
				{
					tu_x1 = ((int)detA1 / UCLN((int)detA,(int)detA1));
					mau_x1 = ((int)detA / UCLN((int)detA,(int)detA1));
				}
				else
				{
					tu_x1 = (int)detA1;
					mau_x1 = (int)detA;
				}
				
				if (UCLN((int)detA,(int)detA2) != 0)
				{
					tu_x2 = ((int)detA2 / UCLN((int)detA,(int)detA2));
					mau_x2 = ((int)detA / UCLN((int)detA,(int)detA2));
				}
				else
				{
					tu_x2 = (int)detA2;
					mau_x2 = (int)detA;
				}
				
				


				printf("CO NGHIEM DUY NHAT (x1,x2) = ( %f, %f)\n", detA1/detA, detA2/detA );
				printf("\nchon\n1.doi nghiem sang phan so\n2.thoat\n");
				int phim;
				scanf("%d", &phim);
				switch (phim)
				{
				case 1: {printf("(x1,x2) = (%d/%d, %d/%d)\n\n", tu_x1, mau_x1, tu_x2, mau_x2); 	break;}
				case 2: break;
				}
			}
			else if (detA1 == 0 || detA2 ==0)
				printf("HE PHUONG TRINH VO NGHIEM");
			else printf("MATH ERROR");
			break;
			
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
				int tu_x1_cap_3, mau_x1_cap_3, tu_x2_cap_3, mau_x2_cap_3, tu_x3_cap_3, mau_x3_cap_3;
				if (UCLN((int)detA_cap_3,(int)detA1_cap_3) != 0)
				{
					tu_x1_cap_3 = ((int)detA1_cap_3 / UCLN((int)detA_cap_3,(int)detA1_cap_3));
					mau_x1_cap_3 = ((int)detA_cap_3 / UCLN((int)detA_cap_3,(int)detA1_cap_3));
				}
				else
				{
					tu_x1_cap_3 = (int)detA1_cap_3;
					mau_x1_cap_3 = (int)detA_cap_3;
				}
			
				if (UCLN((int)detA_cap_3,(int)detA2_cap_3) != 0)
				{
					tu_x2_cap_3 = ((int)detA2_cap_3 / UCLN((int)detA_cap_3,(int)detA2_cap_3));
					mau_x2_cap_3 = ((int)detA_cap_3 / UCLN((int)detA_cap_3,(int)detA2_cap_3));
				}
				else
				{
					tu_x2_cap_3 = (int)detA2_cap_3;
					mau_x2_cap_3 = (int)detA_cap_3;
				}
				
				if (UCLN((int)detA_cap_3,(int)detA3_cap_3) != 0)
				{
					tu_x3_cap_3 = ((int)detA3_cap_3 / UCLN((int)detA_cap_3,(int)detA3_cap_3));
					mau_x3_cap_3 = ((int)detA_cap_3 / UCLN((int)detA_cap_3,(int)detA3_cap_3));
				}
				else
				{
					tu_x3_cap_3 = (int)detA3_cap_3;
					mau_x3_cap_3 = (int)detA_cap_3;
				}
				
				printf("CO NGHIEM DUY NHAT (x1,x2,x3) = ( %f, %f, %f)\n", detA1_cap_3/detA_cap_3, detA2_cap_3/detA_cap_3, detA3_cap_3/detA_cap_3 );
				printf("\nchon\n1.doi nghiem sang phan so\n2.thoat\n");
				int phim_2;
				scanf("%d", &phim_2);
				switch (phim_2)
				{
				case 1: {printf("(x1,x2,x3) = (%d/%d, %d/%d, %d/%d)\n\n", tu_x1_cap_3, mau_x1_cap_3, tu_x2_cap_3, mau_x2_cap_3, tu_x3_cap_3, mau_x3_cap_3); break;}
				case 2: break;
				}
			}
			else if (detA1_cap_3 == 0 || detA2_cap_3 ==0 || detA3_cap_3 ==0)
				printf("HE PHUONG TRINH VO NGHIEM\n");
			else printf("MATH ERROR\n");
			break;
			
			/*bai tap mau
			4 1 2 | 1
			2 3 1 | 2
			5 1 4 | 0
			x1=7/15, x2=3/5, x3=-11/15
			*/
		} // case 2



	default:{ printf("khong co chuong trinh nay\nchon lai chuong trinh\n");
		goto lamlai2; 
			}
	} // switch

		break;
			}
	
	
	
	
	
	
		
		default: printf("khong co chuong trinh nay\n");										
	}
	printf("chon chuong trinh khac\n");
	goto lamlai;


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
			printf(" %.2f", *(a+i*n+j));
		}
		printf(" | %.2f", *(b+i));
		printf("\n");
	}
	printf("\n");
}

int UCLN(int a, int b)
{
	int nho, lon, uoc_chung;
	/*if (a<b){
		nho=a;
		lon=b;
	}
	else{
		nho=b;
		lon=a;
	}*/
	for(int i= -100; i < 101 ; i++)
		if(i!=0 && a % i == 0 && b % i == 0)
			uoc_chung = i;
	return uoc_chung;
	

}

//ham giai thua
int giai_thua(int n)
{
	int i=1, ket_qua=1;
	for(i; i<=n; i++)
	ket_qua *= i;
	return ket_qua;
}

//ham tinh tong cac so tu nhien
int tong(int n)
{
	int i=1, ket_qua=0;
	for(i; i<=n; i++)
	ket_qua += i;
	return ket_qua;
}

//ham kiem tra so nguyen to
bool SNT(int n)
{	int i=n;

	if (i==2 || i==3 || i==5 || i==7)
	return true;
	else	
		 if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
		return false;
		else return true;
}

//ham tinh gia tri so hang thu n cua day fibonacii
int FBNCNUM(int stt)
{
	int gia_tri;
	int i=0, j=0, k=1;
	if (i==stt) return 0;
	else if ((i+1)==stt) return 1;
	else
	for(i=2; i<=stt; i++)
		{
			gia_tri= j+k;
			
			j=k;
			k=gia_tri;

		}
	return gia_tri;
}

