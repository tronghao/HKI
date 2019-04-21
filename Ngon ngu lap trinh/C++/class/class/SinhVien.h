#pragma once
#include <iostream>
#include <string>
using namespace std;
class SinhVien
{
private:
	int mssv_;
	string name_;
	SinhVien *next_;

public:
	SinhVien(int, const string &, SinhVien*const = 0);
	int Mssv() const;
	void SetMssv(int);
	string Name() const;
	void SetName(const string&);
	SinhVien *Next() const;
	void SetNext(SinhVien *const);
	SinhVien *AddNext(int, string &, SinhVien * const = 0);
	SinhVien(void);
	~SinhVien(void);
};

