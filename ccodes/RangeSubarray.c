#include<stdio.h>
int findMax(int arr[],int n){
int i,max=arr[0];
for(i=1;i<n;i++) if(max<arr[i])max =arr[i];
return max;
}


int main(){
int arr[]={3,43,5,543,23,4,54,55,65,6,456,4,56,54,5,43,54,45,3};
int k,i;
printf("enter range :");
scanf("%d",&k);
int n = sizeof(arr)/sizeof(int) - k;
int subArr[n];
for(i=0;i<n;i++){
subArr[i] = findMax(&arr[i],k);
}
for(i=0;i<n;i++)
printf("%d ",subArr[i]);
}

