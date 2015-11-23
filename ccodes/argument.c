#include<stdio.h>
int fun(int ,int);
int main(){
int a=9;
printf("returned value is : %d\n",fun(5,6));
}
int fun(int a,int b){
a++;
return a+b;
}
