#include<stdio.h>
#include<limits.h>
int  minDist(int arr[],int n,int X,int Y){
int i,prev,minDist=INT_MAX;
for(i=0;i<n;i++){
if(arr[i]==X||arr[i]==Y){prev = i;
break;
}
}
for(;i<n;i++){
if(arr[i]==X||arr[i]==Y){
if(arr[prev]!= arr[i]){
if(minDist>i-prev){
minDist = i-prev;
prev = i;
}
}
}
}
return minDist;
}
int main(){
int arr[] ={3, 5, 4, 2, 6, 2, 0, 3, 5, 4, 8, 3};
int n = sizeof(arr)/sizeof(int);
int i,j;
printf("min dist = %d\n",minDist(arr,n,6,3));
}
