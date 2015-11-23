#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 

int main() {
    int n, k, i, count;
    scanf("%d%d", &n, &k);
    int *prices = (int *)malloc(sizeof(int)*n);
    for(i=0; i<n; i++) {
        scanf("%d", &prices[i]);
    }
     
   
    int answer = 0;
    // Compute the answer
    printf("%d\n", answer);
      
    return 0;
}

