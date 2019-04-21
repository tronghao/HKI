#include <iostream>
#include <string>



using namespace std;
class lop_hoc_lap_trinh
{

public:
	lop_hoc_lap_trinh(){
		name = "lop hoc lap trinh";
	}
	lop_hoc_lap_trinh(string TenGi){
		name = TenGi;
	}
public: void setname(string TenGi)
		{
			name = TenGi;
		}
		string getname()
		{
			return name;
		}
private:
	string name;
};

void main()
{	
	int n;
	cout << "nhap vao n\n";
	cin >> n;
	int * mangmotchieu = new int[n];
	for (int i=0; i<=n ; i++)
	{
		mangmotchieu[i]=i;
		cout << mangmotchieu[i] <<" ";
	}
	cout << endl;
	delete [] mangmotchieu;
	cout << mangmotchieu;

	lop_hoc_lap_trinh lop;
	cout << lop.getname() << endl; 
	lop_hoc_lap_trinh lop2("lop hoc thu 2");
	cout << lop2.getname() << endl; 



	int tuoi;
	cout <<"ban bao nhieu tuoi\n";
	cin >> tuoi;
	cout << "tuoi ban la " << tuoi << endl;

	string ten;
	cout <<"ten ban la gi\n";
	fflush(stdin);
	getline(cin, ten);
	cout << "ten ban la " << ten <<"\n";
	system("pause");
}