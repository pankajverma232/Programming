#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b){

    if((*(long long int *)b - *(long long int *)a)<0) return -1;
    if((*(long long int *)b - *(long long int *)a)>0) return 1;
    return 0;
}
int main(){

//Helpers for input/output
   int i, N, K,x=0;


   scanf("%d %d", &N, &K);
   long long int C[N];
   for(i=0; i<N; i++){
      scanf("%lld", &(C[i]));
   }
     long long int result=0;
   qsort(C,N,sizeof(long long int),compare);

for(i=0;i<N;i++){
x = i/K;
C[i] = (x+1)*C[i];
result += C[i];
}

   printf("%lld\n", result);

}
