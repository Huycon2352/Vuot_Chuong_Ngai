#pragma once
#include <iostream>
using namespace std;
#include "Player.h"
class ChuongNgai
{
protected:
	int chiso[100];
public:
	virtual void Nhap() = 0;
	virtual bool VuotQua(Player*) = 0;
	//friend class Player;
};

