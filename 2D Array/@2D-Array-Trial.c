//WAP to print 5x6 array
#include<stdio.h>
int main(){
    int myArray[5][6],a,b;
    for(a=0;a<5;a++){
        for(b=0;b<6;b++){
            printf("Enter (%d,%d) index element: ",a,b);
            scanf("%d",&myArray[a][b]);
        }
    }
    printf("The 5x6 array is: \n");
    for(a=0;a<5;a++){
        for(b=0;b<6;b++){
            printf("%d ",myArray[a][b]);
        }
        printf("\n");
    }

}