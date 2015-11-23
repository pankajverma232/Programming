#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
#include<stack>
int main(){
stack<int>s;
char str[] = "{a+b(-h)*([3+4])}";
for(int i=0;i<strlen(str);i++){
char ch = str[i];
if(ch=='('||ch=='{'||ch=='[') s.push(ch);
if(ch==')'||ch=='}'||ch==']'){
	if(s.empty()) {printf("Error!\n");return 0;}
	char c = s.top();
	s.pop();
	if((c==']'&&ch!='[')||(c=='}'&&ch!='{')||(c==')'&&ch!=')')){printf("Error!!\n");return 0;}

}
}
if(s.empty())printf("Balanced!\n");
else printf("Error!!!\n");
}
