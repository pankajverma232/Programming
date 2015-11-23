/*

Given a cost matrix cost[][] and a position (m, n) in cost[][], write a function that returns cost of minimum cost path to reach (m, n) from (0, 0). Each cell of the matrix represents a cost to traverse through that cell. Total cost of a path to reach (m, n) is sum of all the costs on that path (including both source and destination). You can only traverse down, right and diagonally lower cells from a given cell, i.e., from a given cell (i, j), cells (i+1, j), (i, j+1) and (i+1, j+1) can be traversed. You may assume that all costs are positive integers.


*/

#include<stdio.h>
#include<limits.h>
#define R 3
#define C 3
int min(int a,int b,int c){
int min =a;
if(min>b)min = b;
if(min >c)min =c;
return min;
}
int minCost(int arr[R][C],int m,int n){
	int i,j,cost[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(i==0&&j==0)cost[i][j]=arr[i][j];
			else if(i==0)cost[i][j] = cost[i][j-1]+arr[i][j];
			else if(j==0)cost[i][j] = cost[i-1][j]+arr[i][j];
			else cost[i][j] = min(cost[i-1][j-1],cost[i-1][j],cost[i][j-1])+arr[i][j];
		}
	}
	return cost[m-1][n-1];
}

int main(){
	int cost[R][C] = { {1, 2, 3},{4, 8, 2},{1, 5, 3} };
   	printf(" %d \n", minCost(cost, R,C));
   	return 0;
}
