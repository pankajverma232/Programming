#include<stdio.h>
int knapsack(int *wt,int *val,int n,int W){
int arr[n+1][W+1];
int i,j;
for(i=0;i<=n;i++){
for(j=0;j<=W;j++){
if(i==0||j==0) arr[i][j] = 0;
else if(j<=W){
 	if(val[i-1]+arr[i-1][j-wt[i-1]] > arr[i-1][j])   arr[i][j] = val[i-1]+arr[i-1][j-wt[i-1]];
	else arr[i][j] = arr[i-1][j];
}
else arr[i][j] = arr[i-1][j];
}
}

return arr[n][W];
}
int main(){
int wt[] = {10,20,30};
int val[] = {60,100,120};
int n =3,W=50;
printf("max weight = %d\n",knapsack(wt,val,n,W));
}

