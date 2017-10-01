#include<bits/stdc++.h>
using namespace std;

long long int largestPower(long long int n){
	
	long long int x=0;
	while(n){
		x+=n/5;
		n=n/5;
	}
	return x;
}
int main(){
	
	long long int t;
	cin>>t;
	while(t--){
		
		long long int n;
		cin>>n;
		cout<<largestPower(n)<<endl;
	}
	
	return 0;
}
