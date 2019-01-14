#include<stdio.h>
int main()
{
    int i,j,r;
    printf("Enter the No of Row: ");
    scanf("%d",&r);
    char k;
    for(i=1;i<=r;i++)
    {
        k='A';
        for(j=1;j<=2*r-1;j++)
        {
            if(j<=r+1-i||j>=r-1+i)
                printf("%c",k);
            else
                printf(" ");
                k++;
        }
        printf("\n");
    }
}
