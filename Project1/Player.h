#pragma once
#include <iostream>
using namespace std;
class Player
{
	int SucNhay[7];
	int ChieuCao;
	int SMchieu[100];
public:
	int get_SucNhay(int i);
	int get_SucManh(int i);
	int get_ChieuCao();
	void Nhap();
};

