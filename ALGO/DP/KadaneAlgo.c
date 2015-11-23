/*
Suppose there is a list of integers no matter if numbers are positive negative or zero. You have to fing a subarray in this array  such that  1. They are contiguous and 2. Their sum is maximum.
*/

#include<stdio.h>
int main(){
int max=0,ans=0,i,n,j;
int arr[] = {2,-4,6,-1,2,7,-9,8,7,-5,3};
n = sizeof(arr)/sizeof(int);
for(i=0;i<n;i++){
max += arr[i];
if(max <0) max =0;
if(max > ans) ans = max;
}
printf("%d\n",ans);
}


