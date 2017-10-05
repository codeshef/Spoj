#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
 

          ll t,n;
          cin>>t;

         while(t--){

             ll ans=0,i;
             cin>>n;

           for(i=1;i*i<n;i++)

                if(n%i==0)
                  ans+=i+n/i;

                if(i*i==n)
                  ans+=i;

               ans-=n;

             cout<<ans<<endl;

           }


  return 0;
}
