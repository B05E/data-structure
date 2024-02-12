#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* create()
{
   int x;
   struct node* newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("Enter the data (if no node enter -1)");
   scanf("%d",&x);

   if(x==-1)
   {
        return 0;
   }
   else
   {
       newnode->data=x;
       printf("\nEnter the left child of %d\n",x);
       newnode->left=create();
       printf("\n Enter the right child of %d\n",x);
       newnode->right=create();
       return newnode;
   }

}

void preorder(struct node* root)
{
    if(root==0)
        return ;
    else
    {
        printf("%d \t",root->data);
        preorder(root->left);
        preorder(root->right);
    }

}
void inorder(struct node *root)
{
    if(root==0)
        return;
    else
    {
        inorder(root->left);
        printf("\n%d \t",root->data);
        inorder(root->right);
    }
}
int main()
{
    struct node* root;
    root=0;
    root=create();

    printf("\n preorder \n");
    preorder(root);
    printf("\n postorder:\n");
    inorder(root);
    return 0;
}
