
//#include <iostream>
#include "SinhVien.h"

//SinhVien::SinhVien(){};
SinhVien::SinhVien(int mssv, const string  & name, SinhVien *const next)
{
	mssv_= mssv;
	name_= name;
	next_ = next;

}
int SinhVien::Mssv() const
{
	return mssv_;
}
void SinhVien::SetMssv(int mssv)
{
	mssv_ = mssv;

}
string SinhVien::Name() const
{
	return this->name_;
}
void SinhVien::SetName(const string & name)
{
	name_ = name;
}
SinhVien* SinhVien::Next() const
{
	return next_;
}

void SinhVien::SetNext(SinhVien * const other)
{
	next_ = other;
}


SinhVien * SinhVien::AddNext(int mssv,string &name, SinhVien *const next)
{
	SinhVien* newSV = new SinhVien(mssv, name, next);
	this->next_ = newSV;
	cout << this->name_ <<"+" <<newSV ->Name() << endl;
	return newSV;
}

SinhVien::SinhVien(void)
{
}


SinhVien::~SinhVien(void)
{
}
