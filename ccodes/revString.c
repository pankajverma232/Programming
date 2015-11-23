#include<stdio.h>
void rev(char *str){
if(!*str) return;
rev(str+1);
printf("%c",*str);
}
int main(){
char *str = "ppankaj";
rev(str);
printf("\n");
}
