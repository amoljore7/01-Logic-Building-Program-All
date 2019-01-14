#include<stdio.h>
int main()
{
    int i,j,k,r;
    printf("Enter the no of row: ");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        k=0;
        for(j=1;j<=r;j++)
        {
            if(j<=i)
            {
                printf("%d ",k);
                k=k+i-1;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
