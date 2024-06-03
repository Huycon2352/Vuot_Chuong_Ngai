#include "Rung.h"
void Rung::Nhap() {
	cout << "Tao: ";cin >> ChiSoTao;
	cout << "Nhap chieu cao 7 cay lan luot la: "; for (int i = 0;i < 7;i++) cin >> chiso[i];
}
bool Rung::VuotQua(Player* dummy) {
	for (int i = 0;i < 7;i++) {
		if ((dummy->get_SucNhay(i) + ChiSoTao) < chiso[i]) {
			return false;
		}
	}return true;
}