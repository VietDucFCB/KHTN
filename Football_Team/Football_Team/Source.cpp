#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct DOIBONG {
    string MaDoiBong;
    string TenDoiBong;
    vector<string> CauThu[11];
};

void getInput(vector<DOIBONG>& FC, int n);
void getOutput(vector<DOIBONG> FC, int n);

int main()
{
    vector<DOIBONG> FC;
    int n;
    cout << "So luong doi bong muon nhap: ";
    cin >> n;
    FC.resize(n);

    getInput(FC, n);
    system("cls");
    getOutput(FC, n);

    return 0;
}



void getInput(vector<DOIBONG>& FC, int n)
{
    for (int i = 0; i < n; i++)
    {
        system("cls");
        cout << "Nhap thong tin doi bong " << i + 1 << endl;
        cout << "Nhap ma doi bong: ";
        cin >> FC[i].MaDoiBong;
        cout << "Nhap ten doi bong: ";
        cin.ignore();
        getline(cin, FC[i].TenDoiBong);
        FC[i].CauThu->resize(3);
        for (int j = 0; j < 3; j++)
        {
            string cauthu;
            cout << "Nhap cau thu " << j + 1 << ": ";
            getline(cin, cauthu);
            FC[i].CauThu[j].push_back(cauthu);
        }
        system("pause");
    }
}


void getOutput(vector<DOIBONG> FC, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << FC[i].MaDoiBong << " " << FC[i].TenDoiBong << endl;
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < FC[i].CauThu[j].size(); k++) 
            {
                cout << FC[i].CauThu[j][k];

            }
            cout << endl;
        }
        cout << "---------------------";
        cout << endl;
    }
}
