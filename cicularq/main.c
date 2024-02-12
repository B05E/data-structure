#include <stdio.h>
#include <stdlib.h>
# define size 3

int q[size];
int f=-1;
int r=-1;

void insert(int item)
{
    if(f==(r+1)%size)
        printf("\n queue is full\n");
    else
    {
        if(f==-1)
            f++;
        r=(r+1)%size;
        q[r]=item;
    }
}

void dell()
{  int x;
    if(f==-1&&r==-1)
        printf("\n empty q \n");
    else
    {
         x=q[f];
        f=(f+1)%size;
        if(f==(r+1)%size)
        {
            f=r=-1;
        }
        printf("\n deleted item is %d\n",x);
    }
}

void display()
{
    if(f==-1&&r==-1)
        printf("\n empty q \n");

          else if(f<=r)
           {
               for(int i=f;i<=r;i++)
                printf("\n %d \n ",q[i]);
           }

           if(f>r)
           {
               for(int i=f;i<size;i++)
                printf("\n %d \n",q[i]);

               for(int i=0;i<=r;i++)
                 printf("\n %d \n",q[i]);
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
               insert(item);
              break;
           }
      case 2:dell();
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
