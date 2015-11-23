#include<stdio.h>
int filled(int a , int b,int c){
if(c==a||c==b) return 1;
if(c == a+b) return 2;
if(c>a+b) return -1;
int max = a>b ? a:b;
int min = a>b ? b:a;
int step = 2;
int diff = max-min;
while(diff >= c){
if(diff == c) return step;
if(diff >min)max=diff;
else{
max=min;
min=diff;
}
step += 2;
}
return -1;
}


int main(void){
int n ;
scanf("%d",&n);
int arr1[n];
int arr2[n];
int arr3[n];
for(int i=0;i<n;i++){
scanf("%d",&arr1[i]);
scanf("%d",&arr2[i]);
scanf("%d",&arr3[i]);
}
for(int i=0;i<n;i++)
printf("%d\n",filled( arr1[i], arr2[i], arr3[i]));

return 0;
}
