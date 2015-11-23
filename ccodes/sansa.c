#include<stdio.h>
int  main(){
int T;
unsigned int N;
scanf("%d",&T);
unsigned int arr[N];
while(T--){
scanf("%u",&N);
int i;
for(i=0;i<N;i++){
scanf("%u",&arr[i]);
}
if(N==1) {printf("%u\n",arr[0]); return 0;}
if(N%2==0) printf("%d\n",0);
else {
printf("%u\n",arr[0]^arr[N-1]);
}
}
}
