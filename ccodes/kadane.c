#include<stdio.h>
int kadane(int[],int);
int main(){
int n,i,arr[]={1,-1,-1,1,1,-1,1,1,1,1,-1,-1,-1,-1,-1,-1,1};
n = sizeof(arr)/sizeof(int);
printf("max sum is : %d\n",kadane(arr,n));
}

int kadane(int arr[],int n){
int i,max=0,finMax=0;
for(i=0;i<n;i++){
max += arr[i];
if(max < 0) max =0;
if(finMax<max) finMax = max;
}
return finMax;
}

