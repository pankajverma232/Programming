import java.util.Scanner;
import java.lang.Object;
import java.util.*;//ArrayList;
class nextPal{
 static boolean allNines(int[] arr){
for(int i : arr) if(i!=9) return false;
return true;
}
static boolean alreadyPal(int[] arr){
int mid = arr.length/2;
int i,j;
if(arr.length%2==0) {i = mid-1;j=mid;}
else i=j=mid;
while(i>=0){
if(arr[i]!=arr[j]) break;
else{
i--;j++;
}
}
if(i<0)return true;
return false;
}
static void nextPalindrome(int[] arr ){
if(allNines(arr)){
System.out.print(" "+1);
for(int i=1;i<arr.length;i++){
System.out.print(" "+0);
}
System.out.print(" "+1);
}
//else if(alreadyPal(arr)){
else{	int mid = arr.length/2;
	int i,j,carry = 1;
	i=mid-1;
	if(arr.length%2==0) {j=mid;}
	else {j= mid+1;}

	if(arr.length%2==0){
	while(i>=0){
	arr[i] += carry;
	carry = arr[i]/10;
	arr[i] = arr[i]%10;
	arr[j] = arr[i];
	i--;j++;
	}
      }
	else{
	carry = 1;
	i++;j++;
	while(i>=0){
	arr[i] += carry;
	carry = arr[i]/10;
	arr[i] = arr[i]%10;
	arr[j] = arr[i];
	i--;j++;
	} 
}
  
for(int k : arr) System.out.print(" "+k);
}

}
public static void main(String[] args){
System.out.println("enter number of elements : ");
Scanner s  = new Scanner(System.in);
int n = s.nextInt();
int[] arr = new int[n];
for(int i=0;i<n;i++)arr[i] = s.nextInt();
for(int i : arr){
ArrayList<Integer> elementArr = new ArrayList<Integer>();
while(i>0){elementArr.add(i%10 );
i = i/10;
}
int[] storage = elementArr.stream().mapToInt(l -> l).toArray();
nextPalindrome(storage);
System.out.println();
}
}
}
