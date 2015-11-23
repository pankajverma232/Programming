#include<stdio.h>
#include<stdlib.h>
int  compare(const void *a,const void *b){
return *(int*)a - *(int*)b;
}
struct work{
int e;
int s;
};
int main(){
int start[]  =  {1, 3, 0, 5, 5, 5};
int finish[] =  {6, 4, 2, 9, 7, 9};
struct work job[6];
int i;
for(i=0;i<6;i++){
job[i].s=start[i];
job[i].e=finish[i];
}
for(i=0;i<6;i++) printf("%d %d\n",job[i].s,job[i].e);
qsort(job,6,8,compare);
printf("after\n");
for(i=0;i<6;i++) printf("%d %d\n",job[i].s,job[i].e);
int k=0;;
printf("sheduled jobs :\n%d %d\n",job[k].s,job[k].e);
for(i=1;i<6;i++){
if(job[i].s>=job[k].e){k++ ;printf("%d %d\n",job[i].s,job[i].e);}
}
}
