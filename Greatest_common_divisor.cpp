// cap so nguyen to cung nhau ,tuc 2 so i ,j dk la i khac j va co uoc vhung lon nhat la 1 tim cac cap i ,j tren doan [a,b]
//input [5,8]--- output (5,6);(5,7);(5,8)

#include <iostream>
#include <math.h>
using namespace std;
int gcd(int a, int b){
	if(b==0) return a; return gcd(b, a%b);
}
int main(){
	int a,b;cin>>a>>b;
	for(int i=a;i<=b;i++){
		for(int j=i+1;j<=b;j++){
			if(gcd(i,j)==1){
				cout<<"("<<i<<","<<j<<")"<<endl;
			}
		}
	}
}
