#include<stdio.h>
int checker(int *,int);
int main()
{
    int a[100],i,n;
    printf("Enter the number of elements you want to add: ");
    scanf("%d",&n);
    printf("Enter the %d elements you want to add: ",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        printf("The elements are ");
        printf("%d",a[i]);
        printf("\n");
    }
    checker(a,n);
    return 0;
}
int checker(int *c,int n)
{
    int i,j,hold;
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-1-i;j++)
        {
            if(c[j+1]<c[j])
            {
                hold = c[j+1];
                c[j+1] = c[j];
                c[j] = hold;
            }
        }
    }
    printf("Sorted list in ascending order:\n");

  for (i = 0; i < n; i++)
     {
         printf("%d\n", c[i]);
         
     }
    printf("The largest out of them is %d",c[n-1]);
}