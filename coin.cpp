#include <cstdio>
#include <map>
#include <algorithm>

using namespace std;

map<int, long long> dp;

long long f(int n){
    if(n==0) return 0;
    
    if(dp[n]!=0) return dp[n];
    
    long long fun=f(n/2)+f(n/3)+f(n/4);
    
    if(fun>n) dp[n]=fun;
    else dp[n]=n;
    
    return dp[n];
}

int main(){    
    int n;
        
    while(scanf("%d",&n)==1) printf("%lld\n",f(n));
    
    return 0;
}

