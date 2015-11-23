#include<stdio.h>
int minCandies(int *arr,int n){
int c[n];
int i;
for(i=0;i<n;i++) c[i] = 1;
for(i=0;i<n-1;i++){
if(arr[i+1]>arr[i]) c[i+1]=c[i]+1;
if(arr[i+1]<arr[i]){
	if(c[i]<=c[i+1]){ 
	c[i]=c[i+1]+1;
       int j;
        for(j=i;j>0;j--)
            if(c[j]==c[j-1])
                c[j-1] += 1;        
    }
}
}
int sum =0;
for(i=0;i<n;i++){
sum += c[i];
printf("%d\t",c[i]);
}
return sum;
}
int main(){
int n,i;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("%d\n",minCandies(arr,n));
}
