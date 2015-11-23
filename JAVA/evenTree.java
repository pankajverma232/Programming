import java.util.Scanner;
class evenTree{
public static void  main(String[] args){
int V,E,i,j;
Scanner s = new Scanner(System.in);
 V = s.nextInt();
E = s.nextInt();

int graph[][]= new int[V+1][V+1];

for(i=1;i<=E;i++){
int a=s.nextInt();
int b = s.nextInt();
graph[a][b]=1;
graph[b][a] = 1;
}
int ans=0,k;
int count[]=new int[V+1];
for(i=1;i<=V;i++) count[i]=1;

for(i=1;i<=V;i++){
for(j=i+1;j<=V;j++){
if(graph[i][j]==1) count[i]++;
}
}
for(i=V;i>1;i--){
if(count[i]%2==0){ ans++;
for(k=1;k<i;k++){
if(graph[i][k]==1) count[k]--;
}

}

}
System.out.println(""+ans);
}
}
