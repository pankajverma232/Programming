#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int compare1(const void *a,const void *b){
return (*(int*)a-*(int*)b);
}

int compare2(const void *a,const void *b){
return (*(int*)b-*(int*)a);
}
int main() {
int T;
scanf("%d",&T);
while(T--){
int N,K,i,flag=0;
scanf("%d%d",&N,&K);
int A[N],B[N];
for(i=0;i<N;i++)scanf("%d",&A[i]);
for(i=0;i<N;i++)scanf("%d",&B[i]);


qsort(A,N,4,compare1);
qsort(B,N,4,compare2);

for(i=0;i<N;i++){
if(A[i]+B[i] < K) {printf("NO\n");flag=1;break;}
}
if(flag==0)printf("YES\n");
}
    return 0;
}

