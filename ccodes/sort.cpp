#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool fun(int a,int b){return a<b;}
int main(){
int arr[] = {2,3,4,1,5,6,4,32,3,2,34,4,3,34,343,43,4,34,3,4,3,4};
int n = sizeof(arr)/sizeof(int);
//vector<int> v(arr,arr+n);
//sort(v.begin(),v.end(),fun);
//vector<int>::iterator it;
//for(it=v.begin();it != v.end();it++) printf("%d ",*it);
sort(arr,arr+n);
for(int i=0;i<n;i++) printf("%d ",arr[i]);
}
