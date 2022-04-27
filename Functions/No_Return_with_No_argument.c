//No returnwith no arguement

#include<stdio.h>
void add();
int main()
{
    add();
    return 0;
}
void add()
{
    int a, b, sum;
    printf("Haal muji: ");
    scanf("%d%d",&a,&b);
    sum = a+b;
    printf("%d",sum);
}