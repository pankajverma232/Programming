#include<stdio.h>
int main(){
int V,E,i,j;
scanf("%d%d",&V,&E);
int graph[V+1][V+1];

for(i=1;i<=E;i++){
int a,b;
scanf("%d%d",&a,&b);
graph[a][b]=1;
graph[b][a] = 1;
}
int ans=0,k;
int count[V+1];
for(i=1;i<=V;i++) count[i]=1; 
 
for(i=1;i<=V;i++){
for(j=i+1;j<=V;j++){
if(graph[i][j]==1) count[i]++;
}
printf("%d\n",count[i]);
}
for(i=V;i>1;i--){
if(count[i]%2==0){ ans++;
for(k=1;k<i;k++){
if(graph[i][k]==1) count[k]--;
}

}

}
printf("%d\n",ans);
}
