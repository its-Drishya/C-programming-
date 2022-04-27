//a menu driven programs to perform different operations
#include <stdio.h>

int main()
{
    int num;
    char choice,endornot;
    int n, reverse = 0, rem,cube=0;
    int i,count=0;
    int fact=1,Onum;
    
    while(1){
    
    printf("*****MENU*****\na.Check if Palindrome\nb.Check if Armstrong\nc.Check if divisible by 5\nd.Check if Prime number\ne.Factorial of number\n");
    printf("\nEnter a number to perform the above operations: ");
    scanf("%d",&num);
    printf("\nChoose a task to be performed(a/b/c/d/e): ");
    scanf(" %c",&choice);
    
    switch(choice){
        case 'a':
            // A program to check whether a number is a palindrome or not
            n = num;
    
            do{
                rem = n % 10;
                reverse = reverse * 10 + rem;
                n = n/10;
            }while (n != 0);

            if (num == reverse)
                printf("\n%d is a palindrome.", num);
            else
                printf("\n%d is not a palindrome.", num);
        break;
        
        case 'b': 
            // A program to check whether a number is an Armstrong number or not
               n = num;
    
            do{
                rem = n % 10;
                cube = rem*rem*rem + cube;
                n = n/10;
            }while (n != 0);

            if (num == cube)
                printf("\n%d is an Armstrong number.", num);
            else
                printf("\n%d is not an Armstrong number.", num);
        break;
        
        case 'c':
            // A program to check whether a numebr is divisible by 5 or not
            
            if(num%5==0){
                printf("%d is divisible by 5.",num);
            }
            else{
                printf("%d is not divisible by 5.",num);
            }
        break;  
        
        case 'd':
            // A program to check whether a number is prime or not
            
            for(i=2;i<num;i++){
        
                if(num%i==0){
                    count++;
                }
            }

            if(count>0 || num==1){
                printf("%d is not a prime number.",num);
            }
            else{
                printf("%d is a prime number.",num);
            }
        break;    
        
        case 'e':
            // A program to find the factorial of a number
            
            Onum = num;
            while(num!=0){
                fact = fact*num;
                num--;
            }
    
            printf("%d is the factorial of %d",fact,Onum);
        break;    

    }
        printf("\n\nDo you want to Stop the program(y/n)?: \n");
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
