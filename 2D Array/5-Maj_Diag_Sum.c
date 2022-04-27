
#include<stdio.h>
int main(){
    int MTXarray[20][20],a,b,m,n,sum=0;
    
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
            printf("%d ",MTXarray[a][b]);
        }
        printf("\n");
    }

    for(a=0;a<m;a++){
        for(b=0;b<n;b++){
            if((a+b)==m-1){
                sum += MTXarray[a][b];
            }
        }
    }
    
    printf("The sum of major diagonal elements as : %d",sum);
    
    return 0;
}