#include<iostream>
#include<math.h>
using namespace std;
int prime[100000];
void hcmus(){

for(int i=1;i<=100000;i++)
	prime[i]=i;
for(int i=2;i<=sqrt(100000);i++){
	if(prime[i]==i){
		for(int j=i*i;j<=100000;j+=i){
		
			if(prime[j]==j)
			prime[j]=i;}
		  }
	    }
      }
    
 
int main(){
	hcmus();
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=1;i<=n;i++){
			cout<<prime[i]<<endl;
		}
	}
}
