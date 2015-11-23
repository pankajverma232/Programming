import java.util.*;
import java.lang.*;

class primeGenerator
{
	static boolean isPrime(int n){
for(int i=2;i<=Math.sqrt(n);i++)
if(n%i == 0) return false;
return true;
}
	public static void main (String[] args) throws java.lang.Exception
	{
Scanner s = new Scanner(System.in);
int a = s.nextInt();
int[] arr1 = new int[a];
int[] arr2 = new int[a];
for(int i = 0; i<a;i++){
int n1 = s.nextInt();
int n2 = s.nextInt();
arr1[i] = n1;arr2[i] = n2;
}
for(int k =0 ;k<a;k++){

for(int i = arr1[k];i<arr2[k];i++){
if(isPrime(i)) System.out.println(i);
}
System.out.println();
}
}
}
