#include<stdio.h>
int main()
{
    int i,j,x,k=1,p,r;
    printf("enter No of Rows: ");
    scanf("%d",&r);
    for(i=0;i<=r;i++)
    {
        if(i%2 ==1)
            k=k+1;
        else
        {
            k--;
            k=k+i;
        }
        x=1;
        p=k;
        for(j=1;j<=2*r-1;j++)
        {
            if(j<=2*i-1)
            {
                if(x==1)
                {
                printf("%d",p);

                    if(i%2)
                       {
                           p++;k++;
                       }

                    else
                        p--;
                }
                else
                    printf("*");
                    x=1-x;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
