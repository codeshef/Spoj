// implementation of Karatsuba algorithm

#include<bits/stdc++.h>
using namespace std;

void multiply(string a,string b){

  vector<int> result(a.size()+b.size(),0);

  for(int i=a.size()-1;i>=0;i--){

    for(int j=b.size()-1;j>=0;j--){

    
       result[i+j+1]+=(b[j]-'0')*(a[i]-'0');
    
       }

   }

 for(int i=a.size()+b.size();i>=0;i--){

     if(result[i]>=10){

            result[i-1]+=result[i]/10;
            result[i]%=10;

       }

  }
 for(int i=0;i<a.size()+b.size();i++){
 
    cout<<result[i];

   }
  cout<<endl;

}

int main(){
    
         int t;
         while(t--){

           string n1,n2;
           cin>>n1>>n2;
           multiply(n1,n2);

       }


     return 0;
}
