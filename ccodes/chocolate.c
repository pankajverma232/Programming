#include<stdio.h>
int main(){
int T;
scanf("%d",&T);
while(T--){
unsigned long long  n,ans;
scanf("%llu",&n);
if(n%2) ans = (n/2)*(n/2+1);
else ans = (n/2)*(n/2);
printf("%llu\n",ans);
}
}
