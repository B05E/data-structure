#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

struct node* create()
{
    int n;
   struct node *newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("\n enter the value (if no value enter -1)\n");
   scanf("%d",&n);
   if(n==-1)
   {
       return;
   }
   else
   {
       newnode->data=n;
       printf("\n enter the %d left child\n",n);
       newnode->lchild=create();
       printf("\n enter the %d right child\n",n);
       newnode->rchild=create();
       return newnode;
   }
}

void preorder(struct node *root)
{
    if(root==0)
        return;

    printf("\n %d ",root->data);
    preorder(root->lchild);
    preorder(root->rchild);
}

void main()
{
    struct node *root;
    root=0;
    root=create();

   printf("\n preorder is:");
   preorder(root);
}
