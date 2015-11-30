#include<stdio.h>
int knapsack1(int *wt,int *val,int n,int W){
int i,j;
int K[n+1][W+1];
for(i=0;i<=n;i++){
for(j=0;j<=W;j++){
if(i==0||j==0) K[i][j] =0;
else if(wt[i-1]<=j){
if(val[i-1]+K[i-1][j-wt[i-1]] > K[i-1][j])
	K[i][j] = val[i-1]+K[i-1][j-wt[i-1]];
else K[i][j] = K[i-1][j];
}
else K[i][j] = K[i-1][j];
}
}
return K[n][W];
}
int knapsack2(int *wt,int *val,int n,int W){
int i,j;
int K[n+1][W+1];
for(i=0;i<=n;i++){
for(j=0;j<=W;j++){
if(i==0||j==0) K[i][j] = 0;
else if(wt[i-1]>j || val[i-1]+K[i-1][j-wt[i-1]]<=K[i-1][j])
	K[i][j] = K[i-1][j];
else K[i][j]= val[i-1]+K[i-1][j-wt[i-1]];
}
}
return K[n][W];
}
int main(){
int wt[] = {10,30,20};
int val[] = {60,120,100};
int n =3,W=50;
printf("max weight = %d\n",knapsack2(wt,val,n,W));
}

