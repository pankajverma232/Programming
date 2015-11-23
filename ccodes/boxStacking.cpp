#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct box{
int h,w,l;
};
struct comp
{
   bool operator()(const box& s1, const box& s2)
   {
       return s1.l*s1.w > s2.l*s2.w ;
   }
};

int max (int x, int y)
{ return (x > y)? x : y; }
 
int min(int a,int b){
return a<b ?a:b;
}
int main(){
int n;
printf("enter no of boxes:\n");
scanf("%d",&n);
struct box B[n];
int i,j;
printf("enter h w l:\n");
for(i=0;i<n;i++){
scanf("%d%d%d",&B[i].h,&B[i].w,&B[i].l);
}
struct box T[3*n];
int index=0;

for(i=0;i<n;i++){
T[index] = B[i];
index++;
T[index].h = B[i].w;
T[index].w = max(B[i].h,B[i].l);
T[index].l = min(B[i].h,B[i].l);
index++;
T[index].h = B[i].l;
T[index].w = max(B[i].w,B[i].h);
T[index].l = min(B[i].w,B[i].h);;
index++;
}


vector<struct box> VB(T,T+n*3);
make_heap (VB.begin(),VB.end(),comp());
sort_heap(VB.begin(),VB.end(),comp());
int height[n*3];
for(i=0;i<n*3;i++)height[i] = T[i].h;
int max = 0;
for(i=1;i<n*3;i++){
for(j=0;j<i;j++){
if(T[i].w>T[j].w && T[i].l>T[j].l && height[i]<height[j]+T[i].h) height[i] = height[j]+T[i].h;
//if(max<height[i]) max = height[i];
}
}
for(i=0;i<n*3;i++) if(max<height[i]) max = height[i];
printf("max possible height is : %d\n",max);
for(i=0;i<n*3;i++){
printf("%d\t%d\t%d\n",VB[i].l,VB[i].w,VB[i].h);
}
}
