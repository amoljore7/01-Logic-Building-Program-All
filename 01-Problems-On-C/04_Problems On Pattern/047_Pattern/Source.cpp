#include<stdio.h>
void Pattern(int iRow, int iCol)
{
	int i = 0, j = 0,k=1;
	if (iRow <= 0)
	{
		return;
	}
	if (iCol <= 0)
	{
		return;
	}
	for (i = 1; i <= iRow; i++)
	{
		if(i%2 ==1)
		{
		for (j = 1; j <= iCol; j++)
		{
			printf("%d\t", j);
		}
		
		printf("\n");
		}
		else
		{
		for (j = iCol; j>=1; j--)
		{
			printf("%d\t", j);
		}
		
		printf("\n");
		}
		
	}
}


int main(int argc,char *argv[])
{
	int iNum1=0;
	int iNum2=0;
	
	printf("\t\tEnter Row Number:\t");
	scanf("%d",&iNum1);
	fflush(stdin);
	
	printf("\t\tEnter Coloum Number:\t");
	scanf("%d",&iNum2);
	
	Pattern(iNum1,iNum2);
	
	return 0;
}

