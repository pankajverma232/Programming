#include<stdio.h>
int min(int a,int b,int c){
int min = a;
if(min>b) min =b;
if(min>c) min = c;
return min;
}

int main(){
int arr[][3] = {{1,2,3},{5,1,6},{7,1,9}};
int array[3][3];
int i,j;
for(i=0;i<3;i++){
for(j=0;j<3;j++){
if(i==0&&j==0) array[i][j]=arr[i][j];
else if(i==0)array[i][j] = array[i][j-1]+arr[i][j];
else if(j==0)array[i][j] = array[i-1][j]+arr[i][j];
else array[i][j] = min(array[i-1][j-1],array[i-1][j],array[i][j-1])+arr[i][j];
}
}
printf("shortest path : %d\n",array[2][2]);
}
