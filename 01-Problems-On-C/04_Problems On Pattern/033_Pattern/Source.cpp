#include<stdio.h>
void Pattern(int iRow,int iCol)
{
	
	if( iRow < 0 )
		{
			iRow=-iRow;
		}
	if( iCol < 0 )
		{
			iCol=-iCol;
		}
	if(iRow!=iCol)
		{
			printf("\n\t\tPlz Enter Same Row And Coloum\n");
			return;
		}
		int i,j;
	for(i=1;i<=iRow;i++)
		{
			for(j=1;j<=iCol;j++)
				{
		            if(i<=j)
		            {
		            	printf("* ");
					}
					else
					{
						printf("  ");
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
