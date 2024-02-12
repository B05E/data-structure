#include <stdio.h>
#include <stdlib.h>
/*void readmat(int[10][10],int,int);
void totuple(int[10][10],int,int,int[10][10]);
void totranspose(int[10][10],int[10][10]);
void addtuple(int[][3],int[][3]);
void display(int[][3]);*/

void readmat(int a[][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
}
void totuple(int a[][10],int n,int m,int b[][3])
{
    int i,j,k=1;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=0)
            {
                b[k][0]=i;
                b[k][1]=j;
                b[k][2]=a[i][j];
                k++;
            }
        }

    }
        b[0][0]=m;
        b[0][1]=n;
        b[0][2]=k-1;
}
void display(int a[][3])
{
    int i,j;
    printf("\n%d\t%d\t%d\t\n",a[0][0],a[0][1],a[0][2]);
    for(i=1;i<a[0][0];i++)
    {
        for(j=0;j<a[0][1];j++)
        {
            printf("%d",a[i][j]);
        }
    }
}
void totranspose(int a[10][10],int m,int n)
{
    int c[10][10],i,j;
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           a[i][j]=c[j][i];
       }
   }

 //  totuple(int at[10][10],int m,int n);
   //display(at);
}

int main()
{
    int m,n,a[10][10],at[10][3],b[10][3],c[10][10];
    printf("enter the rows and col of matrix:");
    scanf("%d%d",&m,&n);
    readmat(int a[10][10],int m,int n);
    totuple(int a[10][10],int at[10][10] );
    display(at);
    totranspose(int a[10][10],int m,int n);
     totuple(int c[10][10],int m,int n);
   display(c);

    return 0;
}
