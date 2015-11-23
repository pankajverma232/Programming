import java.io.*;
import java.util.*;
import java.math.*;
class MaximumSubArray{
public static void main(String[] args){
Scanner s = new Scanner(System.in);
int a = s.nextInt();
int b = s.nextInt();
int n = s.nextInt();


BigInteger[] arr = new BigInteger[n];
arr[0] = new BigInteger(""+a);
arr[1] =new BigInteger(""+b);
 
for(int i=2;i<n;i++) arr[i] = (arr[i-1].multiply(arr[i-1])).add(arr[i-2]);
System.out.println(arr[n-1]);
}
}
