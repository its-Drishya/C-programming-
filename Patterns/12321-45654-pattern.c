//pattern
#include <stdio.h>

int main()
{
    int i,j,k;
    
    for(i=1;i<=15;i+=3){
        for(j=i;j<=(i+2);j++){
            printf("%d ",j);
        }
        for(k=j;k<=(j+1);k++){
            if((k-2)%3==0){
                printf("%d ",k-4);
            }else{
               printf("%d ",k-2); 
            }
            
        }
        printf("\n");
    }

    return 0;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
