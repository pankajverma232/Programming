#include<stdio.h>
int max(int a,int b){
return a>b?a:b;
}
/*
int knapsack(int W,int* wt,int* val, int n){
if(W==0||n==0) return 0;
if(W<wt[n-1]) return knapsack(W,wt,val,n-1);
else return max(val[n-1]+knapsack(W-wt[n-1],wt,val,n-1),knapsack(W,wt,val,n-1));
}
*/
int knapsack(int W,int* wt,int* val, int n){
int i,j;
int K[n+1][W+1];
for(i=0;i<=n;i++){
for(j=0;j<=W;j++){
if(i==0||j==0)K[i][j]=0;
else if(W<wt[i-1]) K[i][j] = K[i-1][j];
else K[i][j] = max(val[i-1]+K[i-1][j-wt[i-1]],K[i-1][j]); 
}
}
return K[n][W];
}

int main(){
int wt[] = {10,20,30};
int val[] = {60,100,120};
int W=50;
int n = 3;
printf("%d \n",knapsack(W,wt,val,n));
}

