
#include<stdio.h>
int main(){
int arr[] = {2,6,4,33,22,2,23,23,43,45,5,35,34,34,5};
int n;
int in = 2;
int ex=0;
for(n=1;n<15;n++){
int greater = in>ex?in:ex;
in = ex+arr[n];
ex = greater;
}
printf("sum is %d\n",in>ex?in:ex);
}
/*
#include<stdio.h>
int FindMaxSum(int arr[], int n) {
int incl = arr[0]; int excl = 0;  int excl_new;
int i;
for (i = 1; i < n; i++) {

excl_new = (incl > excl)? incl: excl;
incl = excl + arr[i];
excl = excl_new;
}
return ((incl > excl)? incl : excl);
}
int main() {
int arr[] ={2,6,4,33,22,2,23,23,43,45,5,35,34,34,5}; printf("%d \n", FindMaxSum(arr, 15)); return 0;
}
*/
