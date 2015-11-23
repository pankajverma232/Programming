#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
int arr[] = {4,2,3,1,4,6,4,3,6};
int n = sizeof(arr)/sizeof(int);
vector<int> v(arr,arr+n);
v.resize(2);
vector<int>::iterator it;
for(it=v.begin();it!=v.end();it++) printf("%d \n",*it);
make_heap(arr,arr+n);
//for(int i=0;i<n;i++)
pop_heap(arr,arr+n);
//push_heap(arr,arr+n);
for(int i=0;i<n;i++)printf("%d ",arr[i]);

}
