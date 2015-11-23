/*

Given an array of integers where each element represents the max number of steps that can be made forward from that element. Write a function to return the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then cannot move through that element.

Example:

Input: arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}
Output: 3 (1-> 3 -> 8 ->9)

*/

#include<stdio.h>
#include<limits.h>
int fun(int arr[],int n){
int i,j=0;
int jumps[n];
jumps[0]=0;
for(i=1;i<n;){
	if(j+arr[j] < i && j<i)j++;
	else if(j+arr[j]>=i && j<i){
		jumps[i] = jumps[j]+1;
		i++;
	}
	else return INT_MAX;
}
printf("jumps: ");
for (i = 0; i < n; i++) {
    printf("%d, ", jumps[i]);
  }
return jumps[n-1];
}
int main(){
int arr[] = {2,1,9,3,7,5,2};
int n = sizeof(arr)/sizeof(int);
printf("minimum num of jumps = %d\n",fun(arr,n));
}
