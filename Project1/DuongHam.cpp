#include "DuongHam.h"
void DuongHam::Nhap() {
	cout << "Bao nhieu khuc duong ham: ";cin >> n;
	cout << "Cac khuc lan luot la: ";
	for (int i = 0;i < n;i++) {
		cin >> chiso[i];
	}
}
bool DuongHam::VuotQua(Player* dummy) {
	for (int i = 0;i < n;i++) {
		if (dummy->get_ChieuCao() > chiso[i]) return false;
	}return true;
}