#include<stdio.h>
#include<stdlib.h>
/*












max=LISTable[i];
return max;
}
*/
int myLIS(int A[],int n){
int i,j,max=1;
int myTable[n];
for(i=0;i<n;i++) myTable[i]=1;
for(i=1;i<n;i++){
for(j=0;j<i;j++){
if(A[i]>A[j]&&myTable[i]<=myTable[j]) myTable[i]=myTable[j]+1;
if(max<myTable[j]) max = myTable[j];
}
}
return max;
}
/*
int main(){
int arr[] = {1,5,9,3,2,7,8,11,2,5,4};
//printf("LIS length = %d\n",LIS(arr,11));
printf("LIS length = %d\n",myLIS(arr,11));
}
*/
int LIS(int A[],int n){
int i,j,max =0;
int *arr = (int *)malloc(sizeof(int)*n);
for(i=0;i<n;i++){
arr[i] = 1;
}
for(i=1;i<n;i++){
for(j=0;j<i;j++){
if(A[i]>A[j]&&arr[i]<arr[j]+1){
arr[i] = arr[j]+1;
}
}
}
for(i=0;i<n;i++)
if(max <arr[i])max = arr[i];

return max;
}

int main(){
int arr[] = {1,5,9,3,2,7,8,11,2,5,4};
//printf("LIS length = %d\n",LIS(arr,11));
printf("LIS length = %d\n",myLIS(arr,11));
}
