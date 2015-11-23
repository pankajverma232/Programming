/*

Given an array of n positive integers. Write a program to find the sum of maximum sum subsequence of the given array such that the intgers in the subsequence are sorted in increasing order. For example, if input is {1, 101, 2, 3, 100, 4, 5}, then output should be 106 (1 + 2 + 3 + 100), if the input array is {3, 4, 5, 10}, then output should be 22 (3 + 4 + 5 + 10) and if the input array is {10, 5, 4, 3}, then output should be 10.

*/
#include<stdio.h>
int msis(int arr[],int n){
	int  i,j,max=0,ms[n];
	for(i=0;i<n;i++)ms[i] = arr[i];

	for(i=1;i<n;i++){
		for(j=0;j<i;j++){
			if(arr[i]>arr[j] && ms[i] < ms[j]+arr[i] )
 			ms[i] = ms[j]+arr[i];
		}
	}
	for(i=0;i<n;i++)
	if(max<ms[i])
		max = ms[i];
	return max;
}
int main(){
 int arr[] = {1, 101, 2, 3, 100, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Sum of maximum sum increasing subsequence is %d\n",
           msis( arr, n ) );
    return 0;
}
