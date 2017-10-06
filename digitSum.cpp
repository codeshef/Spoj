#include<bits/stdc++.h>
#define ll long long 
using namespace std;

ll digitSum(ll a){

    if(a/10==0)

     return a*(a+1)/2;

   ll n=a,i=0,p;

   while(n/10!=0){

        i++;
        n/=10;

         }

     p = pow(10,i);
      return ((n*45*i*p/10)+(n*(n-1)*p/2)+ n*(a%p+1)+digitSum(a%p));


 

}


int main(){

       ll a,b;
 
       cin>>a>>b;

       while(a!=-1 || b!=-1){

         cout<< digitSum(b)-digitSum(a-1)<<endl;
             cin>>a>>b;
}
 
      


  return 0;
}
