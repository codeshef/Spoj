#include<cstdio>
#include<numeric>
#include<iostream>
using namespace std;

bool check(int *p ,int &n){

    for(int i=1;i<n;i++)
     if((*(p+i))!=(*p))
        return false;
     return true;

}

int main(){

        int t,s,c,n,sum;
         cin>>t;
         while(t--){
           cin>>s>>c;
           int a[s+c+1],start[101];

           for(int i=0;i<s;i++)
                cin>>a[i];
                
            n=s;
           while(!check(a,n)){

                  start[n] = a[0];
                   for(int i=0;i<n-1;i++)
                     a[i]=a[i+1]-a[i];
                       n--;

                }

             for(int i=n;i<n+c;i++)
               a[i]=a[0];
              for(int i=n;i<s;i++){
               sum=accumulate(a,a+i+c,0)+start[i+1];

                 for(int j=i+c;j>=0;j--){

                       a[j]=sum;
                        if(j>0)
                        sum-=a[j-1];

                     }
                  }
                for(int i=s;i<s+c;i++){
                         
                          if(i>s)
                       cout<<" ";
                       cout<<a[i];

                    }
                  cout<<endl;
             }

           return 0;
}
