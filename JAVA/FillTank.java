import java.util.Scanner;
class FillTank{
static int filled(int a , int b,int c){
if(c==a||c==b) return 1;
if(c == a+b) return 2;
if(c>a+b) return -1;
int max = a>b ? a:b;
int min = a>b ? b:a;
int step = 2;
int diff = max-min;
while(diff >= c){
if(diff == c) return step;
if(diff >min)max=diff;
else{
max=min;
min=diff;
}
step += 2;
}
return -1;
}


public static void main(String[] args){
Scanner s = new Scanner(System.in);
int n = s.nextInt();
int[] arr1 = new int[n];
int[] arr2 = new int[n];
int[] arr3 = new int[n];
for(int i=0;i<n;i++){
arr1[i] = s.nextInt();
arr2[i]= s.nextInt();
arr3[i] = s.nextInt();
}
for(int i=0;i<n;i++)
System.out.println(""+filled( arr1[i], arr2[i], arr3[i]));
}
}
