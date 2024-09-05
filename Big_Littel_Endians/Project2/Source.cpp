#include<iostream>
using namespace std;

int main() {
	int x = 1; // 0x00000001
	if (*(char*)&x) {
		/* little endian. memory image 01 00 00 00 */
		cout << "1";
	}
	else {
		/* big endian. memory image 00 00 00 01 */
		cout << "2";
	}
}