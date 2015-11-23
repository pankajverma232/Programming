import java.util.Scanner;
class Expression{

static void change(char[] str,int pos){
if(str[pos] == ')') str[pos]='(';
else str[pos]=')';
}

static boolean checkExp(char[] str){
int l=0,r=0;
for(char c : str){
if(c=='(')l++;
if(c==')')r++;
if(l<r) return false;
}
if(l==r) return true;
return false;
}
public static void main(String[] args){
Scanner s = new Scanner(System.in);
for(int m=0;m<10;m++){

int len = s.nextInt();
char[] exp = new char[len];
exp=s.next().toCharArray();
int n = s.nextInt();
for(int i=0;i<n;i++){
int pos=s.nextInt();
if(pos==0){
if(checkExp(exp)) System.out.println("YES");
else System.out.println("NO");
}
else{
change(exp,pos-1);
}
}
}
}
}

