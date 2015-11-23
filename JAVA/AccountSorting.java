import java.util.Scanner;
class AccountSorting{
public static void main(String[] args){
Scanner s = new Scanner(System.in);
System.out.println("enter no of account");
int n = s.nextInt();
int[] arr = new int[n];
int[] Acc = new int[n];
int len=1;
String[] StrArr = new String[n];
System.out.println("enter max");
int max = s.nextInt();
String str0,str1,str2,str;
System.out.println("enter accounts:");
for(int i=0;i<n;i++){
str0 = s.next();
str1=s.next();
str2 = s.next();
str = str0+str2;
len =  str0.length();
arr[i] = Integer.parseInt(str);
StrArr[i] = str1;
}

int[] store = new int[n];
int[] count=new int[10];

for(int i =0;i<n;i++) {store[i]=arr[i];Acc[i]=arr[i];}

for(int ts=1;ts<max;ts *=10){
for(int i=0;i<10;i++) count[i]=0;
for(int i=0;i<n;i++) count[store[i]%10]++;
for(int j=1;j<10;j++) {count[j] +=count[j-1];
//System.out.println(" "+count[j]);
}
for(int i=n-1;i>=0;i--){arr[count[store[i]%10]-1]=Acc[i];
store[i] /=10;
}
}
String[] Account = new String[n];
for(int i=0;i<n;i++){

 System.out.println(arr[i]+" ");
Account[i]= String.valueOf(arr[i]);
Account[i] = Account[i].substring(0,len)+StrArr[i]+Account[i].substring(len); 
System.out.println(" "+Account[i]);
}
}
}
