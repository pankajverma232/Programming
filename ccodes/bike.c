#include<stdio.h>
int main(){
int T,N,i;
scanf("%d",&N);
scanf("%d",&T);
int arr[N];
for(i=0;i<N;i++){
 scanf("%d",&arr[i]);
}
while(T--){
int ent,ext;
scanf("%d%d",&ent,&ext);

int min = arr[ent];
printf("min = %d\n",min);
for(i=ent+1;i<=ext;i++)
	if(min > arr[i]) min = arr[i];
printf("%d\n",min);
}
}

