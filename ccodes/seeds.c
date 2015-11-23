#include<stdio.h>
int main(){
int N;
 long long K;
scanf("%d%lld",&N,&K);
long long int F[N],C[N];
int i,j;
for(i=0;i<N;i++)
scanf("%lld",&F[i]);

for(i=0;i<N;i++)
scanf("%lld",&C[i]);

for(j=K;j>1;j--){
int x=F[0],y=0;

for(i=0;i<N-1;i++)
F[i] = F[i+1];

for(i=0;i<N-1;i++){
y = (y+(F[i]*C[i]));

}
F[N-1] = (x-y)/C[N-1];
}
for(i=0;i<N;i++)
printf("%lld ",F[i]);
}
