import java.util.Scanner;
class coPrime{
static boolean isGCD(int a,int b){
int max=0,min=0;
if(a>b){ max = a;
min = b;
}
else {
max =b;
min = a;
}
while(min > 1 ){

if(max%min==0){
if(min==1) return true;
else return false;
}
else{
int temp = max % min;
max = min;
min = temp;
}
}
return true;
}
public static void main(String[] args){
Scanner s = new Scanner(System.in);
int size = s.nextInt();
int[] arr = new int[size];
for(int i=0;i<size;i++){
arr[i] = s.nextInt();
}
int count = 0;
for(int i = 0 ;i < size-1 ; i++){
for(int j=i+1;j<size;j++){
if(isGCD(arr[i],arr[j])) count++;
}
}
System.out.println(count);
}
}
