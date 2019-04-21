#include <stdio.h>

int main()
{
	
	//size of xem kich thuoc cua int, long...
	size_t sizeint = sizeof(int);
	printf("kich thuoc cua int la %d\n", sizeint);
	
	/* hoac co the khai bao bi danh nhu sau
	typedef int so_nguyen;
	size_t sizeso_nguyen = sizeof(so_nguyen);
	printf("kich thuoc cua int la %d\n", sizeso_nguyen);*/
	
	size_t sizechar = sizeof(char);
	printf("kich thuoc cua char la %d\n", sizechar);
	size_t sizeshort = sizeof(short);
	printf("kich thuoc cua short la %d\n", sizeshort);
	size_t sizelong = sizeof(long);
	printf("kich thuoc cua long la %d\n", sizelong);
	size_t sizefloat = sizeof(float);
	printf("kich thuoc cua float la %d\n", sizefloat);
	size_t sizedouble = sizeof(double);
	printf("kich thuoc cua double la %d\n", sizedouble);
	size_t sizelonglong = sizeof(long long);
	printf("kich thuoc cua longlong la %d\n", sizelonglong);
	
	
	
	
	
	
	
	
	return 0;
	
}
