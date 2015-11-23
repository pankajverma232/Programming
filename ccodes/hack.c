#include<stdio.h>
int max(int a,int b){
return a>b?a:b;
}
int knapsack(int K,int w[],int v[],int n)
{
printf("\nvalue of n = %d\n",n);
int i,k;
int t[n+1][K+1];
for(i=0;i<=n;i++)
{
for(k=0;k<=K;k++)
{
if(i==0||k==0)
t[i][k]=0;
else if(w[i-1]<=k)
{
t[i][k] = max(v[i-1]+t[i-1][k-w[i-1]],t[i-1][k]);
}
else
{
t[i][k] = t[i-1][k];
}
}
}
printf("\n");
int m,p;
for(m=0;m<=n;m++){
printf("\n");
for(p=0;p<=K;p++)
printf("%d	",t[m][p]);
}

return t[n][K];
}
int main() {
int T,N,n,K,num;
int w[2000],v[2000];
int k,j,i;
scanf("%d",&T);
while(T--)
{
scanf("%d%d",&N,&K);
i=N;
k=0;
while(i--)
{
j=1;
n=K;
scanf("%d",&num);
while(n)
{
v[k]=j;
w[k]=num*j;
k=k+1;
j=j+1;
n=K/(num*j);
}
}

for(j=0;j<k;j++)
printf("%d\t",w[j]);
printf("\n");
for(j=0;j<k;j++)
printf("%d\t ",v[j]);
}
printf("\n%d\n",knapsack(K,w,v,k));
return 0;
}


