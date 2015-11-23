#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node * l,*r;
};
struct node *insert(struct node *root,int d){
struct node *temp =(struct node *)malloc(sizeof(struct node));
temp->data=d;
temp->l=temp->r=NULL;
if(!root) return temp;
if(root->data >d) root->l = insert(root->l,d);
else root->r = insert(root->r,d);
return root;
}

void print(struct node *root){
if(!root) return;
print(root->l);
printf("%d ",root->data);
print(root->r);
}
/*
int main(){
struct node *root =NULL;
int d,n;
printf("enter no of nodes to be entered :\n");
scanf("%d",&n);
while(n--){
scanf("%d",&d);
root=insert(root,d);
}
print(root);
printf("\n");
}
*/
