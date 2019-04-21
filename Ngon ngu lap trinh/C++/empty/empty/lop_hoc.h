#pragma once
#include <iostream>
#include <string>

using namespace std;
class lop_hoc
{
public:
	lop_hoc()
	{name = "lop hoc lap trinh";}
	~lop_hoc(string TenGi)
	{name = TenGi;}
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

