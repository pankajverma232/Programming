#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<stdio.h>
int main() {

   int n, i,j;
char num[10];



    scanf("%d",&n);
   int arr[n][n];
    int remember[n][n];
        for(i=0;i<n;i++){
         for(j=0;j<n;j++){
            remember[i][j] = 0;
        }
    }
 
    for(i=0;i<n;i++) {

	scanf("%s",num); 

	
for(j=0;j<n;j++){
              arr[i][j]=num[j]-48;

        }
  
 }
      
    for(i=1;i<n-1;i++){
        for(j=1;j<n-1;j++){
            if(arr[i][j]>arr[i-1][j]&&arr[i][j]>arr[i+1][j]&&arr[i][j]>arr[i][j-1]&&arr[i][j]>arr[i][j+1])
                remember[i][j] = 88;
            
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(remember[i][j] != 0){
		printf("%c",remember[i][j]);
		continue;	
		}           
	printf("%d",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

