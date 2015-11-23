#include<stdio.h>
#include<string.h>
int cat(int n) {
int dp[n+1],i,j;
memset(dp, 0, sizeof(dp));
dp[0] = 1; dp[1] = 1;
for (i = 2; i <= n; ++i)
for (j = 1; j <= i; j++)
dp[i] += dp[j-1] * dp[i-j];
return dp[n];
}
int myCat(int n){
int dp[n+1],i,j,k;
memset(dp, 0, sizeof(dp));
dp[0] = 1; dp[1] = 1;
for(k=2;k<=n;k++){
int sum =0;
for(i=0,j=k-1;i<k;i++,j--){
sum += dp[i]*dp[j];
}
dp[k] = sum;
}
return dp[n];
}

int main(){
int n;
scanf("%d",&n);
printf("no of binary trees:%d\n",myCat(n));
printf("no of binary trees:%d\n",cat(n));
}


