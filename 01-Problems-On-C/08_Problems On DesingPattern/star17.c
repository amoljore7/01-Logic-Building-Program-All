#include<stdio.h>
int main()
{
    int i,j,k=0;
    for(i=1;i<=9;i++)
    {
        i<6?k++:k--;
        for(j=1;j<=9;j++)
        {
            if(j>=7-k&&j<=3+k)
            {
                printf(" ");
            }
            else
                printf("*");
        }
        printf("\n");
    }
}
