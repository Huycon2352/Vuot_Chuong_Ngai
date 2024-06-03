#pragma once
#include "ChuongNgai.h"
class DuongHam:public ChuongNgai
{
private: int n; //n: so khuc duong ham
public:
	void Nhap();
	bool VuotQua(Player*);
};


