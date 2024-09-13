#include<iostream>
#include<math.h>
using namespace std;

int SoChinhPhuong(int a){
	if(a<1)
		return 0;
	else if(int(sqrt(a))==sqrt(a))
		return 1;
	return 0;
}
int main(){
	int a;
	cin>>a;
	cout<<SoChinhPhuong(a);
	return 0;
}
