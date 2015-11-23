import java.util.Scanner;
class NoOfZinFact{
public static void main(String[] args){
Scanner s = new Scanner(System.in);
int noOfTests = s.nextInt();
int[] arr = new int[noOfTests];
for(int i=0;i<noOfTests;i++){
arr[i] = s.nextInt();
}
for(int i:arr){
int ans=0;
while(i>0){
i = i/5;
ans += i;
}
System.out.println(ans);
}
}
}
