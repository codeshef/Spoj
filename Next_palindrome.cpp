#include<bits/stdc++.h>
using namespace std;

string addOne(string s){
	
	reverse(s.begin(),s.end());
	char a[1000000];
	int j=0,carry=0,ans=0;
	for(int i=0;i<s.size();i++){
		
		if(i==0)
		ans=1+s[i]-'0';
		else
		ans = carry+s[i]-'0';
		a[j++] = ans%10+'0';
		carry = ans/10;
	}
	while(carry!=0){
		
		a[j++] = carry%10+'0';
		carry = carry/10;
	}
	
	a[j]=0;
	string result(a);
	reverse(result.begin(),result.end());
	return result;
	
}
void printAfterAddingOne(string s)
{
    int len=s.size();
    string firstHalf,secondHalf;
    if(len%2==0)
        firstHalf=s.substr(0,len/2);
    else firstHalf=s.substr(0,len/2+1);
    string modified= addOne(firstHalf);
    if(len%2==0){
        secondHalf=modified;
        reverse(secondHalf.begin(),secondHalf.end());
        cout<<modified<<secondHalf<<endl;
    }
    else{
        secondHalf=modified.substr(0,modified.size()-1);
        reverse(secondHalf.begin(),secondHalf.end());
        cout<<modified<<secondHalf<<endl;
 
    }
}

void all9(string s){
	
	int len = s.size();
	cout<<"1";
	for(int i=1;i<len;i++)
	cout<<"0";
	cout<<"1"<<endl;
	
}
void printPalindrome(string s){
	
	int len = s.size();
	string firstHalf;
	string secondHalf;
	if(len%2==0){
		
		firstHalf = s.substr(0,len/2);
		secondHalf = firstHalf;
		reverse(secondHalf.begin(),secondHalf.end());
	}else{
		
		firstHalf = s.substr(0,len/2+1);
		secondHalf = firstHalf.substr(0,firstHalf.size()-1);
		reverse(secondHalf.begin(),secondHalf.end());
	}
	cout<<firstHalf<<secondHalf<<endl;
}
int main(){
	
	int t;
	cin>>t;
	while(t--){
		
		string s;
		cin>>s;
		bool isAllNine = false;
		int len = s.size();
		int leftptr,rightptr;
		if(len%2==0){
			
			rightptr = len/2;
			leftptr = rightptr-1;
		}else{
			leftptr=rightptr=len/2;
		}
		int flag=-1;
		
		for(int i=0;i<len;i++){
			if(s[i]!='9'){
				flag=0;
				break;
			}
		}
		
		if(flag==-1){
			
			all9(s);
			isAllNine=true;
		}
		
		int count=0;
		while(leftptr>=0 && rightptr<len){
			
			if(s[leftptr] < s[rightptr]){
				
				flag=1;
				break;
			} else if(s[leftptr] > s[rightptr]){
				
				flag=2;
				break;
				
			}else
			count++;
			leftptr--,rightptr++;
		}
		
		if(len%2==0 && len/2==count && !isAllNine) flag=1;
		if(len%2==1 && len/2+1==count && !isAllNine) flag=1;
		
		if(flag==2)
		printPalindrome(s);
		if(flag==1)
		printAfterAddingOne(s);
		
		
	}
	return 0;
}
