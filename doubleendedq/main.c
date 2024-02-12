#include <stdio.h>
#include <stdlib.h>
# define size 3

int q[size];
int f=-1;
int r=-1;

void insertrear(int item)
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

void dellfront()
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

void insertfront(int item)
{
    if((r==(f+1)%size)&&(f==0||r==size-1))
    printf("queue is full");

    else
    {
        if((f==0||f==-1)&&r>size)
            f=size-1;
        f--;
        q[f]=item;
    }

}

void dellrear()
{   int item;
    if(f==-1&&r==-1)
        printf("\n q is full");

    else
    {   r--;
        item=q[r];


        if(f==(r+1))
            f=r=-1;
    }
}

void display()
{
    int i;

    for(i=f;i!=(r+1)%size;i=(i+1)%size)
    {
        printf("\n %d\n",q[i]);
    }
    printf("\n %d\n",q[i]);
}


void main()
{
   int ch,item;

   do
   {
       printf("\nEnter your choice \n 1:insert at rear \n 2:delete at front\n 3:insert at front\n 4:delete at rear\n 5:display \n 6:exit\n");
       scanf("%d",&ch);

   switch(ch)
   {
       case 1:

           {printf("\n enter the item \n");
             scanf("%d",&item);
               insertfront(item);
              break;
           }
      case 2:dellfront();
            break;

    case 3:
           {printf("\n enter the item \n");
             scanf("%d",&item);
               insertrear(item);
              break;
           }

    case 4:
        dellrear();
        break;

    case 5:
        display();
        break;

    case 6:
        break;

         default:
         printf("\n invalid ope\n");
   }
  }while(ch!=6);
}
