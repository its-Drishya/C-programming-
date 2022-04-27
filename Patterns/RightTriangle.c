#include<stdio.h>

int main(){
    int i,j,l,count=1;
    
    for(i=5;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("  ");
        }
        
        for(l=1;l<=count;l++){
             printf("* ");
        }  
        printf("\n");
        count+=2;
    } 
    return 0;
}