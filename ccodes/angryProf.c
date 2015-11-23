#include<stdio.h>
int main(){
int T;
scanf("%d",&T);
while(T--){
int N;
int r;
scanf("%d%d",&N,&r);
int arr[N];
int i,present=0;
for(i=0;i<N;i++){ scanf("%d",&arr[i]);
if(arr[i]<=0) present++;
}
if(present<r) printf("YES\n");
else printf("NO\n");
}
}
