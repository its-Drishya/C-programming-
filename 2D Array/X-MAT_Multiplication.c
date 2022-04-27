
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int MTXarray1[20][20],MTXarray2[20][20],finalArray[20][20],i,j,m,n,o,p,X;
    
    printf("Enter rows and columns for matrix A: \n");
    scanf("%d%d",&m,&n);
    printf("Enter rows and columns for matrix B: \n");
    scanf("%d%d",&o,&p);

    if (n==o)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("Enter (%d,%d) index element for the matrix A: ",i,j);
                scanf("%d",&MTXarray1[i][j]);
            }
        }
    
        printf("\n\n\n");
        for(i=0;i<o;i++)
        {
            for(j=0;j<p;j++)
            {
                printf("Enter (%d,%d) index element for the matrix B: ",i,j);
                scanf("%d",&MTXarray2[i][j]);
            }
        }   

        printf("\nThe first matrix is :\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",MTXarray1[i][j]);
            }
            printf("\n");
        }

        printf("\nThe second matrix is :\n");
        for(i=0;i<o;i++)
        {
            for(j=0;j<p;j++)
            {
                printf("%d ",MTXarray2[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<p;j++)
            {
                finalArray[i][j]=0;
                for(X=0;X<p;X++)
                {
                finalArray[i][j] += MTXarray1[i][X]*MTXarray2[X][j];
                }
            }
            printf("\n");
        }
        printf("\nThe final %dx%d matrix is :\n",n,p);
        for(i=0;i<=m-1;i++)
            {
                for(j=0;j<=p-1;j++)
                {
                    printf("%d\t",finalArray[i][j]);
                }
                printf("\n");
            }
    }   
    else
        printf("Invalid");
    return 0;
}