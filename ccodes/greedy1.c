#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int compare(const void *a,const void *b){
return (*(char *)a-*(char *)b);
}
int main() {
int T;
scanf("%d",&T);
while(T--){
int N;
scanf("%d",&N);
char G[N][N];
int i,j,flag = 1;
getchar();
for(i=0;i<N;i++){
for(j=0;j<N;j++){
scanf("%c",&G[i][j]);
}
getchar();
}
for(i=0;i<N;i++)
	qsort(G[i],N,1,compare);

for(i=0;i<N;i++){
for(j=0;j<N;j++){
printf("%c",G[i][j]);
}
printf("\n");
}
for(j=0;j<N;j++){
if(flag==0) break;
for(i=1;i<N;i++){
if(G[i][j]<G[i-1][j]){
flag = 0;
break;
}
}
}
if(flag==1) printf("YES\n");
else printf("NO\n");
}
    return 0;
}

