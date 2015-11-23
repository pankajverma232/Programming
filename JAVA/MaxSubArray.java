public class MaxSubArray{
int fun(int arr[],int i,int k){
int max = arr[i];
for(int x=i+1 ; x<k ; x++) if(max < arr[x]) max = arr[x];
return max;
}

public static void main(String ar[]){
int arr[] = {3,2,5,6,4,34,3,2,43,43,55,3};
int k =3;
int n = arr.length - k;
int subArr[] = new int[n];
MaxSubArray msa = new MaxSubArray();
for(int i=0;i<n;i++){
subArr[i] = msa.fun(arr,i,k+i);
}
for(int i=0;i<n;i++){
System.out.println(" "+subArr[i]);
}
}
}

