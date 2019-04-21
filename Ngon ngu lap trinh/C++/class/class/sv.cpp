#include <iostream>
#include <string>
#include "SinhVien.h"

using namespace std;
namespace{
	string CreateSinhVienName(const string &prefix,int number)
	{
		char *mssv = new char[5];
		_itoa(number,mssv,10);
		string name = prefix;
		name.append(mssv);
		delete []mssv;
		return name;
	}
	void RemoveSinhVien(SinhVien * const previous, SinhVien * remove)
	{
		SinhVien * next = remove->Next();
		previous->SetNext(next);
		delete remove;
	}
	void RemoveSinhVienByMssv(SinhVien * const from, const int mssv)
	{
		SinhVien * previous = from;
		SinhVien * index = 0;
		for (index = from->Next(); index->Next() !=0; index = index->Next())
		{
			if (index->Mssv()==mssv)
			{
				RemoveSinhVien(previous, index);
				break;
			}
			previous = index;
		}
	}
	void RemoveFirst(SinhVien * first)
	{
		delete first;
		first = 0;
	}
	void RemoveLast(SinhVien *from)
	{
		SinhVien * last = from;
		SinhVien * previousOfLast = last;
		while (last->Next() != 0)
		{
			previousOfLast = last;
			last = last->Next();
		}
		delete last;
		previousOfLast ->SetNext(0);
	}
	void InsertAfter(SinhVien * const index, SinhVien* const insert)
	{
		SinhVien * next = index->Next();
		insert->SetNext(insert);
		insert->SetNext(next);
	}
	void InsertBefore(SinhVien * const first, SinhVien* const index, SinhVien * const insert)
	{
		SinhVien * previous = first;
		while (previous ->Next()->Mssv() != index ->Mssv())
		{
			previous->SetNext(insert);
			insert->SetNext(index);
		}
	}
	void ClearList(SinhVien * first)
	{
		SinhVien * index = first;
		while  (index->Next() !=0)
		{
			SinhVien * remove = index;
			index = index->Next();
			cout << "remove sv" <<remove->Mssv() << endl;
			delete remove;
		}
	}
}



int main()
{
	SinhVien * first = new SinhVien(1,"sv ");
	SinhVien *currentSV = first;
	for (int mssv = 2; mssv < 5 ; mssv++)
	{
		string name = CreateSinhVienName("sv ", mssv);
		currentSV = currentSV->AddNext(mssv, name);
	}
	
	return 0;
}