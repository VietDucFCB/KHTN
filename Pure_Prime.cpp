//mot so duoc coi la thuan nguyen to neu no la so nguyen to tat ca chu so laf so nguyen to va tong cua no cung la so nguyen to ,
// bai toan dat ra dem xem trong 1 doan cho truoc co bao nhieu so laf so thuan nguyen to
//input; 2 so nguyen cach nhau 1 khoang trong khong vuot qua 9 chu so
//output:viet ra so luong so th8an nguyen to trong khoang do 
// vd :input 2 [23,199] [2345,6789] out put : ___ 1 15
#include <iostream>
#include<math.h>
using namespace std;

//int nguyento(int n){
	//for(int i=2;i<=sqrt(n);i++){
		//if(n%i==0) return 0;} return n>1;
	//}
int prime[1000000];
void SangNto(){
	for(int i=0; i<=(pow(10, 6)); i++){
		prime[i]=1;
		prime[0]=prime[1]=0;
	}
	for(int i=2; i<=sqrt(pow(10, 6)); i++){
		if(prime[i]){
			for(int j=i*i; j<=(pow(10, 6)); j+=i){
				prime[j]=0;
			}
		}
	}
}
int kiemtra(int n){
	while(n){
		int cnt=n%10;
		if(cnt!=2&&cnt!=3&&cnt!=5&&cnt!=7) return 0; n/=10;} return 1;
	}
int tong(int n){
		int res=0;
	while(n){
		res+=n%10 ; 
	    n/=10;
	} 
	return 1;
}
// 2 23 199   2345 6789
int main(){
	SangNto();
	int t;cin>>t;
	while(t--){
		int a,b;cin>>a>>b;
		for(int i=a;i<=b;i++){
			if(kiemtra(i)&&tong(i)){
			cout<<i<<" ";
			} 
		}
	}
	return 0;
}
