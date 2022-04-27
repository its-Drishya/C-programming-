#include<stdio.h>
#include<stdlib.h>
int inpu(int [][5],int,int);
int disp(int [][5],int,int);
int mult(int [][5],int [][5],int[][5],int,int,int);

int main()
{
    int A[5][5],B[5][5],M[5][5],r1,c1,r2,c2;
    printf("Enter the row and column of the first matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter the rows and columns for the second matrix: ");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2)
    {
        printf("Cant perform matrix multiplicatoin.");
        return 1;
    }
    else
    printf("\nInput the elements of first matrix: \n");
    inpu(A,r1,c1);
    printf("\nInput the elements of second matrix: \n");
    inpu(B,r2,c2);
    printf("\nThe elements of first matrix are: \n");
    disp(A,r1,c1);
    printf("\nThe elements of second matrix are: \n");
    disp(B,r2,c2);
    mult(A,B,M,r1,c2,c1);
    printf("\nThe elements of final matrix are: \n");
    disp(M,r1,c2);
    return 0;
}

int inpu(int A[][5],int r, int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter [%d][%d] element: \n",i,j);
            scanf("%d",&A[i][j]);
        }
    }
}
int disp(int A[][5],int r, int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
}
int mult(int A[][5],int B[][5],int C[][5],int r,int c,int c1)
{
    int i,j,k;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            C[i][j] = 0;
            for(k=0;k<c1;k++)
            C[i][j] += A[i][k] * B[k][j];
        }
    }
}
