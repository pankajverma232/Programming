/*

Given two strings str1 and str2 and below operations that can performed on str1. Find minimum number of edits (operations) required to convert ‘str1′ into ‘str2′.

Insert
Remove
Replace
All of the above operations are of equal cost.

*/

#include<string.h>
#include<stdio.h>
int min(int,int ,int);
int editDist(char* str1 , char* str2 , int m ,int n){
	int i,j, arr[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(i==0)arr[i][j] = j;
			else if(j==0) arr[i][j] = i;
			else if(str1[i]==str2[j]) arr[i][j] = arr[i-1][j-1];
			else arr[i][j] = min(arr[i][j-1],arr[i-1][j],arr[i-1][j-1])+1;
		}
	}
	return arr[m-1][n-1];
}

int min(int a,int b,int c){
	int min = a;
	if(min > b) min = b;
	if(min>c) min = c;
	return min;
}



int main(){
 	char * str1 = "sunday";
	char * str2 = "saturday";
    	printf("%d\n",editDist(str1, str2, strlen(str1), strlen(str2)));
    	return 0;
}
