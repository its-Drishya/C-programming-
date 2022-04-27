#include<stdio.h>

int main(){
    int i,j,k,l,count=1;

    
    for(i=1;i<=5;i++){
        for(j=0;j<=i;j++){
            printf("  ");
        }
        
        for(k=9;k>=count;k--){
             printf("* ");
        }  
        printf("\n");
        count+=2;
    }
    
    return 0;
}