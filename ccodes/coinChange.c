/*

Given a value N, if we want to make change for N cents, with  infinite supply of each of S = { S1, S2, .. , Sm} valued coins, how many ways can we make the change? The order of coins doesn’t matter.
For example, for N = 4 and S = {1,2,3}, there are four solutions: {1,1,1,1},{1,1,2},{2,2},{1,3}. So output should be 4. For N = 10 and S = {2, 5, 3, 6}, there are five solutions: {2,2,2,2,2}, {2,2,3,3}, {2,2,6}, {2,3,5} and {5,5}. So the output should be 5.

*/
#include<stdio.h>
int coinChange(int S[],int m,int n){
int i,j,P[n+1];
for(i=0;i<=n;i++) P[i]=0;
P[0] = 1;
for(i=0;i<m;i++){
for(j=S[i];j<=n;j++){
P[j] = P[j] + P[j-S[i]];
}
}
return P[n];
}
int main(){
 int arr[] = {1, 2, 3};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = 4;
    printf(" %d \n", coinChange(arr, m, n));
    return 0;

}
