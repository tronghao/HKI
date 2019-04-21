#include <iostream>
#include <string>
using namespace std;

class Lophoclaptrinh {
public: 
private:
	string name;
};

void main()
{	
	// class
	Lophoclaptrinh lop_hoc;
	lop_hoc.name <<"lop hoc lap trinh c++";

	// lenh cout va cin
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