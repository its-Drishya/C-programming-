#include<stdio.h>

int main(){
    int i,j,k,l,count1=1,count2=1;
    
    for(i=5;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("  ");
        }
        
        for(l=1;l<=count1;l++){
             printf("* ");
        }  
        printf("\n");
        count1+=2;
    }
    
    for(i=1;i<=5;i++){
        for(j=0;j<=i;j++){
            printf("  ");
        }
        
        for(k=7;k>=count2;k--){
             printf("* ");
        }  
        printf("\n");
        count2+=2;
    }
    
    return 0;
}