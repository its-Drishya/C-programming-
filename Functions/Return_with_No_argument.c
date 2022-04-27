//Return type with no argument

#include<stdio.h>
int add();
int main()
{
    printf("The sum is %d",add());
    return 0;
}
int add()
{
    int a,b;
    printf("Sum: ");
    scanf("%d%d",&a,&b);
    return (a + b);
}