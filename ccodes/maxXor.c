#include<stdio.h>
int main(){
int l,r,i,j;
scanf("%d%d",&l,&r);
int max = 0;
for(i=l;i<r;i++){
for(j=i+1;j<r;j++){
if(max < (i^j)) max = (i^j);
}
}
printf("%d\n",max);
}
