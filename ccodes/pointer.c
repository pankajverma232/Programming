#include<stdio.h>
#include<stdlib.h>
int main(){
int n,*p,*a;
int arr[]={4,54,3,23};
p=arr;
p[2]=9;
n = (int*)malloc(sizeof(int));
n=p;
printf("%d    %u\n",arr[2],n);
}
