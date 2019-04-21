#include <iostream>
using namespace std;

void main()
{
	int chieu_dai, chieu_rong, dien_tich, chu_vi;
	cout <<"da chuyen sang chuong trinh tinh dien tich va chu vi\n";
	cout <<"nhap vao chieu dai va chieu rong\n";
	cin >> chieu_dai >> chieu_rong;
	dien_tich = chieu_dai * chieu_rong;
	chu_vi = (chieu_dai+chieu_rong)*2;
	cout <<"dien tich la " << dien_tich <<" va chu vi la " << chu_vi << endl;

	system("pause");
}