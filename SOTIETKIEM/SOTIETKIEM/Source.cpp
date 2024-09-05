#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct NGAYMOSO {
    int Ngay;
    int Thang;
    int Nam;
};

struct SOTIETKIEM {
    string ID;
    string LoaiTK;
    string TenKhachHang;
    int CMND;
    NGAYMOSO NgayMoSo;
    double SoTienGui;
};

void getInput(vector<SOTIETKIEM>& STK, int n);

int main()
{
    int n;
    cout << "Nhap so luong khach hang muon nhap thong tin: ";
    cin >> n;
    vector<SOTIETKIEM> STK;
    STK.resize(n);

    getInput(STK, n);
    system("cls");
    getOutput(STK, n);


    return 0;
}

void getInput(vector<SOTIETKIEM>& STK, int n)
{
    for (int i = 0; i < n; i++)
    {
        system("cls");
        cout << "Nhap thong tin khach hang thu " << i + 1 << endl;
        cout << "Nhap ma so khach hang: ";
        getline(cin, STK[i].ID);
        cin.ignore();
        cout << "Nhap loai tai khoan khach hang muon mo: ";
        getline(cin, STK[i].LoaiTK);
        cin.ignore();
        cout << "Nhap ten khach hang: ";
        getline(cin, STK[i].TenKhachHang);
        cin.ignore();
        cout << "Nhap CMND khach hang: ";
        cin >> STK[i].CMND;
        cout << "Nhap ngay mo so (dd mm yyyy): ";
        cin >> STK[i].NgayMoSo.Ngay;
        cin >> STK[i].NgayMoSo.Thang;
        cin >> STK[i].NgayMoSo.Nam;
        cout << "Nhap so tien khach hang muon gui: ";
        cin >> STK[i].SoTienGui;
    }
}

void getOutput(vector<SOTIETKIEM> STK, int n)
{
    cout << "Danh sach khach hang:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Ma so khach hang: " << STK[i].ID << endl;
        cout << "Loai tai khoan: " << STK[i].LoaiTK << endl;
        cout << "Ten khach hang: " << STK[i].TenKhachHang << endl;
        cout << "CMND: " << STK[i].CMND << endl;
        cout << "Ngay mo so: " << STK[i].NgayMoSo.Ngay << "/" << STK[i].NgayMoSo.Thang << "/" << STK[i].NgayMoSo.Nam << endl;
        cout << "So tien gui: " << STK[i].SoTienGui << endl;
        cout << endl;
    }
}
