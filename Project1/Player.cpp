#include "Player.h"
void Player::Nhap() {
	cout << "Nhap 7 chi so nhay: ";
	for (int i = 0;i < 7;i++) {
		cin >> SucNhay[i];
	}
	cout << "Nhap 5 chi so chieu: ";
	for (int i = 0;i < 5;i++) {
		cin >> SMchieu[i];
	}
	cout << "Nhap chieu cao: ";cin >> ChieuCao;
}
int Player::get_SucNhay(int i) {
	return SucNhay[i];
}
int Player::get_SucManh(int i) {
	return SMchieu[i];
}
int Player::get_ChieuCao() {
	return ChieuCao;
}