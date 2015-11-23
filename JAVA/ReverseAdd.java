import java.util.Scanner;
class ReverseAdd {
static int reverse(int n){
int temp = 0;
while(n>0){
temp += n%10;
n = n/10;
if(n>0) temp *= 10;
}
return temp;
}


public static void main(String[] args){
Scanner s = new Scanner(System.in);
int n = s.nextInt();
int[] arr1 = new int[n];
int[] arr2 = new int[n];
for(int i=0;i<n;i++){
arr1[i] = s.nextInt();
arr2[i] = s.nextInt();

arr1[i] = reverse(arr1[i]);
arr2[i] = reverse(arr2[i]);
arr1[i] = reverse(arr1[i]+arr2[i]);
}
for(int i:arr1) System.out.println(""+i);
}
}
