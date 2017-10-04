#include<bits/stdc++.h>
#define ll long long
using namespace std;

void computeLPS(char a[],ll lps[],ll n){

      lps[0] =0;
      ll len=0;
      ll i=1;

      while(i<n){

         if(a[len]==a[i]){

              len++;
              lps[i]=len;
               i++;
          }else{

                  if(len!=0){

                     len = lps[len-1];
                      }else{

                           lps[i]=0;
                            i++;
                            }


                 }
         

      }

}


int main(){
       
              ll n;
           while(scanf("%lld",&n)!=EOF){

              char a[n];
           
              scanf("%s",a);
             
              char s[1000001];
    
              scanf("%s",s);
              
              ll lps[n];

              ll n1 = strlen(s);

               // finding  longest prefix suffix values of pattern
              computeLPS(a,lps,n);

               ll i=0,j=0;
                
               bool f=true;

                while(i<n1){


                  if(s[i]==a[j]){
                       
                        i++;
                        j++;
                        }

                      if(j==n){

                          f=false;
                          printf("%lld\n",i-j);

                           j=lps[j-1];

                         }else if(i<n1 && a[j]!=s[i]){

                                 if(j!=0){
                                   
                                     j=lps[j-1];

                                        }else{

                                            i++;
                                              }

                              
                                  }




                }
                  if(f)
                    printf("\n");
             
             }


   return 0;
}
