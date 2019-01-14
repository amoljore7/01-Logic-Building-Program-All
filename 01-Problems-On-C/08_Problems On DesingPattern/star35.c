#include<stdio.h>
int main()
{
    int i,j,k=1,p,r;
    printf("Enter no of row: ");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        p=k;
        for(j=1;j<=i;j++)
        {
            printf("%d\t",p);
            p=p-(r-i+j);
        }
        printf("\n");
        k=k+1+r-i;

    }
}
