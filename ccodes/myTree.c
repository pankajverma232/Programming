#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *l,*r;
};
struct node * insert(struct node *root,int value){
if(!root){
root=(struct node *)malloc(sizeof(struct node));
root->data = value;
root->l=root->r=NULL;
return root;
}
if(root->data>value) root->l = insert(root->l,value);
if(root->data<value) root->r = insert(root->r,value);
return root;
}
void inorder(struct node *root){
if(!root) return;
inorder(root->l);
printf("%d ",root->data);
inorder(root->r);
}
struct node * deleteHalfNodes(struct node *root){
if(!root) NULL;
if(!root->l&&!root->r) return root;
if(!root->l) return root->r;
if(!root->r) return root->l;
root->l=deleteHalfNodes(root->l);
root->r=deleteHalfNodes(root->r);

return root;
}
int main(){
struct node *root = NULL;
int n,d;
printf("enter number of nodes:\n");
scanf("%d",&n);
while(n--){
scanf("%d",&d);
root = insert(root,d);
}
inorder(root);
printf("\nafter deletion of half nodes:\n");
root = deleteHalfNodes(root);

inorder(root);
printf("\n");
}
