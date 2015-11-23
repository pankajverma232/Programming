class LinkedList{
int data=0;
LinkedList next;
boolean head ;
LinkedList(){
next = null;
}

void insert(int key){
if(data == 0) {
data = key;
return;
}
if(next == null){
next = new LinkedList();
next.data = key;
}
else{
next.insert(key);
}
}
LinkedList reverse(){
LinkedList curr = this,next,prev=null;
while(curr.next != null){
next = curr.next;
curr.next = prev;
prev = curr;
curr = next;
}
curr.next = prev;
return curr;
}
public static void main(String ar[]){
LinkedList list = new LinkedList();
int arr[] = {3,5,6,34,32,2,4,4,34,5};
for(int a:arr){
list.insert(a);
}

LinkedList curr = list;
curr = curr.reverse();
while(curr!=null){
System.out.println(" "+curr.data);
curr = curr.next;
}
}
}
