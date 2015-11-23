#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int compare(const void *a,const void *b){
return (*(int*)a-*(int *)b);
}
int main() {
int N;
scanf("%d",&N);
int arr[N];
int i;
for(i=0;i<N;i++)scanf("%d",&arr[i]);
qsort(arr,N,4,compare);
int base = arr[0],count =1;
for(i=1;i<N;i++){
 if(arr[i]-base > 4){ count++;
base = arr[i];
                    }
}
printf("%d\n",count);
    return 0;
}


