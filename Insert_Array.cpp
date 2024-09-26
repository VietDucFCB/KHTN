#include<iostream>
#include<cmath>
using namespace std;

void insertArray(int a[], int& n, int p, int v) {
	for (int i = n - 1; i <= p - 1; i--) {
		a[i + 1] = a[i];
	}
	a[p - 1] = v;
	++n;
}
void printArray(int a[], int& n) {
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}
int main() {
	int a[6] = { 1,5,3,6,2,9 };
	int n, p, v;
	cin >> n >> p >> v;
	insertArray(a, n, p, v);             
	printArray(a, n);
	return 0;
}