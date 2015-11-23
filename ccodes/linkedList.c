#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *next;
};
void insert(struct node **root,int d){
struct node *temp =(struct node *)malloc(sizeof(struct node *));
temp->data=d;
temp->next=NULL;
if(!*root) *root=temp;
else insert(&(*root)->next,d); 
}
void print(struct node *root){
if(!root) return;
printf("%d ",root->data);
print(root->next);
}
int main(){
struct node *root=NULL;
int d,n;
printf("Enter number of nodes :");
scanf("%d",&n);
while(n--){
printf("Enter node :");
scanf("%d",&d);
insert(&root,d);
}
print(root);
printf("\n");
}
