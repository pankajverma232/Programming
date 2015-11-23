import java.util.Scanner;
class JavaToCpp{
public static void main(String[] args){
System.out.println("enter identifier :");
Scanner s=new Scanner(System.in);
String id = s.next();
int flag =0; // if 1 :c++ ,2:java
//System.out.println(id);
System.out.println("enter no of test cases :");
int test = s.nextInt();
while(test-- > 0){
int l = id.length();
if(Character.isUpperCase(id.charAt(0))){ System.out.println("Error!"); continue;}
if(l==1) System.out.println(id);continue;
String prev = id.charAt(0)+"";
for(int i=1; i<l-2;i++){

if(Character.isUpperCase(id.charAt(i))){
if(flag == 1) System.out.println("Error!");
else flag = 2;
id = prev+"_"+(id.charAt(i)+"").toUpperCase()+id.subString(i+1);
}
if(id.charAt(i)=='_'){
if(flag == 2) System.out.println("Error!");
else flag = 1;
id = prev+(id.charAt(i)+"")+.toLowerCase()+id.subString(i+1);
} 
System.out.println(id);
prev +=(id.charAt(i)+"");
} 
}
}
}

