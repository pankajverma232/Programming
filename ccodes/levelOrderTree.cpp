#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;
struct node {
int data;
struct node *l,*r;
};
struct node *insert(struct node *root,int value){
struct node *temp = (struct node *)malloc(sizeof(struct node));
temp->l=temp->r=NULL;
temp->data = value;
if(!root) return temp;
if(root->data>value) root->l = insert(root->l,value);
if(root->data<value) root->r = insert(root->r,value);
return root;
}
void levelOrder(struct node *root){
queue<struct node *>Q;
if(!root) return ;
Q.push(root);
while(!Q.empty()){
struct node * temp = Q.front();
Q.pop();
printf("%d\t",temp->data);
if(temp->l) Q.push(temp->l);
if(temp->r) Q.push(temp->r);
}
}
int main(){
struct node *root = NULL;
int d,n;
printf("enter no of elements :");
scanf("%d",&n);
while(n--){
scanf("%d",&d);
root = insert(root,d);
}
levelOrder(root);
printf("\n");

}
