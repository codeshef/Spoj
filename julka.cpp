#include<bits/stdc++.h>
using namespace std;

void add(char v1[],char v2[]){

       int i,d,c=0;
       int l1 = strlen(v1);
       int l2 = strlen(v2);
      for(int i=l1;i<l2;i++)
          v1[i]='0';
      for(int i=l2;i<l1;i++)
          v2[i]='0';
      for(int i=0;i<l1||i<l2;i++){

             d = (v1[i]-'0')+(v2[i]-'0')+c;
             c=d/10;
             d%=10;
             v1[i]='0'+d;
           }
       while(c){
       
          v1[i]='0'+(c%10);
           c/=10;
           i++;

         }

       v1[i]='\0';
       v2[l2]='\0';


}

void sub(char v1[],char v2[]){
 
    int d,c=0,i;
    int l1 = strlen(v1);
    int l2 = strlen(v2);

     for(i=l2;i<l1;i++)
          v2[i]='0';
     for(i=0;i<l1;i++){

        d = (v1[i]-'0'-c)-(v2[i]-'0');
          
           if(d < 0){

             d+=10;
             c=1;
                }else c=0;
           v1[i]='0'+d;
    
       }
     v2[l2]='\0';
      i=l1-1;
     while(i>0 && v1[i]=='0')
        i--;
     v1[i+1]='\0';


}

int divi(char v[],int q){

    int l= strlen(v),i;
    int c=0,d;
    for(i=l-1;i>=0;i--){


          d =c*10+(v[i]-'0');
          c = d%q;
          d/=q;
          v[i]='0'+d;

      }
       i=l-1;
      while(i>0 && v[i]=='0')
       i--;
      v[i+1]='\0';
      return c;


}

int main(){

     char a[102],b[102];
      int t=10;
      while(t--){

       cin>>a>>b;
       
        add(a,b);
        divi(a,2);
        cout<<a<<endl;
        sub(a,b);
        cout<<a<<endl;


  }
  return 0;
}
