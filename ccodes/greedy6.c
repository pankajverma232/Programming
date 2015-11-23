#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void swapMax(int *arr,int n){
int i,d=0;
for(i=1;i<n;i++)if(arr[i]>arr[d]) d=i;
int t=arr[d];
arr[d] = arr[0];
arr[0] = t;
}
int main() {
int N,K;
scanf("%d%d",&N,&K);

int arr[N];
int i,j,index=0;

for(i=0;i<N;i++)scanf("%d",&arr[i]);
for(j=0;j<=K+1;j++){
swapMax(arr+j,N-j);

}
for(i=0;i<N;i++) printf("%d ",arr[i]);
printf("\n");
    return 0;
}

