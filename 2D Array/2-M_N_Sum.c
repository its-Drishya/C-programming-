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

    for(a=0;a<m;a++){
        for(b=0;b<n;b++){
            sum+=MTXarray[a][b];
        }
    }
    
    printf("The sum of the elements as : %d ",sum);
    return 0;
}