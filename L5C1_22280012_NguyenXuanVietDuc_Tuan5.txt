#include<iostream>
#include<cmath>

using namespace std;

double Recursion_B1(int n);
double Recursion_B2(int n);
int Fibo(int n);
int DayDaoNguoc(int n);
int DayDaoNguoc(int n); 
int DemSo(int n);
long long Dec_To_Bin(int n);
int UCLN(int a, int b);
int BCNN(int a, int b);
int LuyThua(int m, int n);


int main()
{
	int n;

	cout << "Nhap n muon tinh tong chuoi:";
	cin >> n;
	cout << "Tong chuoi S1 la: ";
	cout << Recursion_B1(n) << endl;

	cout << "Tong chuoi S2 la: ";
	cout << Recursion_B2(n)<<endl;
	system("pause");
	system("cls");

	cout << "Nhap n de in day fibo dau tien: ";
	cin >> n;
	cout << "Day n so fibonacci dau tien la: ";
	for (int i = 1; i <= n; i++)
	{
		cout << Fibo(i) << " ";
	}
	cout << endl;
	system("pause");
	system("cls");

	cout << "Nhap day muon dao nguoc: ";
	cin >> n;
	cout<<"So dao nguoc cua n la:" << DayDaoNguoc(n) << endl;
	system("pause");
	system("cls");
	
	cout << "Nhap so muon dem: ";
	cin >> n;
	cout << "n co so chu so la: " << DemSo(n) << endl;
	system("pause");
	system("cls");

	cout << "Nhap so thap phan muon chuyen qua nhi phan: ";
	cin >> n;
	cout << "n sau khi chuyen nhi phan la: " << Dec_To_Bin(n) << endl;
	system("pause");
	system("cls");

	int a, b;
	cout << "nhap 2 so a va b: ";
	cin >> a >> b;
	cout << "Uoc chung lon nhat cua a va b la: " << UCLN(a, b) << endl;
	cout << "Boi chung nho nhat cua a va b la: " << BCNN(a, b) << endl;
	system("pause");
	system("cls");

	int m;
	cout << "Nhap m va n de tinh luy thua: ";
	cin >> m >> n;
	cout << "Luy thua cua m mu n la: " << LuyThua(m, n)<<endl;
	return 0;
}

double Recursion_B1(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return 1.0 / n + Recursion_B1(n - 1);
	}
}    

double Recursion_B2(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return Recursion_B2(n - 1) + n * (n + 1);
	}
}

int Fibo(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return Fibo(n - 2) + Fibo(n - 1);
	}
}

int DayDaoNguoc(int n)
{
	if (n<=9)
	{
		return n;
	}
	else
	{
		return (n % 10) * pow(10, floor(log10(n))) + DayDaoNguoc(n / 10);
	}
}

int DemSo(int n)
{
	if (n <= 9)
	{
		return 1;
	}
	else
	{
		return 1 + DemSo(n / 10);
	}
}

long long Dec_To_Bin(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{ 
		return (n % 2) + 10 * Dec_To_Bin(int(n / 2));
	}
}

int UCLN(int a, int b)
{
	if (b==0)
	{
		return a;
	}
	else
	{
		return UCLN(b, a % b);
	}
}

int BCNN(int a, int b)
{
	return a * b / UCLN(a, b);
}

int LuyThua(int m, int n)
{
	if (n == 0)
	{
		return 1;
	}
	if (n == 1)
	{
		return m;
	}
	else
	{
		return m * LuyThua(m, n - 1);
	}
}