#pragma once
#include <iostream>
#include <string>
using namespace std;
class lop_hoc_lap_trinh
{

public:
	lop_hoc_lap_trinh(){
		name = "lop hoc lap trinh";
	}
	~lop_hoc_lap_trinh(string TenGi){
		name = TenGi;
	}
public: string setname(string TenGi)
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

