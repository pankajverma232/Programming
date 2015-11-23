#include<stdio.h>
int findMin(int a,int b){
return a>b?b:a;
}
int main(){
int K,N;
scanf("%d%d",&N,&K);
int arr[K][N];
int i,j;
for(i=0;i<K;i++){
for(j=0;j<N;j++){
scanf("%d",&arr[i][j]);
}
}
int S[K+1][N+1];

for(i=0;i<=K;i++){
for(j=0;j<=N;j++){
if(i==0||j==0) S[i][j] =0;
else if(i==1) S[i][j] = S[i][j-1]+arr[i-1][j-1];
else{
int min = findMin(arr[i-2][j-1],arr[i-1][j-1]);
int val = min+S[i][j-1];//findMin(S[i-1][j],min+S[i][j-1]);
S[i][j] = val;
} 
}
}
for(i=0;i<=K;i++){
printf("\n");
for(j=0;j<=N;j++){
printf("%d\t",S[i][j]);
}
}
printf("%d\n",S[K][N]);
}
