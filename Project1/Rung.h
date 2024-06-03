#pragma once
#include "ChuongNgai.h"

class Rung:public ChuongNgai
{
private: int ChiSoTao;
public:
	void Nhap();
	bool VuotQua(Player*);
};
