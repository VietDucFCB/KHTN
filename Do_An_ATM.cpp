//22280012_22280027
//password: 22281227
#include<iostream>
#include<iomanip>
using namespace std;
int Menu() {
	int Lua_chon;
	system("cls");
	cout << "\t\t\tLUA CHON CUA BAN \n\n";
	cout << setfill('*');
	cout << setw(50) << left << "1.Gui tien ";
	cout << setfill('*');
	cout << " 2.Rut tien" << endl << endl;
	cout << setw(50) << left << "3.Kiem tra so tien con lai ";
	cout << " 4.Thoat" << endl << endl;
	cout << "Lua Chon Cua ban la: ";
	cin >> Lua_chon;
	system("cls");
	return Lua_chon;
}
int main() {
	long So_tien_ban_dau = 100000000;
	int Lua_chon;
	long So_tien_sau_khi_gui=0;
	long so_tien_sau_khi_rut=0;
	long Gui_tien = 0;
	long Rut_tien = 0;
	int so_lan_nhap_mk = 1;
	cout << "\\\\22280012_22280027" << endl;
	cout << "\\\\Mat khau: 123" << endl;
	cout << "\t\t\tATM XIN KINH CHAO QUY KHACH!\n\n";
	cout << "ID nguoi dung: Duc_Hoa&&Viet_Duc\n\n";
	int PassWord;
	cout << "Vui long nhap mat khau: ";
	cin >> PassWord;
	if (PassWord == 123) {
		system("cls");
		cout << "Dang nhap thanh cong!";
		Lua_chon = Menu();
		cout << endl;
		system("cls");
		while (Lua_chon != 4) {
			if (Lua_chon == 1) {
				cout << "\t\t\tGUI TIEN VAO TAI KHOAN\n " << endl;
				cout << "Nhap so tien ban muon gui: ";
				cin >> Gui_tien;
				cout << "Gui tien thanh cong!" << endl;
				system("pause");
				Lua_chon = Menu();
				So_tien_ban_dau += Gui_tien;
			}
			if (Lua_chon == 2) {
				cout << "\t\t\tRUT TIEN\n " << endl;
				cout << "Nhap so tien ban muon rut: ";
				cin >> Rut_tien;
				if (Rut_tien % 10000 != 0 || So_tien_ban_dau - Rut_tien <= 50000) {
					cout << "Khong hop le!";
					break;
				}
				else {
					cout << "Vui long nhan:\n";
					long du1, du2, du3, du4, du5;
					if (Rut_tien >= 500000)
						cout << Rut_tien / 500000 << " to tien 500000vnd\n";
					du1 = Rut_tien % 500000;
					if (du1 >= 200000)
						cout << du1 / 200000 << " to tien 200000vnd\n";
					du2 = du1 % 200000;
					if (du2 >= 100000)
						cout << du2 / 100000 << " to tien 100000vnd\n";
					du3 = du2 % 100000;
					if (du3 >= 50000)
						cout << du3 / 50000 << " to tien 50000vnd\n";
					du4 = du3 % 50000;
					if (du4 >= 20000)
						cout << du4 / 20000 << " to tien 20000vnd\n";
					du5 = du4 % 20000;
					if (du5 >= 10000)
						cout << du5 / 10000 << " to tien 10000vnd\n";
					So_tien_ban_dau -= Rut_tien;
				}
				system("pause");
				Lua_chon = Menu();
			}
			if (Lua_chon == 3) {
				cout << "\t\t\tKIEM TRA SO TIEN CON LAI\n" << endl;
				cout << "So tien con lai la: " << So_tien_ban_dau << endl;
				system("pause");
				Lua_chon = Menu();
			}
			else {
				cout << "Hien tai cua co chuc nang nay!";
				cout << endl;
				system("pause");
				Lua_chon = Menu();
			}
		}
		if (Lua_chon == 4) {
			cout << "\t\t\tTHOAT!\n" << endl;
			cout << "Hen gap lai quy khach!\n";
			return 0;
		}
	}
	else {
		while (PassWord != 123) {
			so_lan_nhap_mk++;
			system("cls");
			cout << "Mat khau sai, vui long nhap lai!\n";
			cout << "Mat khau cua ban: ";
			cin >> PassWord;
			if (PassWord == 123) {
				system("cls");
				cout << "Dang nhap thanh cong!";
				Lua_chon = Menu();
				cout << endl;
				system("cls");
				while (Lua_chon != 4) {
					if (Lua_chon == 1) {
						cout << "\t\t\tGUI TIEN VAO TAI KHOAN\n " << endl;
						cout << "Nhap so tien ban muon gui: ";
						cin >> Gui_tien;
						cout << "Gui tien thanh cong!" << endl;
						system("pause");
						Lua_chon = Menu();
					}
					So_tien_ban_dau += Gui_tien;
					if (Lua_chon == 2) {
						cout << "\t\t\tRUT TIEN\n " << endl;
						cout << "Nhap so tien ban muon rut: ";
						cin >> Rut_tien;
						if (Rut_tien % 10000 != 0 || So_tien_ban_dau - Rut_tien <= 50000) {
							cout << "Khong hop le!";
							break;
						}
						else {
							cout << "Vui long nhan:\n";
							long du1, du2, du3, du4, du5;
							if (Rut_tien >= 500000)
								cout << Rut_tien / 500000 << " to tien 500000vnd\n";
							du1 = Rut_tien % 500000;
							if (du1 >= 200000)
								cout << du1 / 200000 << " to tien 200000vnd\n";
							du2 = du1 % 200000;
							if (du2 >= 100000)
								cout << du2 / 100000 << " to tien 100000vnd\n";
							du3 = du2 % 100000;
							if (du3 >= 50000)
								cout << du3 / 50000 << " to tien 50000vnd\n";
							du4 = du3 % 50000;
							if (du4 >= 20000)
								cout << du4 / 20000 << " to tien 20000vnd\n";
							du5 = du4 % 20000;
							if (du5 >= 10000)
								cout << du5 / 10000 << " to tien 10000vnd\n";
						}
						system("pause");
						Lua_chon = Menu();
					}
					So_tien_ban_dau -= Rut_tien;
					if (Lua_chon == 3) {
						cout << "\t\t\tKIEM TRA SO TIEN CON LAI\n" << endl;
						cout << "So tien con lai la: " << So_tien_ban_dau << endl;
						system("pause");
						Lua_chon = Menu();
					}
					else {
						cout << "Hien tai cua co chuc nang nay!";
						cout << endl;
						system("pause");
						Lua_chon = Menu();
					}
				}
				if (Lua_chon == 4) {
					cout << "\t\t\tTHOAT!\n" << endl;
					cout << "Hen gap lai quy khach!\n";
					return 0;
				}
			}
			if (so_lan_nhap_mk == 3) {
				cout << "Da qua so lan nhap, thoat!";
				return 0;
			}
		}
	}
	system("pause");
	return 0;
}