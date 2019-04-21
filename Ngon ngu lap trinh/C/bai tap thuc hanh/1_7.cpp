#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	printf("giai phuong trinh ax^2+bx+c=0\n");
	printf("nhap vao he so a, b, c\n");
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	float delta = (pow(b,2)-4*a*c);
	if(delta >0) printf("phuong trinh co hai nghiem x1 = %f vaf x2 = %f", ((-b+sqrt(delta))/(2*a)), ((-b-sqrt(delta))/(2*a)));
	else if(delta =0) printf("phuong trinh co nghiem kep x= %f", -b/(2*a));
	else printf ("phuong trinh vo nghiem");
	getch();
	return 0;
}
