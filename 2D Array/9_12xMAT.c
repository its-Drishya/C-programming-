
#include<stdio.h>
int main(){
    int MTXarray[20][20],a,b,m,n;
    
    printf("Enter m and n: \n");
    scanf("%d%d",&m,&n);
    
    for(a=0;a<m;a++){
        for(b=0;b<n;b++){
            printf("Enter (%d,%d) index element: ",a,b);
            scanf("%d",&MTXarray[a][b]);
        }
    }

    printf("\nThe array as :\n");
    for(a=0;a<m;a++){
        for(b=0;b<n;b++){
            printf("%d ",12*MTXarray[a][b]);
        }
        printf("\n");
    }

    
    return 0;
}