#include<iostream>
#include<cmath>
#include<string>

using namespace std;

void DecQuaBinKDQ(int n);
int DecQuaBinDQ(int n);
int GiaiThuaKDQ(int n);
int GiaiThuaDQ(int n);
double ToHopDeQuy(int n, int k);
double ToHopKhongDeQuy(int n, int k);
int ChieuDai1Chuoi(string s);

class Chuoi_Xn_Yn {
private:
	double Xn;
	double Yn;
public:
	Chuoi_Xn_Yn(double Xn, double Yn) : Xn(Xn), Yn(Yn) {}
	double getX() const { return Xn; }
	double getY() const { return Yn; }
};

Chuoi_Xn_Yn TinhChuoi(Chuoi_Xn_Yn chuoi, int n);

int main()
{
	int n;
	cout << "Nhap n thap phan muon chuyen qua nhi phan: ";
	cin >> n;
	cout << "Chuyen thap phan qua nhi phan khong su dung de quy la: ";
	DecQuaBinKDQ(n);
	cout << endl;
	cout << "Chuyen thap phan qua nhi phan su dung de quy la: " << DecQuaBinDQ(n) << endl;
	system("pause");
	system("cls");

	int k;
	cout << "Nhap to hop chap n cua k: ";
	cin >> n >> k;
	if (n < k)
	{
		cout << "Error!" << endl;
	}
	else
	{
		cout << "To hop su dung de quy la: " << ToHopDeQuy(n, k) << endl;
		cout << "To hop khong su dung de quy la: " << ToHopKhongDeQuy(n, k);
	}
	system("pause");
	system("cls");

	string s;
	cout << "Nhap chuoi ban muon dem: ";
	cin.ignore();
	getline(cin, s);
	cout << "So ki tu cua chuoi la: " << ChieuDai1Chuoi(s) << endl;
	system("pause");
	system("cls");

	Chuoi_Xn_Yn Tai_3(0, 0);
	Tai_3 = TinhChuoi(Tai_3, 3);
	cout << "Chuoi Xn_Yn den phan tu so 3 la: " << Tai_3.getX() << ", " << Tai_3.getY() << endl;

	Chuoi_Xn_Yn chuoi(0, 0);
	cout << "Nhap n de tinh chuoi: ";
	cin >> n;
	chuoi = TinhChuoi(chuoi, n);
	cout << "Chuoi Xn_Yn den phan tu thu " << n << " la: " << chuoi.getX() << ", " << chuoi.getY() << endl;
	system("pause");
	system("cls");


	return 0;
}

void DecQuaBinKDQ(int n)
{
	int a[100]{};
	int x = 0;
	while (n)
	{
		a[x] = n % 2;
		n /= 2;
		x++;
	}

	for (int i = x-1; i >= 0; i--)
	{
		cout << a[i];
	}
}

int DecQuaBinDQ(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return (n % 2) + 10 * DecQuaBinDQ(int(n / 2));
	}
}

int GiaiThuaKDQ(int n)
{
	int s = 1;
	if (n == 0 || n == 1)
	{
		return 1;
	}
	for (int i = 2; i <= n; i++)
	{
		s *= i;
	}
	return s;
}

int GiaiThuaDQ(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return n * GiaiThuaDQ(n - 1);
	}
}

double ToHopDeQuy(int n, int k)
{
	int c = 0;
	c = GiaiThuaDQ(n) / (GiaiThuaDQ(n - k) * GiaiThuaDQ(k));
	return c;
}

double ToHopKhongDeQuy(int n, int k)
{
	int c = 0;
	c = GiaiThuaKDQ(n) / (GiaiThuaKDQ(n - k) * GiaiThuaKDQ(k));
	return c;
}

int ChieuDai1Chuoi(string s)
{
	if (s.empty())
	{
		return 0;
	}
	else
	{
		return 1 + ChieuDai1Chuoi(s.substr(1));
	}
}

Chuoi_Xn_Yn TinhChuoi(Chuoi_Xn_Yn chuoi, int n) {
	double Xn, Yn;
	if (n == 0) {
		Xn = 1;
		Yn = 2;
	}
	else {
		Chuoi_Xn_Yn chuoi_truoc = TinhChuoi(chuoi, n - 1);
		Xn = chuoi_truoc.getX() / 3 + chuoi_truoc.getY() / 2 + 27;
		Yn = chuoi_truoc.getX() / 5 + chuoi_truoc.getY() / 7 + 11;
	}
	return Chuoi_Xn_Yn(Xn, Yn);
}



