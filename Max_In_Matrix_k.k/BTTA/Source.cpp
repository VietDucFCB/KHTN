#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	const int M = 100;
	int a[M][M];
	int n, m, k;
	int MaxS = 0;
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i <= n - k; i++) {
		for (int j = 0; j < m - k; j++) {
			int s = 0;
			for (int x = i; x < i + k; x++) {
				for (int y = j; y < j + k; y++) {
					s += a[x][y];
				}

			}
			MaxS = max(MaxS, s);
		}
	}
	cout << MaxS;
}