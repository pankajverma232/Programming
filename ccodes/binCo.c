/*

Write a function that takes two parameters n and k and returns the value of Binomial Coefficient C(n, k). For example, your function should return 6 for n = 4 and k = 2, and it should return 10 for n = 5 and k = 2.

*/
#include<stdio.h>
int min(int,int);
int binCo(int n,int m){
	int i,j,C[n+1][m+1];
	for(i=0;i<=n;i++){
		for(j=0;j<=min(i,m);j++){
		if(j==0||j==i) 
			C[i][j]=1;
		else
			C[i][j] =  C[i-1][j-1]+C[i-1][j];

		}
	}
	return C[n][m];
}
int min(int a, int b)
{
    return (a<b)? a: b;
}
 
/* Drier program to test above function*/
int main()
{
    int n = 5, k = 2;
    printf ("Value of C(%d, %d) is %d\n ", n, k, binCo(n, k) );
    return 0;
}
