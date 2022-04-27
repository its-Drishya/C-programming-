#include<stdio.h>
int main()
{
    int i,j,columns,rows;
    char character;
    printf("Enter rows and columns: \n");
    scanf("%d%d",&rows,&columns);
    printf("Enter a character to print: ");
    scanf(" %c",&character);
    printf("\n");
    for(i=rows;i>=1;i--){
       for(j=columns;j>=1;j--){
              printf("%c\t",character);
       } 
       printf("\n");
    }
    return 0;
}