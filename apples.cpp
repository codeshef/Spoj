#include<bits/stdc++.h>
using namespace std;

int main(){

          int t;
          cin>>t;

          while(t--){

          int nfriends,kgApple,i,j;

           cin>>nfriends>>kgApple;

            int price[kgApple+1];

            for(i=1;i<=kgApple;i++)

                 cin>>price[i];
             int ans[kgApple+1];

             for(i=1;i<=kgApple;i++){

                   ans[i] =price[i];
                   }
           

               for(i=2;i<=kgApple;i++){

                 for(j=1;j<i;j++){


                      if(price[i-j]==-1 || ans[j]==-1)
                        continue;

                         if(ans[i]==-1)

                            ans[i]=ans[j]+price[i-j];
                         else
                          ans[i]=min(ans[i],ans[j]+price[i-j]);

                     }

                 }

                  if(kgApple==0)
                     cout<<"0"<<endl;
                  else
                   cout<<ans[kgApple]<<endl;

           }


 return 0;
}
