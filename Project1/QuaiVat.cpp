#include "QuaiVat.h"
void QuaiVat::Nhap() {
	cout << "Nhap lan luot 5 chieu quai vat: ";
	for (int i = 0;i < 5;i++) {
		cin >> chiso[i];
	}
}
QuaiVat::QuaiVat()
{
	Count_Get_Hit = 0;
}
bool QuaiVat::VuotQua(Player* dummy) {
	for (int i = 0;i < 5;i++) {
		if (dummy->get_SucManh(i) > chiso[i]) {
			Count_Get_Hit++;
		} if (Count_Get_Hit == 3) return true;
	}return false;
}