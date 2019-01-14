#include<stdio.h>
void Pattern(int iNum1,int iNum2)
{
	
	if( iNum1 < 0 )
		{
			iNum1=-iNum1;
		}
	if( iNum2 < 0 )
		{
			iNum2=-iNum2;
		}
	if(iNum1!=iNum2)
		{
			printf("\n\t\tPlz Enter Same Row And Coloum\n");
			return;
		}
		int i,j,k=1,l=1;
		for(i=1;i<=iNum1;i++)
			{
				for(j=1;j<=iNum2;j++)
					{
						if(j<=i)
							{
							printf("%d\t",l);
							l++;		
							}	
						else
							{
								printf("*\t");
							}
					}
					printf("\n");
				
			}
	
}
int main(int argc,char argv[])
{
	int iNo1=0;
	int iNo2=0;
	printf("\t\tEnter First Number:\t");
	scanf("%d",&iNo1);
	
	printf("\t\tEnter Second Number:\t");
	scanf("%d",&iNo2);
	
	Pattern(iNo1,iNo2);
	
	return 0;
}
