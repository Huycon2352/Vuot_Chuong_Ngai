#pragma once
#include "ChuongNgai.h"
class QuaiVat:public ChuongNgai
{
	int Count_Get_Hit;
public:
	QuaiVat();
	void Nhap();
	bool VuotQua(Player*);
};
