//No return type with argument

#include<stdio.h>
void add(int,int);
int main()
{
    int a, b;
    printf("Haal muji: ");
    scanf("%d%d",&a,&b);
    add(a,b);
    return 0;
}
void add(int x,int y)
{
    printf("The sum is %d",x+y);
}