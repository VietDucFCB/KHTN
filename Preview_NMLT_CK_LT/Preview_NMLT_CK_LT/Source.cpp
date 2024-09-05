#include<iostream>
using namespace std;

long long power(int x, int y) {
	int s = x;
	for (int i = 1; i < y; i++) {
		s = x * s;
	}
	return s;
}
int main() {
	int x;
	int y;
	cin >> x >> y;
	cout<<power(x, y);
	return 0;
}