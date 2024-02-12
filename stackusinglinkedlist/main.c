#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *head=NULL;


void push(int item)
{
    struct node *newnode=(struct node)malloc(sizeof(struct node));

    if(head==NULL)
    {
       head=newnode;
       head->data=data;
       head->link=NULL;
    }

    struct node *ptr;
    ptr=head;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=newnode;
    newnode->data=data;
    newnode->link=NULL;

}

void pop()
{  struct node *ptr,*temp;
     int n;

    if(head==NULL)
        printf("\n list empty\n");
     ptr=head;
    while(ptr->link!=NULL)
    {
        temp=ptr;
        ptr=ptr->link;
    }
    n=ptr->data;
    free(ptr);
    temp->link=NULL;
    ptr=temp;

}

void display()
{
      struct node *ptr,*temp;

    if(head==NULL)
        printf("\n list empty\n");
     ptr=head;
    while(ptr->link!=NULL)
    {
        printf("\n %d ",ptr->data);
        ptr=ptr->link;
    }
}
int main()
{
     int ch,item;

   do
   {
       printf("\nEnter your choice \n 1:push \n 2:pop\n 3:display\n 4:exit\n");
       scanf("%d",&ch);

   switch(ch)
   {
       case 1:

           {printf("\n enter the item \n");
             scanf("%d",&item);
               push(item);
              break;
           }
      case 2:pop();
            break;

    case 3:display();
           break;

    case 4:
        break;


         default:
         printf("\n invalid ope\n");
   }
  }while(ch!=4);
}
