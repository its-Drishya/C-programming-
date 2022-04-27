
#include<stdio.h>
int main(){
    int MTXarray1[20][20],MTXarray2[20][20],finalArray[20][20],a,b,m,n;
    
    printf("Enter rows and columns for both matrices: \n");
    scanf("%d%d",&m,&n);
    
    for(a=0;a<m;a++){
        for(b=0;b<n;b++){
            printf("Enter (%d,%d) index element for the first matrix: ",a,b);
            scanf("%d",&MTXarray1[a][b]);
        }
    }
    
    printf("\n\n\n");
    for(a=0;a<m;a++){
        for(b=0;b<n;b++){
            printf("Enter (%d,%d) index element for the second matrix: ",a,b);
            scanf("%d",&MTXarray2[a][b]);
        }
    }

    printf("\nThe first matrix is :\n");
    for(a=0;a<m;a++){
        for(b=0;b<n;b++){
            printf("%d ",MTXarray1[a][b]);
        }
        printf("\n");
    }

    printf("\nThe second array is :\n");
    for(a=0;a<m;a++){
        for(b=0;b<n;b++){
            printf("%d ",MTXarray2[a][b]);
        }
        printf("\n");
    }

    printf("\nThe final matrix is :\n");
    for(a=0;a<m;a++){
        for(b=0;b<n;b++){
            printf("%d ",MTXarray1[a][b]+MTXarray2[a][b]);
        }
        printf("\n");
    }
return 0;
}
