#include<stdio.h>
int max(int ,int);
int LCS(int *arr1,int *arr2,int n,int m){
int i,j;
int A[n+1][m+1];
for(i=0;i<=n;i++){
for(j=0;j<=m;j++){
if(i==0||j==0) A[i][j] = 0;
else if(arr1[i-1]==arr2[j-1]){
A[i][j] = A[i-1][j-1]+1;
}
else {
A[i][j] = max(A[i-1][j],A[i][j-1]); 
}
}
}
return A[n][m];
}
int max(int a,int b){
if(a>b) return a;
return b;
}
int main(){
int arr1[] = {2,34,12,4,43,434,343,43,4,234,24,234,2,342,42,4,2,423,4,23,423};
int arr2[] = {2,44,34,34,3,423,4,234,23,423,4,23,423,4,2,3,4,4,3};
int n = sizeof(arr1)/sizeof(int);
int m = sizeof(arr2)/sizeof(int);
printf("LCS = %d\n",LCS(arr1,arr2,n,m));
}
