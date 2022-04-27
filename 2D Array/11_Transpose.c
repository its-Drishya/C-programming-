
#include<stdio.h>
int main(){
    int MTXarray1[20][20],finalArray[20][20],a,b,m,n;
    
    printf("Enter rows and columns for matrix: \n");
    scanf("%d%d",&m,&n);
    
    for(a=0;a<m;a++){
        for(b=0;b<n;b++)
        {
            printf("Enter (%d,%d) index element for the matrix: ",a,b);
            scanf("%d",&MTXarray1[a][b]);
        }
    }
    printf("\nThe given matrix is :\n");
    for(a=0;a<m;a++){
        for(b=0;b<n;b++){
            printf("%d ",MTXarray1[a][b]);
        }
        printf("\n");
    }
    for(a=0;a<n;a++)
    {
        for(b=0;b<m;b++)
        {
            finalArray[a][b] = MTXarray1[b][a];
        }
        printf("\n");
    }
    printf("The transpose of given matrix is:\n");
     for(a=0;a<n;a++)
     {
        for(b=0;b<m;b++)
        {
            printf("%d ",finalArray[a][b]);
        }
        printf("\n");
    }

return 0;
}