#include<stdio.h>
void swap(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;
}
int *selectionSort(int *arr,int n){
int i,j,min;
for(i=0;i<n;i++){
min=i;
for(j=i+1;j<n;j++)
if(arr[j]<arr[min]) min =j;
swap(&arr[i],&arr[min]);
}
return arr;
}
int main(){
int n,i,*arr;
printf("enter number of elements:\n");
scanf("%d",&n);
printf("enter elements now :");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
arr=selectionSort(arr,n);
for(i=0;i<n;i++){
printf("%d  ",arr[i]);
}
}
