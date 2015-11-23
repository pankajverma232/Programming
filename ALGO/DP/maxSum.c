#include<stdio.h>
int maxSum(int *arr,int n,int S){
int i,j;
int sum[n+1][S+1];
for(i=0;i<=n;i++){
for(j=0;j<=S;j++){
if(i==0||j==0) sum[i][j] = 0;
else if(arr[i-1]<=j){
if(arr[i-1]+sum[i][j-arr[i-1]]>sum[i-1][j])
	sum[i][j] = arr[i-1]+sum[i][j-arr[i-1]];
else sum[i][j] = sum[i-1][j];
}
else sum[i][j] = sum[i-1][j];
}
}
return sum[n][S];
}
int main(){
int T;
scanf("%d",&T);
while(T--){
int S ,n;
scanf("%d%d",&n,&S);
int arr[n],i;
for(i=0;i<n;i++) scanf("%d",&arr[i]);
printf("%d\n",maxSum(arr,n,S));
}
}
