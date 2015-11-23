#include "BST.h"
void printPost(struct node *root){
if(!root) return;
printPost(root->l);
printPost(root->r);
printf("%d ",root->data);
}
int main(){
struct node *root=NULL;
int n,d;
printf("enter number of nodes:\n");
scanf("%d",&n);
while(n--){
scanf("%d",&d);
root=insert(root,d);
}
printf("post Order :\n");
printPost(root);
printf("\ninorder :\n");
print(root);
}
