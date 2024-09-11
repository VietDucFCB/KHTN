#include<iostream>
#include<cstring>
#include<fstream>
#include<string>
#include<cctype>
using namespace std;

int main() {
	const char max = 100;
	ifstream file;

	file.open("C:\\Users\\ASUS\\OneDrive\\Máy tính\\list_student.txt", ios::in);

	if (!file.is_open()) {
		cout << "Khong the mo file";
		return 0;
	}

	string a[max][max];
	string line;
	int i = 0;

	while (getline(file, line)) {
		size_t pos = 0;
		string temp_str;
		int j = 0;
		while ((pos = line.find(" ")) != string::npos) {
			temp_str = line.substr(0, pos);
			a[i][j] = temp_str;
			line.erase(0, pos + 1);
			j++;
		}
		a[i][j] = line;
		cout << a[i][j];
		i++;
	}

	file.close();

	return 0;
}
