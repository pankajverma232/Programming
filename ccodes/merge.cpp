#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int arr1[] = {5,10,20,15,25};
int arr2[] = {50,40,30,20,10};
int arr3[10];
sort(arr1,arr1+5);
sort(arr2,arr2+5);
merge(arr1,arr1+5,arr2,arr2+5,arr3);
for(int i=0;i<10;i++) printf("%d ",arr3[i]);
printf("\n");
}
