#include<stdio.h>
#include<iostream>
#include<map>
using namespace std;
int main(){
map<char,int>M;
int n,value;
char key;
printf("how many elements you want to enter \n");
scanf("%d",&n);
printf("enter key and values :\n");
while(n--){
cin>>key;
scanf("%d",&value);
printf("%c\t%d\n",key,value);
M.insert(pair<char,int>(key,value));
}
printf("here is your map:\n");
map<char,int>::iterator it;
for(it = M.begin();it!=M.end();it++){
printf("%c\t=>\t%d\n",it->first,it->second);
}
}
