#include<stdio.h>
int main(){
int T;
scanf("%d",&T);
while(T--){
int i,n,k,count=0;
scanf("%d",&n);
k=n;
for(;k;){
int d = k%10;
k = k/10;
if(d==0) continue;
if(n%d==0) count++;
}
printf("%d\n",count);
}
}
