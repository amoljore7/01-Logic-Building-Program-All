#include<stdio.h>
int main()
{
    int i,j,k=0,line,num;
    char alpha;
    printf("Enter the No of Line: ");
    scanf("%d",&line);
    for(i=1;i<=line;i++)
    {
        k=1;
        num=1;
        alpha='A';
        for(j=1;j<=2*line-1;j++)
        {
            if(j>=line+1-i&&j<=line-1+i&&k)
            {
                if(i%2==1)
                {
                  printf("%d",num);
                  num++;
                }
                else
                {
                    printf("%c",alpha);
                    alpha++;
                }

                k=0;
            }
            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
}
