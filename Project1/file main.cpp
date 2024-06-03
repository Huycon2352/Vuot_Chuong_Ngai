#include "Player.h"
#include "QuaiVat.h"
#include "DuongHam.h"
#include "Rung.h"
void init(int Type, ChuongNgai*&dummy) {
	switch (Type) {
	case 1:
		dummy = new Rung;
		break;
	case 2:
		dummy = new DuongHam;
		break;
	case 3:
		dummy = new QuaiVat;
		break;
	}
}
int main() {
	//Task 1
	cout << "So chuong ngai vat: ";
	int n,Type;cin >> n;
	ChuongNgai** ds = new ChuongNgai * [n];
	for (int i = 0;i < n;i++) {
		cout << "Chuong ngai vat thu " << i + 1 << " la loai: ";	// 1 la Rung, 2 la Duong Ham, 3 la Quai Vat

		cin >> Type; 
		if (Type < 0 || Type >3){

			cout << "Nhap lai loai chuong ngai\n";
			i--;continue; 
		}	init(Type, ds[i]);
		ds[i]->Nhap();
	}
	Player noob;
	noob.Nhap();
	for (int i = 0;i < n;i++) {
		if (!ds[i]->VuotQua(&noob)) {
			cout << "U lose nigga";break;
		}
		else cout << "u pass round " << i + 1 << endl;
	}
	system("pause");
}