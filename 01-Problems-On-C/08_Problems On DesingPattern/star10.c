#include<stdio.h>
int main()
{
    int row,n,i,j,k=0;
    printf("Enter the row and col: ");
    scanf("%d",&row);
    n=(row+1)/2;
    for(i=1;i<=row;i++)
    {
        i<=n? k++:k--;
        for(j=1;j<=row;j++)
        {
            if(j>=n+1-k&&j<=n-1+k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
