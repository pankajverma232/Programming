#include<stdio.h>
int main(){
int T;

scanf("%d",&T);
while(T--){
int h=1,n;
scanf("%d",&n);
int f=n/2;
while(f--){
h = h*2+1;
}
if(n%2) h = h*2;
printf("%d\n",h);
}
}
