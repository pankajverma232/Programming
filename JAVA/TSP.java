class TSP{
static getPath(int[] source ,int[] destination,int[] weight,int query,int[] target){

}
public static void main(String[] args){
Scanner s = new Scanner(System.in);
System.out.println("Enter no of paths :");
int N = s.nextInt();
System.out.println("enter paths : ");
int[] source = new int[N];
int[] destination = new int[N];
int[] weight = new int[N];
for(int i=0;i<N;i++){
source[i] = s.nextInt();
destination[i] = s.nextInt();
weight[i] = s.nextInt();
}
system.out.println("enter no of Queries :");
int Q = s.nextInt();
int[] target = new int[Q];
for(int i =0;i<Q;i++){
target[i] =  s.nextInt();
getPath(source,destination,weight,Q,target);
}
}
}
