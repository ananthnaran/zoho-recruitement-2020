#include<stdio.h>

void main()
{
    int n=0;
    int k=0;
    int j=0;
    printf("Enter the count: ");
    scanf("%d",&n);
    k=n;
    for(int i=1;i<=n;i++)
    {
        for( j=k;j>k-i;j--)
        {
            printf("%d ",j);
        }
        for(j=1;j<=k-i;j++)
        {
            printf("%d ",n-i+1);
        }
        printf("\n");
    }
}
