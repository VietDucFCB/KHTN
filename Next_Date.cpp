#include <iostream>
using namespace std;

int NgayThang(int a, int b, int c){
	///int a, b, c;
	if(b>=1&&b<=12){
		if(b==1||b==3||b==5||b==7||b==8||b==10||b==12){
			if(a>=1&&a<=31){
				return a;
			}
			else{
				return 0;
			}
		}
		else if(b==4||b==6||b==9||b==11){
			if(a>=1&&a<=30){
				return a;
			}
			else{
				return 0;
			}
		}
		else if(b==2){
			if((c%4==0||c%400==0)&&c%100!=0){
				if(a>=1&&a<=29){
					return a;
				}
				else{
					return 0;
				}
			}
			else{
				if(a>=1&&a<=28){
					return a;
				}
				else{
					return 0;
				}
			}
		}
	else {
		return 0;
	}
}
int NgayTT(int a, int b, int c){
	//int a, b, c;
	if(b==1||b==3||b==5||b==7||b==8||b==10||b==12){
		if(a<=30){
			a+=1;
		}
		else{
			a=1;
			if(b==1||b==3||b==5||b==7||b==8||b==10){
				b+=1;
			}
			else if(b==12){
				b=1;
				c+=1;
			}
		}
	}
	else if(b==4||b==6||b==9||b==11){
		if(a<=29){
			a+=1;
		}
		else if(a==30){
			a=1;
			b+=1;
		}
	}
	else if(b==2){
		if((c%4==0||c%400==0)&&c%100!=0){
			if(a<=28){
				a+=1;
			}
			else if(a=29){
				a=1;
				b+=1;
			}	
		else {
			if(a<=27){
				a+=1;
			}
			else if(a=28){
				a=1;
				b+=1;
			}
		}
	}
	return 0;
}
}
int main(){
	int a, b, c;
	cin>>a>>b>>c;
	if(NgayThang(a, b, c)&&NgayTT(a, b, c)){
		cout<<a<<"/"<<b<<"/"<<c;
	}
	else {
		return 0;
	}
	return 0;
}
