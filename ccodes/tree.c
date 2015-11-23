#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *l,*r;
};
struct node* Queue[10];
int front =-1,rear =-1 ;

int emptyQueue(){
if(front>rear||front== -1) return 1;
return 0;
}

struct node* deQueue(){
struct node* temp=Queue[front];
Queue[front]=0;
front++;
return temp;
}

void enQueue(struct node* n){
if(front==-1) front++;
rear++;
Queue[rear]=n;
}

int arr[10];
struct node *insert(struct node *root,int d){
if(!root){
root=(struct node *)malloc(sizeof(struct node));
root->data=d;
root->l=root->r=NULL;
return root;
}
if(root->data<d) root->l=insert(root->l,d);
else root->r = insert(root->r,d);
return root;
}



int hashArr[10];
void print(struct node *root){
static int m=0;
if(!root) return;
print(root->l);
hashArr[m++] = root->data;
printf("%d ",root->data);
print(root->r);
}

void printAgain(struct node **root){
static int m = 0;
if(!*root) return ;
printAgain(&(*root)->l);
(*root)->data = hashArr[m++];
printAgain(&(*root)->r);
}

void finalPrint(struct node *root){
if(!root) return ;
finalPrint(root->l);
printf("%d ",root->data);
finalPrint(root->r);
}



void printPath(struct node *root,int index){
int i;
if(!root) return;
index++;
arr[index]=root->data;
if(!root->l && !root->r){ 
	for(i=0;i<=index;i++)
		printf("%d ",arr[i]);
	printf(": ");
	}
printPath(root->l,index);
printPath(root->r,index);
}

int heightOfTree(struct node *root){
if(!root) return 0;

int lh = heightOfTree(root->l);
int rh = heightOfTree(root->r);
int h = lh > rh ? lh:rh;
return h+1;
}


void levelSum(struct node *root,int *arr,int level){
if(!root) return;
arr[level] += root->data;
levelSum(root->l,arr,level+1);
levelSum(root->r,arr,level+1);
}

void levelEndNotify(struct node *root){
if(!root) return;
enQueue(root);
enQueue(NULL);
while(!emptyQueue()){
struct node *temp = deQueue();
if(temp==NULL){
printf("notified\n");
if(!emptyQueue())
enQueue(NULL);
}
else {
printf("%d ",temp->data);
if(temp->l) enQueue(temp->l);
if(temp->r) enQueue(temp->r);
}
}
}
struct node* rightSide(struct node *root,int key){
if(!root) return NULL;
static int flag = 0;
enQueue(root);
enQueue(NULL);
while(!emptyQueue()){
struct node *temp = deQueue();
if(!temp){ flag = 0;
if(!emptyQueue()) enQueue(NULL);
}
else{
if(flag) return temp;
if(temp->data==key) flag = 1;
if(temp->l) enQueue(temp->l);
if(temp->r) enQueue(temp->r);
}
}
return NULL;
}

void zigzagPrint(struct node *root){
if(!root) return;
enQueue(root);
enQueue(NULL);
int ltr=1;
while(!emptyQueue()){
struct node *temp = deQueue();
if(temp==NULL){
if(!emptyQueue()){
enQueue(NULL);
if(ltr==0) ltr =1;
else ltr = 0;
}
}
else {
printf("%d	",temp->data);
if(ltr){
if(temp->l) enQueue(temp->l);
if(temp->r) enQueue(temp->r);
}
else{
if(temp->r) enQueue(temp->r);
if(temp->l) enQueue(temp->l);
}
}
}
}


void levelOrder(struct node *root){
if(!root) return;
enQueue(root);
int i=0;
int flag = 1;
while(!emptyQueue()){
struct node * temp = deQueue();
printf("data :%d \n",temp->data);
if(flag){
if(temp->r) enQueue(temp->r);
if(temp->l) enQueue(temp->l);
flag = 0;
}
else{
if(temp->l) enQueue(temp->l);
if(temp->r) enQueue(temp->r);
flag = 1;
}
}
}
void levelOrderWithoutQueue(struct node *root,int level){
if(!root) return;
printf("%d	",root->data);
levelOrderWithoutQueue(root->l,level+1);
levelOrderWithoutQueue(root->r,level+1);
}

void verticalSum(struct node *root,int *arr,int index){
if(!root) return;
arr[index] += root->data;
verticalSum(root->l,arr,index-1);

verticalSum(root->r,arr,index+1);
}

struct node * prune(struct node* root,int *k,int sum){
if(!root) return NULL;
sum += root->data;
if(root->l)root->l = prune(root->l,k,sum);
if(root->r)root->r = prune(root->r,k,sum);


if(!root->l && !root->r && sum < *k){

printf("to be prubed :%d with sum :%d\n",root->data,sum);
*k -= root->data;
root=NULL; return NULL;
}


return root;

}


void leftView(struct node *root){
if(!root) return ;
printf("%d ",root->data);
if(root->l) leftView(root->l);
else leftView(root->r);
}

int leafLevel(struct node *root,int level){
static int nodeLevel = 0;
if(!root) return 1;
if(!root->l && !root->r) {
if(nodeLevel == 0)nodeLevel=level;
if(nodeLevel != level)return 0;
}
return leafLevel(root->l,level+1)&&leafLevel(root->r,level+1);
return 1;
}

int compare(const void *a,const void *b){
return *(int *)a - *(int *)b;
}

int main(){
struct node *root=NULL;
int n,d,sum[10],key,k,total=0;

printf("enter number of nodes :");
scanf("%d",&n);
int numOfNodes = n;
while(n--){
scanf("%d",&d);
root = insert(root,d);
}
printf("\nhere is your tree which is not BST !\n");
print(root);
qsort(hashArr,numOfNodes,4,compare);
printAgain(&root);
printf("\nhere is the BST:\n");
finalPrint(root);
printf("\n");
printf("\nhere is your path tree\n");
printPath(root,-1);
printf("\nhere is your level order Zig-Zag traversal\n");
levelOrder(root);
printf("here is level sum of the tree:\n");
int height = heightOfTree(root);
printf("height = %d\n",height);
int arr[height];
for(n=0;n<height;n++)arr[n]=0;
levelSum(root,arr,0);
for(n=0;n<height;n++) printf("sum : %d\n",arr[n]);
levelEndNotify(root);
printf("Zig-Zag Print :\n");
zigzagPrint(root);
printf("vertical Sum Array:\n");
for(n=0;n<10;n++) sum[n]=0;
verticalSum(root, sum,5);
for(n=0;n<10;n++) printf("sum : %d\n",sum[n]);
printf("here is level order without Queue:\n");
levelOrderWithoutQueue(root,0);
printf("\n");
printf("enter node value which right side node value you want:\n");
scanf("%d",&key);
struct node *temp = rightSide(root,key);
if(temp) printf("right side node is  : %d\n",temp->data);
else printf("NULL\n");
//printf("enter value of k:\n");
//scanf("%d",&k);
//root=prune(root,&k,total);

//printf("\nhere is left view of the tree\n");
//leftView(root);
printf("Does all leaves of the tree are at the dame level? :");
if(leafLevel(root,0)) printf("Yes!\n");
else printf("Noooooooh!");

}

