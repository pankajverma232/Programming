#include<stdio.h>
int bin(int n){
if(n<=1) return 1;
else return bin(n-1)+bin(n-2);
} 

int main(){
int n;
printf("enter number:\n");
scanf("%d",&n);
printf("%d ",bin(n));
}
