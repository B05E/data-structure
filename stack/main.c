#include <stdio.h>
#include <stdlib.h>
# define size 5
# define invalid -999
int s [size];
int top=-1;

void push(int item)
{
    if(top==size-1)
    {
        printf("\n stack overflow\n");
    }
    else
    {
        top++;
        s[top]=item;
    }
}

void pop()
{   int item;

    if(top==-1)
    {
        printf("\n stack underflow\n");
    }
    else
    {
      item=s[top];
      top--;
      printf("\n popped item is %d",item);
    }
}
void display()
{
    for(int i=top;i>=0;i--)
    {
        printf("\n %d",s[i]);
    }
}

void main()
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
