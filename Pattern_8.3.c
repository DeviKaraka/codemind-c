#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=1;j--)
        {
            if(j==i | j==(n-i)+1)
            {
                printf("%d",i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("
");
    }
}