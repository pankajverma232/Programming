#include<stdio.h>

char *binSearch(int *arr,int d,int a,int b){
if(b>=a) return "not found";
int mid = (a+b)/2;
if(arr[mid]==d) return "found";
else if(arr[mid]<d) return binSearch(arr,d,a,mid-1);
else return binSearch(arr,d,mid+1,b);
}
int main(){
int *arr,n,d,i;
printf("enter random numbers how many ?");
scanf("%d",&n);
printf("enter then :");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("enter the number you want to search :");
scanf("%d",&d);
printf("number is %s",binSearch(arr,d,0,n-1));
}
