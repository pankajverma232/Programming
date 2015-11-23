#include<stdio.h>
int main(){
int arr[] = {8, 2, 10, 9, 11, 1, 7, 3, 4},n,i,j;
for(i=1;i<9;i++){
int key = arr[i];
for(j=i-1;j>=0;j--){
if(key<arr[j]){
int temp = arr[j];
arr[j] = key;
arr[j+1]=temp;
}else break;
}
}
for(i=0;i<9;i++)
printf("%d ",arr[i]);
}
