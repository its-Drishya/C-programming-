// a program to read two numbers and perform certain instructions
#include<stdio.h>

int main(){
    
    int num1,num2,choice;
    char endornot;
    
    while(1){
    
        printf("\nEnter two numbers: \n");
        scanf("%d%d",&num1,&num2);
        printf("Choose any of the following operations to perform: \n");
        printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Square\n6.Cube\n");
        scanf("%d",&choice);
    
        switch(choice){
            case 1: printf("%d + %d = %d",num1,num2,num1+num2);
            break;
            case 2: printf("%d - %d = %d",num1,num2,num1-num2);
            break;
            case 3: printf("%d * %d = %d",num1,num2,num1*num2);
            break;
            case 4: printf("%d / %d = %d",num1,num2,num1/num2);
            break;
            case 5: printf("%d^2, %d^2 : %d, %d",num1,num2,num1*num1,num2*num2);
            break;
            case 6: printf("%d^3, %d^3 : %d, %d",num1,num2,num1*num1*num1,num2*num2*num2);
            break;
        }
        printf("\nDo you want to Stop the program(y/n)?: \n");
        scanf(" %c",&endornot);

        if(endornot=='y'|| endornot=='Y'){
            break;
        }
        else if(endornot=='n' || endornot =='N'){
            continue;
        }
    
    }
    return 0;
}

