
#include<stdio.h>
int main(){
    int MTXarray[20][20],a,b,m,n,sum=0;
    
    printf("Enter rows and columns: \n");
    scanf("%d%d",&m,&n);
    
    for(a=0;a<m;a++){
        for(b=0;b<n;b++){
            printf("Enter (%d,%d) index element: ",a,b);
            scanf("%d",&MTXarray[a][b]);
        }
    }

    printf("\nThe array is :\n");
    for(a=0;a<m;a++){
        for(b=0;b<n;b++){
            printf("%d ",MTXarray[a][b]);
        }
        printf("\n");
    }

    for(a=0;a<m;a++){
        for(b=0;b<n;b++){
            sum+=MTXarray[b][a];  
        }
        printf("\nThe sum of %d column elements is: %d\n",a,sum);
        sum=0;
    }
    
    return 0;
}