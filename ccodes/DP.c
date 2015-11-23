#include<stdio.h>
int main(){
int n=13,i;
long long dp[]={1,2,0,0,0,0,0,0,0,0,0,0,0,0};
for(i=2;i<=n;i++){
dp[i] = (dp[i-1]*dp[i-2])%10000000;
}
printf("%lld\n",dp[n]);
}
