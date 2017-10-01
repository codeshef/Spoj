#include<bits/stdc++.h>
using namespace std;

long int  reverse(long int n){
	
	int d;
	long int rev=0;
	while(n){
		
		d=n%10;
		rev=rev*10+d;
		n=n/10;
	}
	return(rev);
}
int main(){
	
	long int t;
	cin>>t;
	while(t--){
		long int n,m;
		cin>>n>>m;
		cout<<reverse(reverse(n)+reverse(m))<<endl;
	}
}
