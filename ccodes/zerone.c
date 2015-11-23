#include<stdio.h>
int find(int arr[][4]){
int i,j;
int maxRow=3;
for(i=3;i>=0;){
for(j=3;j>=0;){
if(arr[i][j]==1) j--;
else  {
maxRow=i;i--;break;
}
}
}
return maxRow;
}

int main(){
int i,j,d;
printf("A 2D array having 0 and 1 only\n");
int arr[4][4];
for(i=0;i<4;i++){
for(j=0;j<4;j++){
d=scanf("%d",&d);
arr[i][j]=d;
}
}
printf("row containning max no of 1's is : %d .",find(arr));
}
