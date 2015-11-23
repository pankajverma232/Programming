#include<stdio.h>
#include<string.h>
int main(){
 char *msg = NULL;
unsigned long len;
int i,hash[26];
for(i=0;i<26;i++)hash[i] = 0;
getline(&msg, &len, stdin);

for(i=0;i<len;i++){
if(*(msg+i) >=65 && *(msg+i) <=91)
hash[*(msg+i)-65]++;
}
for(i=0;i<26;i++)
if(hash[i]>0) printf("%c%d",i+65,hash[i]);

printf("\n");
}
