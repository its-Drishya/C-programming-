
#include<stdio.h>
int main(){
    int MTXarray[20][20],a,b,m,n,num,check=0;
    
    printf("Enter m and n: \n");
    scanf("%d%d",&m,&n);
    
    for(a=0;a<m;a++){
        for(b=0;b<n;b++){
            printf("Enter (%d,%d) index element: ",a,b);
            scanf("%d",&MTXarray[a][b]);
        }
    }
    
    printf("\nThe array is :\n");
    for(a=0;b<m;a++){
        for(b=0;b<n;b++){
            printf("%d ",MTXarray[a][b]);
        }
        printf("\n");
    }

    printf("\nEnter a number to check if it is present in the array: ");
    scanf("%d",&num);

    for(a=0;a<m;a++){
        for(b=0;b<n;b++){
            if(MTXarray[a][b]==num){
                printf("\n%d is present in the array at (%d,%d).",num,a,b);
                check++;
            }
        }
    }
    if(check==0){
        printf("\n%d is not present in array.",num);
    }
    return 0;
}