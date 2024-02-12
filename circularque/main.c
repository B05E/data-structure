#include <stdio.h>
#include <stdlib.h>
#define size 5
 int q[size];
int r=-1;
int f=-1;

void enqueue(int item)
{
    if(f==(r+1)%size)
        printf("q is full/n");
        else
        {
            if(f==-1)
                f++;
            r=((r+1)%size);
            q[r]=item;
            printf("Element %d inserted",item);
        }
}

void dequeue()
{
    int item;
    if(f==-1&&r==-1)
        printf("\n q is empty\n");
    else
    {
        item=q[f];
        f=((f+1)%size);

        if(f==((r+1)%size))
            f=r=-1;
    }
}

void display()
{
    if(f==-1&&r==-1)
        printf("q is empty\n");
    else if(f<=r)
    {
        for(int i=f;i<=r;i++)
            printf("%d\n",q[i]);
    }
     if(f>r)
    {
        for(int i=f;i<size-1;i++)
           printf("%d\n",q[i]);
        for(int i=0;i<=r;i++)
            printf("%d\n",q[i]);
    }

}

int main()
{
     int choice=0;
    int optr,ele;

    do
    {
      printf("enter the choice\n 1:enqueue\n 2:dequeue \n 3:display \n 4:exit\n");
       scanf("%d",&choice);

       switch(choice)
       {
       case 1:
           {
               printf("enter the ele:");
               scanf("%d",&ele);
               enqueue(ele);
               break;
           }
       case 2:
        {
            printf("\n element dequed \n");
            dequeue();
            break;

        }
       case 3:
        {
            display();
            break;
        }
       default:
        printf("invalid\n");
       // break;

       }
    }while(choice!=4);
    return 0;
}



