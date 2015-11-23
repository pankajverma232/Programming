#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
#include<vector>
int main(){
int arr[] = {3,1,7,5,9,11,23,21,34,22,6};
int n = sizeof(arr)/sizeof(arr[0]);
vector<int>v(arr,arr+n);
int T;
printf("enter T :\n");
scanf("%d",&T);
make_heap(v.begin(),v.end());
sort_heap(v.begin(),v.end());
for(int i=0;i<n;i++){
T -= v[i];
if(T==0){ printf("YES\n");
return 0;
}
}
printf("NO\n");
return 0;
}
