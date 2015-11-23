#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct order{
int start;
int processTime;
int rank;
};

int compare(const void *a,const void *b){
return (*(int*)a-*(int*)b);
}

int main() {
int n,i;
scanf("%d",&n);
struct order arr[n];
for(i=0;i<n;i++){
scanf("%d%d",&arr[i].start,&arr[i].processTime);
arr[i].rank = i+1;
}
qsort(arr,n,sizeof(struct order),compare);
for(i=0;i<n;i++) printf("%d ",arr[i].rank);
printf("\n");    
return 0;
}

