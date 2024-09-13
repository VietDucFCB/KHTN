#include<iostream>
using namespace std;
void KiTu(char n){
	if(n>='a'&&n<='z')
		cout<<"Day la ki tu in thuong";
	else if(n>='A'&&n<='Z')
		cout<<"Day la ki tu in hoa ";
	else if(n>='0'&&n<='9')
		cout<<"Day la ki tu so";
	else 
		cout<<"Day la ki tu dac biet";
}
int main(){
	char n;
	cout<<"Nhap ki tu: ";
	cin>>n;
	KiTu(n);
	return 0;
}
