#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include <direct.h> 
#include <stdlib.h>

using namespace std;

void Duong_Dan(char* link) {
	_getcwd(link, _MAX_PATH);
}

int main() {
	char link[_MAX_PATH];
	
	Duong_Dan(link);
	
	fstream File;
	string ten_file;
	
	int Kich_co;
	cout << "Nhap duong dan file: ";
	cin >> ten_file;
	
	cout << "Nhap dung luong muon chia (don vi B): ";
	cin >> Kich_co;
	
	File.open(ten_file.c_str(), ios::in | ios::binary);
	File.seekg(0, ios::end);
	
	int size = File.tellg();
	File.seekg(0, ios::beg);
	
	for (int i = 1; i <= (size / Kich_co); i++) 
	{
		string ten_tep = ten_file;
		string dem_so;
		stringstream out;
		out << "." << i;
		dem_so = out.str();
		ten_tep.append(dem_so);
		fstream tep_nho;
		tep_nho.open(ten_tep.c_str(), ios::out | ios::binary);
		
		if (File.tellg() < (size - (size % Kich_co))) 
		{
			tep_nho.write(reinterpret_cast<char*>(&File), Kich_co);
			tep_nho.close();
			File.seekg(Kich_co, ios::cur);
		}
		else
		{
			tep_nho.write(reinterpret_cast<char*>(&File), (size % Kich_co));
			tep_nho.close();
		}
		cout << "Tep " << ten_tep << endl;
	}
	File.close();
	return 0;
}
