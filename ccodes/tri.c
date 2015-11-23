#include<stdio.h>
#include<stdlib.h>

struct box{
char c;
int flag;
struct box *next[26];
};


void insert(struct box *array,char *word){
int i,j,pos1=0,pos=0;
while(*word){
pos = *word - 'a';
array[pos].c=*word;
word++;
if(!*word) array[pos].flag=1;
else{
pos1 = *word -'a';
array[pos].next[pos1]=&array[pos1];
}
}
}

char * search(struct box *arr,char *word){
int pos=-1,pos1=-1;
while(*word){
pos = *word -'a'; 
word++;
if(*word){
pos1 = *word -'a';
if(arr[pos].next[pos1]==NULL) return "not found";
}
}
if(arr[pos].flag==1)return "found";
else return "may be foound";
}

int main(){
int i,j;
char *str;
struct box array[26];

for(i=0;i<25;i++){
array[i].flag=0;
array[i].c='\0';
for(j=0;j<25;j++){
array[i].next[j]=NULL;
}
}
/*for(i=5;i>0;i--){
printf("insert string :");
scanf("%s",str);
insert(array,str);
}
*/
insert(array,"weeeeeeeee");
insert(array,"wel");
insert(array,"welco");
//printf("search string :");
//scanf("%s",str);
printf("string : %s \n",search(array,"weel"));
}
