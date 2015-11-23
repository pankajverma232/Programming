#include<stdio.h>
int main(){
int i ,j,n=4;
char num[100];
int arr[n][n];

 for(i=0;i<n;i++) {
        printf("enter number:\n");
        scanf("%s",num);


for(j=n-1;j>=0;j--){
              arr[i][j]=num[j];
           printf("%d   ",arr[i][j]);
        }

}



}
