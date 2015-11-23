import java.util.*;
import java.lang.*;
class Main
{
 char[] stack;
 char[] arr;
 char[] res;
 int index,top;
 Main(String str){
int n = str.length();
 stack = new char[n];
 arr = str.toCharArray();
 res = new char[n];
index=0;top=-1;
}
 void copyPaste(char s ){
if(top < 0){top++;
stack[top]=s;
 return;
}
if(stack[top] != '('){
res[index]=stack[top];
index++;
}
stack[top] = s;

}
 void push(char s){
top++;
stack[top] = s;
}


 void doEmpty(){
do{
if(stack[top] != '(')
res[index] = stack[top];
top--; index++;
}while(stack[top] != '(');

}

	public static void main (String[] args) throws java.lang.Exception
	{
Scanner s = new Scanner(System.in);
int n = s.nextInt();
String[] strArr = new String[n];
for(int i = 0;i<n;i++)strArr[i]=s.next();

for(int i = 0;i<n;i++){
Main p = new Main(strArr[i]);
for(char j : p.arr){
switch(j){
case '(' : p.push(j);break;
case ')' : p.doEmpty();break;
case '+': case '-' : case '*' : case '/' : case '%' : case '!' : case '^' : p.copyPaste(j);break;
default : p.push(j); break;
}
}
System.out.println(p.res);
}
}
}

