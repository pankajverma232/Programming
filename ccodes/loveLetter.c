#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T;
scanf("%d",&T);
while(T--){
char * str ;
scanf("%s",str);
int len = strlen(str);
int k,i,j;
if(len%2) k = len/2 +1;
else k = len/2;
int sum = 0;
for(i=0,j=k;j<len;i++,j++)
 sum = sum + str[j] - str[i] ;
printf("%d\n",abs(sum));
}

    return 0;
}

