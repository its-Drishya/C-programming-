#include<stdio.h>

int main(){
    int i,j,l,count=1;
    char alpha = 'A';
    
    for(i=5;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("  ");
        }
        
        for(l=1;l<=count;l++){
             printf("%c ",alpha);
        }  
        printf("\n");
        count++;
        alpha++;
    } 
    return 0;
}