#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=65;i<=64+n;i++)
    {
        for(j=65;j<=64+n;j++)
        {
            if(j==i | j==64+(64+n-i)+1)
            {
                printf("%c",i);
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