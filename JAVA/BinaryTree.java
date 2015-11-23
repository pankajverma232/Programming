class kk{
public  void fun(){}
}

/*____________________________________*/

class BinaryTree{
int data;
BinaryTree l;
BinaryTree r;
public BinaryTree(){
data = -1;
l = null;
r=null;
}
public void insert(int data){
if(this.data==-1) {this.data = data; return;}
if(data < this.data){
if(l!=null) l.insert(data);else {
l = new BinaryTree();
l.data = data;
} 
}
if(data >  this.data){
if(r!=null) r.insert(data);else{
r = new BinaryTree();
r.data = data;
}
}
}
private  void inorder(){
if(this.data==-1) return;
if(l!=null) l.inorder();
System.out.println(" "+data);
if(r!=null) r.inorder(); 
}


public static void main(String args[]){
int arr[] = {4,3,2,5,7,5,4},i,n;
BinaryTree root = new BinaryTree();
for(i=0;i<7;i++)
root.insert(arr[i]);

kk k = new kk();
k.fun();
root.inorder();
}
}
